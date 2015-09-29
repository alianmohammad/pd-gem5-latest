#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Platform[] = {
    120,156,189,88,109,111,219,200,17,158,37,41,218,82,172,216,
    142,243,30,223,153,105,206,168,122,232,89,109,218,244,14,184,
    32,104,154,20,104,10,196,151,82,5,146,168,69,121,52,185,
    146,41,83,164,64,174,146,211,193,254,82,7,109,191,245,71,
    20,253,208,255,81,244,111,181,51,179,36,77,201,78,113,64,
    171,216,226,98,185,59,156,157,151,103,102,103,55,128,226,175,
    129,207,207,29,128,252,95,2,32,196,159,128,24,96,44,160,
    47,64,72,1,225,22,28,53,32,251,41,132,13,120,7,208,
    55,64,26,112,138,29,19,126,103,64,178,198,223,216,16,155,
    60,34,96,214,2,105,65,191,1,47,147,77,176,164,13,71,
    45,200,190,6,33,68,34,224,85,184,2,225,42,188,67,238,
    216,105,50,195,85,8,91,220,105,66,120,137,59,45,152,109,
    128,188,4,125,100,190,2,253,54,178,250,20,89,93,102,86,
    255,36,86,33,206,92,133,176,77,228,40,203,107,162,180,136,
    146,215,184,204,92,214,75,201,54,160,191,89,246,175,212,250,
    91,181,254,213,90,255,90,173,127,189,214,191,81,235,223,172,
    245,111,213,250,183,107,253,59,181,254,54,247,215,65,110,194,
    232,35,24,125,12,163,29,24,160,113,55,42,13,28,144,38,
    140,238,66,255,46,72,252,57,112,138,246,15,55,107,95,124,
    143,191,184,82,125,113,143,191,248,4,250,159,128,196,223,61,
    253,133,13,189,206,53,244,105,244,111,252,235,160,79,65,173,
    97,243,70,102,121,148,38,94,148,12,210,200,160,121,155,26,
    66,64,64,205,74,1,133,39,4,133,127,0,227,32,52,10,
    40,156,0,50,22,164,75,108,192,9,119,78,12,152,117,224,
    88,192,200,130,208,132,99,92,166,65,2,12,5,156,26,240,
    123,147,8,78,176,181,208,121,31,131,165,52,14,70,236,60,
    205,105,5,78,26,112,220,128,222,171,99,131,6,142,154,144,
    253,29,190,221,102,166,171,204,212,128,99,108,45,56,181,224,
    196,134,151,72,132,67,163,38,169,47,94,29,163,166,56,210,
    235,88,40,237,126,77,93,82,37,140,178,196,31,75,181,142,
    125,111,226,103,254,216,123,17,251,106,144,102,227,78,171,36,
    74,243,189,137,175,14,93,254,202,36,115,140,39,138,185,165,
    137,84,151,176,51,136,146,208,27,167,225,52,150,106,149,88,
    121,131,40,150,158,199,147,207,198,147,52,83,191,204,178,52,
    115,201,162,60,24,167,126,245,5,217,51,136,211,92,118,104,
    53,94,198,37,246,138,168,7,19,230,72,2,176,164,244,113,
    40,243,32,139,38,10,29,165,57,18,53,113,235,144,139,184,
    201,159,99,211,157,230,232,206,174,31,71,126,210,205,163,241,
    20,85,75,113,96,18,14,229,248,65,247,96,26,197,97,247,
    177,251,188,59,153,169,195,52,233,226,88,148,40,137,38,137,
    187,243,198,216,67,138,43,196,246,109,52,244,34,86,200,59,
    148,241,68,102,109,26,189,77,75,138,13,177,38,108,97,138,
    142,104,99,175,129,143,41,182,141,75,98,63,34,149,2,82,
    147,192,100,150,240,249,27,176,163,208,207,71,6,100,219,4,
    142,17,254,4,121,19,33,210,163,57,131,231,126,67,182,208,
    163,35,147,92,174,7,143,25,80,136,44,164,124,72,62,78,
    128,81,209,128,145,13,26,45,8,50,13,159,108,70,45,146,
    19,27,3,153,91,144,255,117,158,67,178,1,104,107,76,16,
    56,116,29,151,250,35,3,176,215,33,193,247,25,9,234,48,
    202,211,183,9,219,155,250,28,50,61,180,201,139,217,87,7,
    35,25,168,124,7,7,94,167,83,39,240,147,36,85,142,31,
    134,142,175,84,22,29,76,149,204,29,149,58,187,121,167,73,
    14,222,44,193,84,241,155,77,74,240,144,163,17,60,250,37,
    140,2,133,47,91,252,194,246,207,165,66,32,28,166,97,142,
    227,196,98,40,149,75,66,170,203,216,60,46,151,99,196,117,
    236,18,31,185,140,7,170,197,80,243,243,220,227,229,104,156,
    81,69,95,191,241,227,169,84,68,159,43,95,225,170,212,213,
    11,45,21,87,55,73,179,82,49,50,150,151,164,73,56,67,
    185,162,96,151,150,188,201,232,90,3,194,215,53,196,214,10,
    182,54,180,17,107,27,70,64,42,88,5,178,24,85,215,73,
    97,96,79,139,34,53,32,194,78,49,129,116,12,206,0,172,
    11,7,153,67,61,250,216,37,0,187,119,168,217,166,230,163,
    82,221,101,233,220,94,212,249,62,173,99,176,162,129,89,168,
    84,5,202,254,92,160,220,58,11,20,76,112,61,2,188,65,
    97,113,6,120,147,148,206,30,21,232,166,80,66,7,227,116,
    13,211,108,10,119,131,84,180,75,56,186,132,177,58,208,134,
    53,160,185,228,5,70,153,123,235,125,102,219,249,112,102,27,
    106,179,61,160,117,214,10,124,180,25,23,45,17,144,115,141,
    194,136,108,192,167,216,153,221,32,3,214,77,119,3,183,168,
    151,73,155,247,26,222,175,184,42,208,25,65,91,84,119,44,
    66,210,192,132,235,197,30,146,83,0,79,178,244,155,153,147,
    14,28,5,165,12,15,119,243,189,221,252,75,12,113,231,17,
    39,13,29,228,58,140,51,57,201,48,92,155,252,162,67,208,
    227,112,244,138,109,0,77,76,251,49,123,134,13,203,25,39,
    87,25,37,154,165,90,181,85,89,149,132,252,146,22,105,177,
    73,77,184,129,79,75,176,36,94,202,25,142,171,0,158,197,
    231,23,100,92,210,79,2,213,129,110,79,203,201,42,144,50,
    238,247,231,16,177,36,5,220,79,145,227,211,50,128,108,168,
    252,79,143,73,34,18,166,255,12,92,23,9,248,19,144,175,
    209,165,69,20,112,188,209,67,46,219,34,242,63,0,39,143,
    11,54,38,67,71,147,81,164,23,12,182,252,115,38,213,251,
    212,175,225,47,181,204,115,106,130,160,61,197,44,42,159,250,
    158,98,85,241,199,32,249,78,251,134,53,31,168,228,148,67,
    63,39,50,29,146,102,21,146,103,73,172,170,89,48,207,44,
    11,63,171,154,189,71,146,60,59,67,15,37,236,59,98,203,
    168,97,226,135,212,124,86,193,65,148,99,75,16,106,103,49,
    195,214,118,21,79,103,181,95,209,202,22,203,186,110,179,22,
    37,131,10,228,141,18,228,247,43,144,75,78,179,239,184,242,
    165,214,32,239,158,26,2,143,53,88,58,208,137,194,2,217,
    128,190,77,225,192,165,157,40,162,69,148,233,136,210,216,92,
    14,103,75,236,107,27,85,14,214,190,163,230,155,165,134,63,
    41,254,48,246,199,7,161,255,200,163,37,104,157,160,140,31,
    163,20,122,163,46,52,97,95,188,79,110,126,253,81,41,252,
    155,165,134,254,143,201,205,165,208,12,244,48,13,56,222,127,
    123,40,157,177,28,31,224,98,135,209,196,25,196,254,144,61,
    97,22,74,125,85,42,165,216,149,139,123,99,78,73,101,63,
    117,130,52,193,28,60,13,80,70,39,148,88,232,203,208,249,
    204,225,4,238,68,185,227,31,224,172,31,40,141,229,249,48,
    228,242,202,207,134,57,87,82,71,111,169,187,116,79,122,120,
    116,139,176,96,252,186,52,138,62,84,84,217,152,107,68,29,
    24,184,133,97,1,175,102,58,13,253,140,154,31,80,179,11,
    31,34,105,119,145,35,37,218,156,140,99,99,166,104,10,150,
    173,164,121,65,95,228,231,35,241,245,119,137,68,125,181,128,
    4,210,134,209,10,183,171,148,173,233,242,192,42,46,15,104,
    80,95,30,232,27,139,54,5,172,253,191,6,44,3,127,233,
    144,31,252,95,227,212,189,255,65,101,118,127,2,197,158,252,
    190,24,53,160,86,253,126,174,99,84,91,30,119,238,217,213,
    90,133,198,250,137,151,184,205,98,21,119,204,245,157,103,232,
    66,238,204,77,188,113,242,65,153,206,176,137,124,235,205,131,
    76,215,105,228,122,127,50,145,73,120,86,131,241,204,82,45,
    67,97,71,71,146,114,211,196,130,235,42,62,231,49,72,74,
    212,116,98,172,53,42,212,221,254,16,30,76,170,156,114,121,
    46,167,184,228,34,157,69,170,4,162,237,125,231,92,64,99,
    122,82,89,160,178,152,74,248,255,58,143,251,54,103,180,114,
    128,77,165,104,209,80,198,82,201,5,39,42,90,191,56,184,
    132,18,179,114,58,195,10,155,43,87,124,143,61,111,249,41,
    237,11,157,154,244,105,128,82,154,141,39,146,166,213,20,188,
    39,44,92,167,105,73,200,84,186,62,155,229,46,7,199,122,
    101,60,190,247,41,115,52,71,1,157,30,246,241,188,174,47,
    147,28,162,188,75,205,189,210,244,12,98,93,168,115,85,172,
    207,27,136,120,222,176,120,127,114,247,104,156,138,195,241,131,
    189,82,153,61,173,204,51,52,245,147,20,155,52,230,203,167,
    241,3,62,157,159,39,236,205,114,37,199,236,190,250,164,76,
    166,99,239,185,28,167,217,236,121,26,74,181,189,48,255,56,
    12,51,215,79,134,210,123,35,105,71,85,119,23,9,138,237,
    84,243,40,169,156,11,101,152,167,61,39,139,38,194,73,125,
    51,195,5,225,249,249,39,113,26,28,201,176,160,185,216,42,
    76,243,52,29,251,56,126,241,42,189,168,92,101,115,97,62,
    204,232,171,107,11,163,8,186,8,49,247,173,44,1,206,195,
    124,11,185,200,144,28,88,189,241,166,201,220,74,216,49,222,
    51,57,140,208,31,25,51,168,136,139,220,246,197,123,226,176,
    254,225,210,67,67,23,153,250,160,251,136,174,48,249,78,131,
    46,116,154,235,77,97,27,116,85,104,138,150,104,11,75,172,
    181,155,102,211,110,54,76,12,31,26,217,18,45,179,217,90,
    19,23,255,239,96,120,181,140,157,86,83,252,7,52,70,131,
    158,
};

EmbeddedPython embedded_m5_internal_param_Platform(
    "m5/internal/param_Platform.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_Platform.py",
    "m5.internal.param_Platform",
    data_m5_internal_param_Platform,
    2161,
    6315);

} // anonymous namespace
