#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_AbstractMemory[] = {
    120,156,197,88,221,111,219,200,17,159,37,37,218,146,173,88,
    142,191,242,97,199,60,180,198,169,135,59,171,77,155,94,129,
    11,130,230,46,5,122,5,206,119,165,10,36,209,29,142,71,
    139,43,153,50,69,10,228,42,57,29,236,62,212,65,219,183,
    190,246,189,232,67,255,143,254,95,237,204,44,73,83,142,213,
    166,104,163,218,226,98,57,220,157,217,153,249,205,236,236,246,
    32,251,171,226,243,115,27,32,253,173,0,240,241,39,32,4,
    24,9,232,10,16,82,128,191,1,167,85,72,126,2,126,21,
    94,1,116,13,144,6,92,96,199,132,47,13,136,86,121,142,
    5,161,201,20,1,211,58,200,10,116,171,240,52,90,135,138,
    180,224,180,14,201,55,32,132,136,4,60,243,151,192,95,134,
    87,200,29,59,53,102,184,12,126,157,59,53,240,87,184,83,
    135,105,19,228,10,116,145,249,18,116,27,200,234,61,100,117,
    131,89,253,157,88,249,248,101,19,252,6,13,199,181,60,167,
    145,21,26,201,50,110,48,151,181,124,101,77,232,174,231,253,
    155,165,254,70,169,191,89,234,111,149,250,219,220,95,3,185,
    14,195,29,24,222,130,225,109,232,163,81,154,133,228,59,32,
    77,24,222,133,238,93,144,248,187,3,23,104,55,127,189,52,
    99,151,103,220,44,102,236,241,140,123,208,189,7,18,127,123,
    122,134,5,157,214,22,250,34,248,7,254,181,208,23,160,86,
    177,121,33,147,52,136,35,55,136,250,113,96,208,119,139,26,
    242,92,143,154,165,204,133,159,144,11,255,6,236,63,223,200,
    92,120,14,200,88,144,46,161,1,231,220,57,55,96,218,130,
    51,1,195,10,248,38,156,161,152,42,45,96,32,224,194,128,
    175,76,26,112,142,109,5,141,126,15,42,74,251,111,200,70,
    215,156,150,224,188,10,103,85,232,60,59,51,136,112,90,131,
    228,175,240,221,46,51,93,102,166,6,156,97,91,129,139,10,
    156,91,240,20,7,33,105,88,35,245,197,179,51,212,20,41,
    157,86,5,87,123,84,82,151,84,241,131,36,242,70,82,145,
    37,220,177,151,120,35,247,241,113,170,18,175,167,62,147,163,
    56,153,182,234,249,208,56,61,28,123,234,196,225,185,38,25,
    101,52,86,204,51,142,164,90,193,78,63,136,124,119,20,251,
    147,80,170,101,98,232,246,131,80,186,46,127,252,116,52,142,
    19,245,139,36,137,19,135,236,202,196,48,246,138,25,100,213,
    94,24,167,178,69,210,88,140,67,236,21,141,238,143,153,35,
    45,128,215,75,147,125,153,246,146,96,172,208,93,154,35,141,
    38,110,45,114,20,55,105,7,155,246,36,69,167,182,189,48,
    240,162,118,26,140,38,161,167,98,36,140,253,129,28,61,104,
    31,79,130,208,111,63,118,62,107,143,167,234,36,142,218,72,
    11,34,37,209,48,97,251,58,147,28,226,184,155,196,252,101,
    48,112,3,86,203,61,145,225,88,38,13,162,222,33,193,162,
    41,86,133,37,76,209,18,13,236,85,241,49,197,174,177,34,
    142,2,82,172,71,202,18,176,204,28,74,127,1,118,26,250,
    252,212,128,100,151,128,50,196,159,32,207,34,92,58,244,205,
    224,111,191,38,139,104,234,208,36,247,107,226,25,131,11,81,
    134,35,31,146,191,35,96,132,84,97,104,129,70,14,2,78,
    67,41,153,82,139,195,137,141,129,204,43,144,254,105,150,67,
    212,4,180,56,6,57,146,182,81,212,239,24,140,157,22,45,
    252,136,241,160,78,130,52,126,25,177,213,169,207,225,211,65,
    155,124,49,253,252,120,40,123,42,221,71,194,243,120,98,247,
    188,40,138,149,237,249,190,237,41,149,4,199,19,37,83,91,
    197,246,65,218,170,145,155,215,115,72,21,252,166,227,28,66,
    228,110,132,144,126,241,131,158,194,151,13,126,97,251,167,82,
    33,28,78,98,63,69,58,177,24,72,229,208,34,213,13,108,
    30,231,226,24,119,45,43,71,73,42,195,190,170,51,224,188,
    52,117,89,28,209,25,91,52,251,133,23,78,164,162,241,169,
    242,20,74,165,174,22,180,0,116,221,34,253,114,245,200,100,
    110,20,71,254,20,87,23,244,14,72,240,45,198,216,42,16,
    202,182,16,97,75,216,90,208,64,196,53,141,30,41,82,201,
    240,197,216,218,38,181,129,253,45,178,100,129,56,187,192,148,
    210,50,56,39,176,70,28,112,54,245,104,178,67,48,118,238,
    82,179,75,205,94,174,244,219,213,188,113,85,243,251,36,205,
    96,117,123,102,166,88,17,52,71,51,65,115,251,50,104,48,
    241,117,8,252,6,133,200,37,248,77,82,61,121,148,33,157,
    194,10,157,141,159,75,248,102,131,56,77,82,212,202,161,233,
    16,222,202,160,27,148,64,231,144,47,24,113,206,237,121,198,
    219,95,180,241,6,218,120,15,72,218,106,134,149,6,99,164,
    46,122,228,104,35,51,37,155,241,9,118,166,59,100,198,178,
    1,119,112,3,123,26,53,120,39,226,221,140,247,122,157,35,
    180,93,117,167,66,168,234,155,176,157,237,48,41,133,244,56,
    137,191,157,218,113,223,86,144,175,225,225,65,122,120,144,126,
    132,65,111,63,226,52,162,195,94,7,118,34,199,9,6,112,
    141,95,116,80,186,28,160,110,182,61,160,161,105,143,98,255,
    176,121,57,7,161,5,40,245,44,192,182,245,194,182,180,212,
    143,72,84,157,13,107,194,14,62,117,193,235,113,99,206,124,
    92,41,240,87,124,62,38,19,147,150,18,168,198,115,58,122,
    181,172,8,169,228,188,59,131,142,183,170,134,243,30,242,125,
    146,135,148,5,5,22,232,49,105,161,132,242,63,0,87,80,
    2,126,15,228,119,116,111,22,23,28,129,244,144,251,54,104,
    248,215,192,73,229,154,109,203,208,241,101,100,105,7,195,47,
    253,144,135,234,93,236,87,240,199,82,70,186,48,65,208,142,
    99,102,53,82,121,199,169,20,17,201,128,121,163,93,165,50,
    27,186,228,154,19,47,165,97,58,72,205,34,72,47,147,91,
    81,215,96,230,121,187,88,90,214,66,92,90,207,167,151,72,
    162,116,126,87,108,24,37,124,188,79,205,7,5,52,68,78,
    123,107,75,219,191,154,127,75,59,143,171,115,222,47,73,126,
    133,87,188,102,233,93,118,134,77,1,254,106,14,254,251,5,
    248,37,167,226,87,92,53,83,107,144,191,47,12,129,71,25,
    44,53,232,20,81,1,89,133,174,69,97,194,5,161,200,162,
    72,228,201,138,146,220,76,158,103,171,28,105,123,21,46,215,
    222,164,230,219,5,36,7,114,232,195,208,27,29,251,222,163,
    231,36,136,164,245,242,184,50,242,165,55,203,75,167,152,16,
    243,86,207,175,63,204,85,120,177,128,196,240,35,138,170,124,
    233,28,6,126,220,227,108,240,155,19,105,143,228,232,24,69,
    158,4,99,187,31,122,3,246,138,153,169,246,121,174,154,98,
    183,94,221,75,83,74,57,71,177,221,139,35,148,57,233,225,
    74,109,95,226,81,65,250,246,7,54,167,122,59,72,109,47,
    91,145,198,248,108,144,114,105,230,37,131,148,171,176,211,151,
    212,93,144,87,93,60,8,6,88,114,118,115,211,232,195,73,
    145,183,25,255,58,96,112,203,195,35,128,154,234,84,245,83,
    106,126,64,205,1,44,46,189,183,145,239,51,18,64,134,178,
    48,155,212,132,218,124,45,66,191,160,217,233,235,113,250,231,
    55,137,83,125,217,128,3,164,5,195,37,110,151,41,187,119,
    107,57,177,206,237,10,19,87,115,98,131,219,27,76,92,203,
    137,77,110,215,153,120,51,207,0,27,76,220,132,238,86,126,
    5,178,77,217,192,250,111,179,1,199,211,130,34,233,155,255,
    105,18,112,238,255,31,86,238,252,24,178,114,96,94,2,48,
    160,84,138,127,168,19,128,246,2,22,13,211,205,82,161,200,
    90,138,167,184,195,99,49,121,198,101,166,107,232,122,242,210,
    101,188,103,243,57,158,42,234,72,190,116,175,67,173,46,26,
    9,12,222,120,44,35,255,178,32,228,47,11,176,18,69,118,
    31,46,119,109,172,254,54,241,121,29,155,164,80,73,63,198,
    96,181,64,227,157,197,249,244,180,72,94,59,51,201,203,33,
    167,233,116,85,100,42,237,129,247,231,228,12,23,179,120,223,
    85,222,49,22,228,88,7,199,137,146,62,29,54,254,179,9,
    88,90,240,105,234,154,111,234,251,243,24,5,145,139,165,94,
    226,142,188,49,75,124,163,129,36,137,174,138,74,52,181,55,
    111,98,52,9,67,102,253,175,71,16,79,190,43,192,23,117,
    111,222,208,196,139,6,146,185,253,155,33,196,142,80,193,111,
    12,46,69,7,71,95,134,82,201,107,67,64,145,199,178,147,
    168,47,241,123,60,197,195,18,31,63,240,61,116,221,69,237,
    54,63,35,145,36,128,110,195,104,183,177,240,136,169,255,107,
    149,154,224,13,252,202,29,170,94,21,85,153,186,212,158,166,
    14,39,155,181,2,122,124,205,151,111,165,156,85,232,80,120,
    228,141,244,29,14,223,80,56,239,80,243,189,28,184,156,14,
    244,201,139,15,56,250,24,137,25,132,171,11,46,38,156,195,
    220,176,163,7,135,185,98,135,90,49,84,72,95,88,241,77,
    227,232,1,23,193,175,15,251,36,140,123,167,210,207,134,238,
    205,31,243,36,30,121,72,191,94,88,39,200,133,173,95,249,
    238,39,52,107,235,10,21,189,22,160,211,190,211,215,97,57,
    89,145,189,174,174,158,180,46,222,184,20,224,53,204,250,141,
    97,147,200,65,144,34,39,102,83,76,201,18,44,121,85,189,
    51,15,180,229,233,11,194,153,46,175,245,53,192,35,138,230,
    244,99,108,232,234,171,182,86,19,150,65,87,171,166,168,139,
    134,168,136,213,70,205,172,89,181,170,137,88,36,202,134,168,
    155,181,250,170,184,252,223,71,100,214,141,253,70,77,252,19,
    203,80,228,34,
};

EmbeddedPython embedded_m5_internal_param_AbstractMemory(
    "m5/internal/param_AbstractMemory.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_AbstractMemory.py",
    "m5.internal.param_AbstractMemory",
    data_m5_internal_param_AbstractMemory,
    2180,
    6547);

} // anonymous namespace
