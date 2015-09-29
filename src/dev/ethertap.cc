/*
 * Copyright (c) 2003-2005 The Regents of The University of Michigan
 * All rights reserved.
 *
 * The license below extends only to copyright in the software and shall
 * not be construed as granting a license to any other intellectual
 * property including but not limited to intellectual property relating
 * to a hardware implementation of the functionality of the software
 * licensed hereunder.  You may use the software subject to the license
 * terms below provided that you ensure that this notice is replicated
 * unmodified and in its entirety in all distributions of the software,
 * modified or unmodified, in source code or in binary form.
 *
 * Copyright (c) 2015 The University of Wisconsin Madison
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Nathan Binkert
 *          Mohammad Alian
 */

/* @file
 * Interface to connect a simulated ethernet device to the real world
 */

#if defined(__OpenBSD__) || defined(__APPLE__)
#include <sys/param.h>
#endif
#include <netinet/in.h>
#include <unistd.h>

#include <deque>
#include <string>

#include "base/misc.hh"
#include "base/pollevent.hh"
#include "base/socket.hh"
#include "base/trace.hh"
#include "debug/Ethernet.hh"
#include "debug/EthernetData.hh"
#include "debug/Pdgem5Sync.hh"
#include "dev/etherdump.hh"
#include "dev/etherint.hh"
#include "dev/etherpkt.hh"
#include "dev/ethertap.hh"
#include "sim/sim_exit.hh"
#include <fcntl.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <iostream>
#include <sys/ioctl.h>

using namespace std;
#define SIM 0
#define RECV 1
#define SIM_MSG 1
#define CKPT_MSG 2
vector<bool> pdgem5_ckpt_flag;
/**
 */
class TapListener
{
  protected:
    ListenSocket listener;
    EtherTap *tap;
    int port;

  public:
    TapListener(EtherTap *t, int p)
        : tap(t), port(p) {}
    ~TapListener() {}

    void accept();
    void listen(bool flag);
};

void
TapListener::listen(bool flag)
{
    // if this is the first instance of switch tap then we should create
    // a socket, otherwise we don't need to create a new socket
    if (flag) {
        while (!listener.listenTap(port, true)) {
           DPRINTF(Ethernet, "TapListener(listen): Can't bind port %d\n"
                   , port);
           port++;
        }
        struct ifaddrs * ifAddrStruct=NULL;
        struct ifaddrs * ifa=NULL;
        void * tmpAddrPtr=NULL;
        getifaddrs(&ifAddrStruct);

        //print the port and ip information of EthrTap
        for (ifa = ifAddrStruct; ifa != NULL; ifa = ifa->ifa_next) {
           if (!ifa->ifa_addr)
              continue;
           //check if it is a valid IP4 Address
           if (ifa->ifa_addr->sa_family == AF_INET) {
             tmpAddrPtr = &((struct sockaddr_in *)ifa->ifa_addr)->sin_addr;
             char addressBuffer[INET_ADDRSTRLEN];
             inet_ntop(AF_INET, tmpAddrPtr, addressBuffer, INET_ADDRSTRLEN);
             if (!strcmp(ifa->ifa_name, "eth0")) {
                 setbuf(stdout, NULL);
                 ccprintf(cerr, "Listening for tap connection on %s %s %d\n",
                 ifa->ifa_name, addressBuffer, port);
                 fflush(stdout);
             }
           }
        }
        if (ifAddrStruct!=NULL)
            freeifaddrs(ifAddrStruct);
     }
}

void
TapListener::accept()
{
    if (tap->isattached()) {
        DPRINTF(Ethernet, "EtherTap already attached\n");
        return;
    }
    // As a consequence of being called from the PollQueue, we might
    // have been called from a different thread. Migrate to "our"
    // thread.
    EventQueue::ScopedMigration migrate(tap->eventQueue());

    if (!listener.anyislistening())
        panic("TapListener(accept): cannot accept if we're not listening!");

    int sfd = listener.acceptTap(true);
     if (sfd != -1)
         tap->attach(sfd);
}

/**
 */
class TapConnector
{
  protected:
    ConnectSocket connector;
    EtherTap *tap;
    int port;
    const char *ip;

  public:
    TapConnector(EtherTap *t, int p, const char *ip_)
        : tap(t), port(p), ip(ip_) {}
    ~TapConnector() { }

    void connect();
};

void
TapConnector::connect()
{
    // connect to the switch tap device which is listening for connections
    int sfd = connector.connect(port, ip, true);
    if (sfd != -1)
        tap->attach(sfd);
}

void
EtherTap::accept()
{
    listener->accept();
}

/**
 */
EtherTap::EtherTap(const Params *p)
     : EtherObject(p), socket(-1), buflen(p->bufsz), dump(p->dump),
      interface(NULL), syncQuantum(p->sync_quantum), inSwitchTap(p->server),
      syncMsgReceived(false), attached(false), txEvent(this),
      tapInEvent(this), recvSyncEvent(this), sendSyncEvent(this),
      acceptEvent(this)
{
    if (ListenSocket::allDisabled())
        fatal("All listeners are disabled! EtherTap can't work!");

    static bool flag = true;
    buffer = new char[buflen];
    interface = new EtherTapInt(name() + ".interface", this);
    tapId = pdgem5_ckpt_flag.size();
    pdgem5_ckpt_flag.push_back(false);

    // if this is a tap interface of the switch, inistantiate TapListener
    // object and schedule acceptEvent to accept an incomming connection
    // from a node tap interface. Also initiate synchronized simulation by
    // scheduling a sendSyncEvent
    if (inSwitchTap) {
        listener = new TapListener(this, p->port);
        listener->listen(flag);
        schedule(sendSyncEvent, curTick());
        schedule(acceptEvent, curTick());
        flag = false;
    } else {
        // if this is tap interface of a node, instantiate TapConnector
        // which connects to the associated tap interface of the switch
        // on p->port and p->server_ip. Also, initiate sychronized
        // simulation by scheduling a  recvSyncEvent
        connector = new TapConnector(this, p->port, p->server_ip.c_str());
        connector->connect();
        schedule(recvSyncEvent, curTick());
    }
    // set polling quantum for incoming packet to a value proportional to
    // syncQuantum and not grater that 5us
    pollQuantum = syncQuantum / 2;
    if (syncQuantum > 10000000)
        pollQuantum = 5000000;
}

EtherTap::~EtherTap()
{
    if (buffer)
        delete [] buffer;

    delete interface;
    delete listener;
}

void
EtherTap::attach(int fd)
{
    if (socket != -1)
        close(fd);

    buffer_offset = 0;
    data_len = 0;
    socket = fd;
    DPRINTF(Ethernet, "EtherTap attached\n");
    attached = true;
    if (!tapInEvent.scheduled())
        schedule(tapInEvent, curTick() + pollQuantum);
}

void
EtherTap::detach()
{
    DPRINTF(Ethernet, "EtherTap detached\n");
    close(socket);
    socket = -1;
}

/**
 * send sync message to peer.
 */
void
EtherTap::sendSync()
{
    int msg = SIM_MSG;
    // @node: if ckpt_m5Ops is executed during this quantum simulation
    //        send a CKPT_MSG to swtich
    // @switch: send ckpt_msg to connected nodes
    if (pdgem5_ckpt_flag[tapId]) {
        msg = CKPT_MSG;
        pdgem5_ckpt_flag[tapId] = false;
        // switch should dump checkpoint when it sends CKPT_MSG to the
        // last peer gem5 process
        if (inSwitchTap) {
            int remaining_taps = 0;
            for (int i = 0; i < pdgem5_ckpt_flag.size(); i ++) {
                if (pdgem5_ckpt_flag[i])
                    remaining_taps ++;
            }
            if (remaining_taps == 0)
                exitSimLoop("checkpoint");
        }
    }
    uint32_t sync_msg = htonl(msg);
    ssize_t ret = write(socket, &sync_msg, sizeof(sync_msg));
    DPRINTF(Pdgem5Sync, "sent %d message to peer tap\n", msg);
    if (ret != sizeof(sync_msg))
        assert(ret == sizeof(sync_msg));
    if (inSwitchTap) {
        // schedule a recvSyncEvent for this tap interface
        // at the end of current quantum
        schedule(recvSyncEvent, curTick() + syncQuantum);
        if (!tapInEvent.scheduled())
            schedule(tapInEvent, curTick() + pollQuantum);
    } else {
        // if this is a node tap interface, wait for sync message
        // reception from switch
        DPRINTF(Pdgem5Sync, "wait for sync message from peer \n");
        syncState = RECV;
        process();
    }
}

void
EtherTap::recvSync()
{
    DPRINTF(Pdgem5Sync, "wait for sync message from peer \n");
    syncState = RECV;
    process();
}
bool
EtherTap::recvPacket(EthPacketPtr packet)
{
    if (dump)
        dump->dump(packet);

    DPRINTF(Ethernet, "EtherTap output len=%d\n", packet->length);
    DDUMP(EthernetData, packet->data, packet->length);
    uint32_t len = htonl(packet->length);
    ssize_t ret = write(socket, &len, sizeof(len));
    if (ret != sizeof(len))
        return false;
    ret = write(socket, packet->data, packet->length);
    if (ret != packet->length)
        return false;

    interface->recvDone();

    return true;
}

void
EtherTap::sendDone()
{}

void
EtherTap::process()
{
    char *data = buffer + sizeof(uint32_t);
    if (buffer_offset < data_len + sizeof(uint32_t)) {
        fd_set fds;
        struct timeval timeout;
        int rc;
        timeout.tv_sec = 0;
        timeout.tv_usec = 0;
        FD_ZERO(&fds);
        FD_SET(socket, &fds);
        rc = select(sizeof(fds), &fds, NULL, NULL, &timeout);
        if (rc > 0 || (syncState == RECV && !syncMsgReceived)) {
            int len = read(socket, buffer + buffer_offset,
                           buflen - buffer_offset);
            if (len > 0) {

                buffer_offset += len;
                if (data_len == 0)
                    data_len = ntohl(*(uint32_t *)buffer);
                // if it's a sync message
                if (data_len == SIM_MSG) {
                    syncMsgReceived = true;
                    data_len = 0;
                    // clear buffer from sync message
                    buffer_offset -= sizeof(data_len);
                    memmove(buffer, buffer + sizeof(data_len), buffer_offset);

                    // if the message in not the only data that we've read
                    if (buffer_offset != 0) {
                        data_len = ntohl(*(uint32_t *)buffer);
                    }
                } else if (data_len == CKPT_MSG) {
                    DPRINTF(Pdgem5Sync, "ckpt message received from peer\n");
                    syncMsgReceived = true;
                    data_len = 0;
                    // clear buffer from ckpt message
                    buffer_offset -= sizeof(data_len);
                    memmove(buffer, buffer + sizeof(data_len), buffer_offset);

                    // if the message in not the only data that we've read
                    if (buffer_offset != 0) {
                        data_len = ntohl(*(uint32_t *)buffer);
                    }

                    for (int i = 0; i < pdgem5_ckpt_flag.size(); i++) {
                        pdgem5_ckpt_flag[i] = true;
                    }
                }

                DPRINTF(Ethernet, "Received data from peer: len=%d "
                        "buffer_offset=%d data_len=%d\n", len, buffer_offset,
                        data_len);
            } else {
                exitSimLoop("pd-gem5 exit");
                return;
            }
        }
    }

    while (data_len != 0 && buffer_offset >= data_len + sizeof(uint32_t)) {
        EthPacketPtr packet;
        packet = make_shared<EthPacketData>(data_len);
        packet->length = data_len;
        memcpy(packet->data, data, data_len);

        buffer_offset -= data_len + sizeof(uint32_t);
        assert(buffer_offset >= 0);
        if (buffer_offset > 0) {
            memmove(buffer, data + data_len, buffer_offset);
            data_len = ntohl(*(uint32_t *)buffer);
            // if it's a sync message
            if (data_len == 1) {
                syncMsgReceived = true;
                data_len = 0;
                // clear buffer from sync message
                buffer_offset -= sizeof(data_len);
                memmove(buffer, buffer + sizeof(data_len), buffer_offset);

                // if the sync message in not the only data that we've read
                if (buffer_offset != 0) {
                    data_len = ntohl(*(uint32_t *)buffer);
                }
            }

        } else
            data_len = 0;

        DPRINTF(Ethernet, "EtherTap input len=%d\n", packet->length);
        DDUMP(EthernetData, packet->data, packet->length);
        if (!interface->sendPacket(packet)) {
            DPRINTF(Ethernet, "bus busy...buffer for retransmission\n");
            packetBuffer.push(packet);
            if (!txEvent.scheduled())
                schedule(txEvent, curTick() + retryTime);
        } else if (dump) {
            dump->dump(packet);
        }
    }
    if (!tapInEvent.scheduled())
        schedule(tapInEvent, curTick() + pollQuantum);

    switch (syncState) {
        case SIM:
            return;
        case RECV:
            if (syncMsgReceived) {
                syncState = SIM;
                syncMsgReceived = false;
                if (inSwitchTap) {
                    DPRINTF(Ethernet, "sync message received, send back a "
                            "go-ahead or ckpt msg to peer\n");
                    sendSync();
                } else {
                    if (pdgem5_ckpt_flag[tapId]) {
                        exitSimLoop("checkpoint");
                        pdgem5_ckpt_flag[tapId] = false;
                    }
                    DPRINTF(Ethernet, "sync message received, start sim\n");
                    // schedule a sendSyncEvent at the end of current quantum
                    // and return (let simulation goes on)
                    schedule(sendSyncEvent, curTick() + syncQuantum);
                    if (!tapInEvent.scheduled())
                        schedule(tapInEvent, curTick() + pollQuantum);
                }
                return;
            }
            // poll peer connection for sync message reception
            schedule(recvSyncEvent, curTick());
        default:
            return;
    }
}

void
EtherTap::retransmit()
{
    if (packetBuffer.empty())
        return;

    EthPacketPtr packet = packetBuffer.front();
    if (interface->sendPacket(packet)) {
        if (dump)
            dump->dump(packet);
        DPRINTF(Ethernet, "EtherTap retransmit\n");
        packetBuffer.front() = NULL;
        packetBuffer.pop();
    }

    if (!packetBuffer.empty() && !txEvent.scheduled())
        schedule(txEvent, curTick() + retryTime);
}

EtherInt*
EtherTap::getEthPort(const std::string &if_name, int idx)
{
    if (if_name == "tap") {
        if (interface->getPeer())
            panic("Interface already connected to\n");
        return interface;
    }
    return NULL;
}


//=====================================================================

void
EtherTap::serialize(CheckpointOut &cp) const
{
    SERIALIZE_SCALAR(socket);
    SERIALIZE_SCALAR(buflen);
    uint8_t *buffer = (uint8_t *)this->buffer;
    SERIALIZE_ARRAY(buffer, buflen);
    SERIALIZE_SCALAR(buffer_offset);
    SERIALIZE_SCALAR(data_len);
    bool in_event_scheduled = tapInEvent.scheduled();
    paramOut(cp, "in_event_scheduled", in_event_scheduled);
    if (in_event_scheduled) {
        Tick event_time = tapInEvent.when();
        paramOut(cp, "in_event_time", event_time);
    }

    bool recv_event_scheduled = recvSyncEvent.scheduled();
    paramOut(cp, "recv_event_scheduled", recv_event_scheduled);
    if (recv_event_scheduled) {
        Tick event_time = recvSyncEvent.when();
        paramOut(cp, "recv_event_time", event_time);
    }

    bool send_event_scheduled = sendSyncEvent.scheduled();
    paramOut(cp, "send_event_scheduled", send_event_scheduled);
    if (send_event_scheduled) {
        Tick event_time = sendSyncEvent.when();
        paramOut(cp, "send_event_time", event_time);
    }
}

void
EtherTap::unserialize(CheckpointIn &cp)
{
    UNSERIALIZE_SCALAR(buflen);
    uint8_t *buffer = (uint8_t *)this->buffer;
    UNSERIALIZE_ARRAY(buffer, buflen);
    UNSERIALIZE_SCALAR(buffer_offset);
    UNSERIALIZE_SCALAR(data_len);

    if (inSwitchTap) {
        if (acceptEvent.scheduled())
            deschedule(acceptEvent);
        schedule(acceptEvent, curTick());
    }
    if (tapInEvent.scheduled())
        deschedule(tapInEvent);
    if (recvSyncEvent.scheduled())
        deschedule(recvSyncEvent);
    if (sendSyncEvent.scheduled())
        deschedule(sendSyncEvent);

    bool in_event_scheduled;
    paramIn(cp, "in_event_scheduled", in_event_scheduled);
    if (in_event_scheduled) {
        Tick event_time;
        paramIn(cp, "in_event_time", event_time);
        schedule(tapInEvent, event_time);
    }

    bool recv_event_scheduled;
    paramIn(cp, "recv_event_scheduled", recv_event_scheduled);
    if (recv_event_scheduled) {
        Tick event_time;
        paramIn(cp, "recv_event_time", event_time);
        schedule(recvSyncEvent, event_time);
    }

    bool send_event_scheduled;
    paramIn(cp, "send_event_scheduled", send_event_scheduled);
    if (send_event_scheduled) {
        Tick event_time;
        paramIn(cp, "send_event_time", event_time);
        schedule(sendSyncEvent, event_time);
    }
}

//=====================================================================

EtherTap *
EtherTapParams::create()
{
    return new EtherTap(this);
}
