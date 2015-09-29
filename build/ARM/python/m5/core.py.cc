#include "sim/init.hh"

namespace {

const uint8_t data_m5_core[] = {
    120,156,165,143,187,14,194,48,12,69,157,194,192,208,145,133,
    1,193,216,137,44,176,33,132,4,115,145,218,141,173,106,35,
    72,149,62,148,56,67,37,54,248,111,176,163,34,62,128,40,
    113,142,237,92,219,41,97,92,17,157,227,26,192,45,8,42,
    218,2,12,192,149,32,130,23,129,224,72,158,76,40,171,223,
    180,210,82,16,138,81,121,98,229,156,0,1,106,1,117,4,
    15,128,167,0,65,149,242,132,95,165,65,138,51,214,183,168,
    108,91,24,156,146,83,118,86,97,76,224,20,94,60,246,30,
    207,218,6,5,178,160,34,135,199,11,198,109,201,72,239,148,
    117,178,48,186,104,165,211,141,55,5,118,20,232,171,155,106,
    118,210,217,82,246,3,222,187,86,146,199,213,55,253,144,241,
    140,43,174,192,0,34,225,43,99,12,153,95,135,255,218,132,
    223,237,155,174,242,70,29,150,223,118,113,244,1,137,69,75,
    18,
};

EmbeddedPython embedded_m5_core(
    "m5/core.py",
    "/users/alian/simulators/pdgem5/src/python/m5/core.py",
    "m5.core",
    data_m5_core,
    209,
    357);

} // anonymous namespace