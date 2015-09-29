# Copyright (c) 2015 The University of Wisconsin Madison
# All rights reserved
#
# The license below extends only to copyright in the software and shall
# not be construed as granting a license to any other intellectual
# property including but not limited to intellectual property relating
# to a hardware implementation of the functionality of the software
# licensed hereunder.  You may use the software subject to the license
# terms below provided that you ensure that this notice is replicated
# unmodified and in its entirety in all distributions of the software,
# modified or unmodified, in source code or in binary form.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met: redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer;
# redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution;
# neither the name of the copyright holders nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# Authors: Mohammad Alian

# This is an example of an n port network switch (star topology) to work in
# pd-gem5. Users can extend this to have different different topologies

import optparse
import sys

import m5
from m5.defines import buildEnv
from m5.objects import *
from m5.util import addToPath, fatal

addToPath('../common')

import Simulation
import Options

def build_switch(options):
    # instantiate an EtherSwitch with "num_node" ports. Also pass along
    # timing parameters
    switch = EtherSwitch(port_count = options.num_nodes,
                         delay = options.sw_delay)
    # instantiate etherlinks to connect switch box ports to ethertap objects
    switch.portlink = [EtherLink(mode = 1,
                                 delay = options.etherlink_delay,
                                 speed = options.etherlink_speed,
                                 ni_speed = options.sw_speed)
                       for i in xrange(options.num_nodes)]

    # instantiate ethertap objects in server mode
    switch.porttap = [EtherTap(server = True,
                               sync_quantum = options.sync_quantum)
                      for i in xrange(options.num_nodes)]
    for (i, link) in enumerate(switch.portlink):
        link.int1 = switch.porttap[i].tap
        link.int0 = switch.interface[i]

    return switch
# Add options
parser = optparse.OptionParser()
Options.addCommonOptions(parser)
Options.addFSOptions(parser)
(options, args) = parser.parse_args()

system = build_switch(options)
root = Root(full_system = True, system = system)
Simulation.run(options, root, None, None)

