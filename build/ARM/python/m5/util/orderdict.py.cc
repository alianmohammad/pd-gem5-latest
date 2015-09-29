#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_orderdict[] = {
    120,156,197,86,221,107,212,64,16,159,221,228,238,154,107,197,
    106,245,68,161,26,69,49,126,224,129,96,31,164,20,169,10,
    190,168,144,250,129,7,26,98,118,61,99,243,113,38,123,181,
    133,250,98,125,246,95,214,153,73,114,31,42,62,181,54,119,
    59,76,118,147,153,223,239,183,179,187,137,160,190,44,108,15,
    92,128,114,13,29,5,48,20,48,64,71,128,146,144,8,72,
    37,12,36,8,28,208,22,104,9,31,36,40,11,190,3,28,
    0,188,25,216,160,108,216,242,90,248,170,113,208,228,133,210,
    133,138,35,19,255,196,203,19,77,255,35,236,122,26,239,198,
    89,212,164,165,161,77,74,251,30,29,13,48,16,148,28,227,
    98,54,76,78,142,69,16,200,177,235,148,131,22,165,35,167,
    13,170,197,78,7,84,155,157,5,80,29,118,28,80,11,236,
    116,65,57,236,44,130,191,229,117,49,77,36,106,190,54,182,
    231,148,252,9,1,4,216,23,112,32,40,237,182,13,197,45,
    48,76,126,210,223,195,246,77,64,134,218,96,23,64,32,201,
    126,178,104,120,95,194,15,96,121,182,60,138,252,44,166,28,
    229,53,34,181,59,210,145,209,202,13,141,155,230,165,113,243,
    76,187,97,49,28,167,58,51,183,221,97,110,220,107,202,35,
    40,134,222,76,176,151,164,122,177,55,210,143,139,34,47,12,
    169,26,108,235,189,210,180,209,27,143,84,104,52,39,49,244,
    82,169,147,15,236,96,200,234,137,237,47,228,122,164,46,155,
    114,3,77,127,92,234,162,236,135,73,28,102,253,50,78,199,
    73,104,114,236,24,169,161,78,239,245,203,34,234,143,246,204,
    199,60,235,227,221,216,196,73,127,50,135,119,112,96,129,48,
    4,113,22,155,32,184,66,49,187,60,121,167,69,91,172,8,
    71,68,86,173,40,181,135,164,232,58,176,108,40,208,118,7,
    138,75,172,20,254,69,173,165,64,21,141,36,198,56,112,32,
    225,147,93,171,120,32,107,21,73,191,103,92,81,62,107,67,
    204,194,209,72,103,138,5,41,199,35,93,248,4,194,44,50,
    182,82,155,216,232,52,8,88,26,191,221,232,137,194,177,60,
    52,120,168,154,248,75,24,226,6,197,106,179,22,75,168,68,
    36,209,147,179,58,220,172,42,203,136,134,168,108,20,168,106,
    167,34,78,247,191,179,38,90,179,4,149,78,42,130,83,61,
    10,157,230,59,218,147,13,97,255,68,195,239,208,72,158,196,
    16,119,40,150,205,36,123,130,23,143,152,165,232,254,73,17,
    55,5,81,47,18,11,102,136,217,243,196,136,103,148,232,176,
    96,74,252,12,243,56,92,10,167,48,196,221,41,133,149,138,
    66,51,83,17,81,88,69,103,183,87,23,233,163,183,139,240,
    149,11,245,149,248,220,133,215,51,248,69,83,142,71,169,57,
    47,54,156,234,130,214,252,218,20,248,242,20,184,213,0,191,
    76,192,47,76,128,159,100,224,188,242,206,31,19,248,110,13,
    126,39,76,198,186,188,255,87,248,118,3,255,58,193,119,39,
    240,207,214,186,215,12,240,140,57,38,18,78,77,130,22,28,
    199,155,231,208,52,46,127,154,173,138,192,197,63,65,30,77,
    73,243,134,70,213,177,73,241,36,67,155,19,151,129,93,132,
    230,164,98,113,151,103,106,227,157,4,212,245,255,106,74,97,
    171,162,120,252,47,212,87,231,81,247,102,80,99,195,146,56,
    14,236,173,170,30,82,254,80,168,161,123,180,255,215,7,99,
    22,166,58,8,184,246,131,32,205,213,56,193,91,159,170,136,
    79,9,222,69,121,31,242,79,147,89,33,115,134,204,89,50,
    61,50,231,230,64,31,218,230,71,113,104,147,40,41,93,91,
    56,29,167,229,216,147,159,229,88,213,105,99,58,12,61,76,
    18,164,65,156,94,98,86,250,90,243,249,219,141,4,166,136,
    62,28,9,74,206,184,94,233,182,177,218,44,55,71,46,203,
    95,204,6,33,172,
};

EmbeddedPython embedded_m5_util_orderdict(
    "m5/util/orderdict.py",
    "/users/alian/simulators/pdgem5/src/python/m5/util/orderdict.py",
    "m5.util.orderdict",
    data_m5_util_orderdict,
    869,
    2719);

} // anonymous namespace
