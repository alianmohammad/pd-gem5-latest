#include "sim/init.hh"

namespace {

const uint8_t data_m5_config[] = {
    120,156,165,144,205,79,27,49,16,197,199,222,143,36,40,42,
    18,82,79,5,169,199,109,165,102,79,233,9,33,164,136,126,
    28,8,210,114,219,75,181,202,154,196,209,218,78,215,14,18,
    82,184,0,119,254,228,118,158,1,193,29,107,215,30,191,177,
    223,252,198,11,122,30,25,255,167,159,137,252,35,7,45,127,
    130,58,162,250,41,150,212,9,50,146,106,73,38,161,58,33,
    147,82,157,145,80,68,235,156,214,3,106,19,186,23,84,15,
    73,13,201,223,209,171,158,70,125,68,106,68,61,235,146,84,
    134,184,205,232,94,34,5,241,141,194,14,127,239,200,114,201,
    156,30,184,252,0,28,151,197,128,153,244,63,30,243,34,225,
    48,0,86,251,86,247,33,143,209,149,238,84,72,57,92,59,
    109,195,136,131,243,233,159,217,197,252,199,239,159,81,254,117,
    113,126,230,113,115,98,166,11,193,171,228,31,251,25,58,254,
    6,75,94,247,208,235,101,144,216,236,8,56,183,130,66,66,
    59,1,82,255,37,166,119,224,129,197,188,128,115,0,218,194,
    217,43,192,64,152,59,171,194,240,25,101,211,132,85,133,195,
    5,10,198,188,109,204,83,30,151,192,93,224,245,227,228,191,
    243,84,110,189,234,125,217,116,186,177,165,215,102,219,53,193,
    177,176,105,151,202,76,75,223,47,202,205,77,88,57,91,242,
    14,30,122,57,97,1,205,44,85,248,10,155,49,204,68,46,
    82,177,47,198,34,149,197,30,138,131,192,249,200,235,252,36,
    146,225,92,196,171,144,172,6,47,253,40,123,173,123,103,43,
    220,171,178,23,117,229,140,226,46,95,121,223,13,141,103,56,
    54,174,221,118,234,228,8,94,31,120,26,139,195,228,64,230,
    201,129,248,36,62,202,255,248,79,131,220,
};

EmbeddedPython embedded_m5_config(
    "m5/config.py",
    "/users/alian/simulators/pdgem5/src/python/m5/config.py",
    "m5.config",
    data_m5_config,
    395,
    672);

} // anonymous namespace
