#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_smartdict[] = {
    120,156,205,88,109,111,27,69,16,222,59,191,36,118,210,54,
    73,211,180,208,183,165,188,153,210,198,80,90,104,171,170,66,
    165,42,170,128,0,151,210,210,168,112,186,220,174,237,75,206,
    119,238,237,94,18,163,246,11,32,33,33,129,196,7,36,126,
    13,127,128,31,5,51,115,47,182,83,167,200,170,19,215,137,
    71,227,189,243,236,51,51,207,140,111,199,101,233,171,0,239,
    143,57,99,202,3,69,192,191,193,124,198,238,161,102,50,223,
    96,109,131,173,25,204,16,5,38,77,214,48,152,40,178,159,
    25,251,137,177,135,107,5,38,74,76,22,105,181,156,175,150,
    152,152,98,210,160,213,233,124,181,140,171,77,176,53,197,68,
    133,173,214,170,176,155,247,47,188,106,6,104,26,197,249,68,
    157,6,225,104,29,9,207,213,244,225,190,19,121,206,186,47,
    221,12,50,222,118,11,33,255,3,138,100,136,15,224,174,153,
    136,29,246,67,92,38,41,69,6,176,81,41,165,176,17,70,
    137,148,169,20,242,218,52,2,67,165,146,194,93,171,34,66,
    84,102,152,168,146,50,203,196,12,41,135,152,152,37,229,48,
    19,135,72,57,194,196,97,82,230,152,56,66,202,60,19,115,
    164,44,48,49,79,202,81,38,22,72,89,100,226,40,41,199,
    152,88,36,101,137,137,99,164,28,103,214,106,109,9,252,81,
    191,129,184,27,104,233,251,94,83,6,154,119,162,112,167,203,
    93,223,81,138,55,194,136,175,182,157,72,223,134,224,44,115,
    158,133,134,111,123,190,207,99,37,185,110,201,42,135,215,22,
    92,9,99,197,221,48,216,146,145,230,141,56,112,181,23,6,
    138,235,144,67,120,101,187,163,81,205,174,111,57,126,44,233,
    34,88,65,147,100,69,119,59,82,185,70,26,115,164,202,39,
    24,247,57,204,19,101,237,9,164,215,192,255,85,74,222,74,
    205,196,75,21,20,33,58,209,4,219,248,53,165,163,36,187,
    69,252,32,253,70,13,19,73,66,221,4,81,135,93,35,85,
    119,124,207,9,234,202,107,199,190,163,67,88,232,136,166,108,
    95,169,171,200,173,119,186,186,21,6,117,248,20,107,207,175,
    43,12,3,114,100,25,46,76,129,9,219,246,2,109,219,151,
    209,164,73,52,25,29,120,153,128,127,30,6,77,11,129,210,
    37,171,148,33,29,27,220,105,130,235,195,54,182,253,225,139,
    224,157,34,188,119,252,208,209,251,10,184,66,128,27,184,143,
    109,95,125,241,8,223,10,67,127,95,1,207,16,224,32,12,
    126,144,81,104,219,215,251,32,155,41,92,51,131,28,36,144,
    159,16,216,167,38,123,98,34,252,77,147,69,231,122,126,172,
    226,170,73,171,87,81,233,91,45,208,234,10,42,125,171,69,
    90,21,168,164,171,186,148,105,105,64,202,89,65,96,153,145,
    178,14,113,161,122,1,42,211,2,114,68,99,120,26,189,28,
    23,178,144,209,133,16,42,62,162,254,169,199,95,83,105,119,
    184,129,38,23,41,124,179,240,87,29,120,83,64,205,254,128,
    30,5,5,60,221,200,98,10,114,147,229,94,83,198,209,24,
    17,130,28,177,22,198,78,128,114,82,98,64,215,79,119,229,
    254,127,161,26,147,129,42,109,251,238,168,80,205,137,64,149,
    143,109,251,179,81,161,22,38,2,53,128,168,126,49,42,212,
    226,68,160,54,129,171,95,142,10,181,52,25,168,16,213,175,
    159,7,117,254,89,168,199,15,22,104,242,68,224,8,97,219,
    247,70,68,122,98,18,72,85,188,110,219,247,71,68,186,56,
    9,164,240,45,219,254,118,68,164,39,39,129,84,120,91,182,
    189,246,114,35,77,30,84,116,20,75,66,251,104,8,218,194,
    0,90,99,0,240,1,87,85,242,224,26,81,89,217,35,66,
    61,224,178,74,161,82,93,57,35,66,61,224,186,74,161,82,
    97,185,35,66,61,96,186,166,80,137,171,242,229,134,58,155,
    64,205,75,171,217,131,91,59,193,210,65,3,60,33,56,109,
    248,53,211,85,250,208,14,69,140,15,98,89,3,9,93,219,
    182,240,55,207,194,155,45,188,201,154,205,208,91,199,80,224,
    153,221,58,142,2,141,90,175,160,120,21,197,73,20,167,80,
    156,70,113,6,197,89,20,28,197,107,40,206,161,120,29,197,
    27,3,238,143,43,6,22,186,251,30,218,186,0,162,92,40,
    27,21,51,253,155,201,53,179,82,120,86,211,152,191,111,2,
    33,27,94,32,197,222,19,24,116,124,232,4,198,90,165,228,
    170,191,65,124,229,59,174,108,133,190,144,81,58,199,208,33,
    143,100,39,146,10,7,28,113,182,13,13,45,112,31,181,204,
    249,3,207,247,105,6,209,148,129,140,28,223,239,114,215,193,
    9,135,19,112,185,227,202,14,78,51,248,118,11,174,194,17,
    133,123,154,123,10,103,23,226,2,95,143,53,151,56,208,112,
    52,141,52,200,12,30,4,105,126,130,103,44,9,70,128,24,
    186,197,225,14,237,5,77,174,98,183,197,29,197,189,0,55,
    240,26,92,105,248,118,27,240,229,103,92,35,227,54,29,217,
    6,15,52,116,20,187,227,248,74,238,211,137,150,104,23,244,
    81,24,65,88,111,162,120,11,197,219,25,53,247,129,69,104,
    104,131,165,142,35,139,104,30,144,207,161,114,86,152,25,43,
    30,237,197,138,81,231,114,56,145,51,104,52,71,99,67,212,
    171,72,45,44,68,213,5,129,251,3,15,156,40,155,144,233,
    150,163,57,114,77,65,6,35,200,172,74,248,224,245,38,106,
    200,164,228,92,171,146,33,87,43,4,90,165,119,35,53,233,
    72,157,204,190,184,144,29,25,8,100,8,176,13,214,189,8,
    72,230,52,101,222,241,138,25,43,46,230,29,111,179,76,163,
    3,154,130,108,208,168,0,27,160,153,12,1,10,56,15,93,
    21,120,200,164,2,233,128,136,164,142,163,64,113,167,55,208,
    75,166,126,192,67,216,51,27,206,201,29,79,105,162,40,46,
    10,71,59,235,14,21,132,32,63,240,149,91,10,248,51,213,
    155,248,181,237,41,185,146,176,135,6,50,168,209,168,21,91,
    119,83,106,202,118,175,49,211,242,166,236,238,199,83,15,236,
    230,65,141,217,118,140,102,177,205,178,226,172,177,84,118,113,
    79,124,151,178,216,158,78,42,110,195,72,131,169,105,74,131,
    227,165,2,51,122,177,124,200,104,114,34,35,108,15,20,36,
    37,53,149,119,216,128,144,116,243,6,195,85,152,48,101,27,
    194,231,111,59,93,149,71,80,129,31,61,54,100,177,6,220,
    43,201,224,229,93,132,146,224,87,25,254,93,115,25,235,98,
    22,88,188,60,222,90,172,131,137,31,243,54,80,160,230,52,
    64,67,236,6,205,190,104,65,144,110,127,183,192,158,38,65,
    163,31,226,239,77,246,120,46,111,95,61,175,48,3,9,213,
    136,26,125,36,192,59,183,198,235,200,251,96,226,151,94,63,
    203,29,65,56,46,58,242,14,40,59,231,118,57,50,63,224,
    200,125,3,252,120,32,216,16,95,170,73,244,163,225,254,148,
    50,79,199,235,211,7,96,226,215,172,81,50,99,41,241,106,
    128,201,151,134,165,231,12,123,100,162,99,79,205,1,114,55,
    204,61,83,85,74,201,149,122,214,27,9,226,141,155,214,165,
    177,255,6,92,1,19,191,239,74,87,33,229,29,165,11,111,
    216,89,222,229,216,233,61,29,123,78,234,42,105,234,134,249,
    71,165,101,93,30,187,123,31,129,137,63,122,153,59,101,88,
    72,191,188,17,149,179,244,157,101,108,119,99,199,177,111,214,
    139,250,134,187,121,135,37,167,44,124,0,27,218,38,240,73,
    19,26,181,19,251,227,157,223,210,142,127,246,101,108,108,190,
    80,109,65,239,75,81,15,243,202,186,58,246,12,93,3,19,
    127,245,220,169,97,11,222,253,252,179,140,2,59,36,117,23,
    42,71,34,46,165,55,73,193,53,182,47,143,72,231,193,196,
    99,180,133,231,152,178,89,54,43,135,42,37,120,156,46,226,
    123,182,176,82,163,243,3,157,26,140,140,9,201,239,47,166,
    35,92,223,144,110,242,203,75,150,178,233,149,15,7,194,241,
    131,165,131,207,141,228,168,115,19,179,165,48,161,85,99,206,
    92,186,190,52,181,116,254,63,48,198,97,46,
};

EmbeddedPython embedded_m5_util_smartdict(
    "m5/util/smartdict.py",
    "/users/alian/simulators/pdgem5/src/python/m5/util/smartdict.py",
    "m5.util.smartdict",
    data_m5_util_smartdict,
    1820,
    7707);

} // anonymous namespace
