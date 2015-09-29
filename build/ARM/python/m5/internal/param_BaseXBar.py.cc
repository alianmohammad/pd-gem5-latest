#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseXBar[] = {
    120,156,189,88,109,111,27,199,17,158,189,35,41,145,18,45,
    201,122,179,245,98,49,113,133,178,65,35,166,110,221,4,136,
    97,52,142,11,52,5,172,164,84,0,203,108,209,203,233,110,
    73,29,117,188,35,238,150,86,24,72,253,80,25,109,191,245,
    71,20,253,208,255,209,159,211,255,208,206,204,222,158,72,74,
    106,101,52,180,196,91,236,205,237,206,206,203,51,179,179,235,
    65,246,87,196,231,23,53,128,244,15,2,192,199,159,128,16,
    160,39,160,37,64,72,1,254,50,156,20,33,249,25,248,69,
    120,3,208,178,64,90,112,129,29,27,126,107,65,52,207,115,
    74,16,218,76,17,48,172,128,44,64,171,8,47,163,37,40,
    200,18,156,84,32,249,6,132,16,145,128,67,127,6,252,89,
    120,131,220,177,83,102,134,179,224,87,184,83,6,127,142,59,
    21,24,46,130,156,131,22,50,159,129,86,21,89,125,128,172,
    238,48,171,127,18,43,31,191,172,128,95,165,225,40,203,43,
    26,89,160,145,188,198,29,230,178,96,36,91,132,214,146,233,
    223,29,233,47,143,244,87,70,250,171,35,253,53,238,47,128,
    92,130,238,58,116,239,65,247,62,180,209,40,139,249,202,27,
    32,109,232,110,66,107,19,36,254,54,224,2,237,230,47,141,
    204,216,226,25,119,243,25,219,60,227,1,180,30,128,196,223,
    182,158,81,130,131,250,42,250,34,248,55,254,213,209,23,160,
    230,177,121,45,147,52,136,35,39,136,218,113,96,209,247,18,
    53,228,57,143,154,153,204,133,159,147,11,255,1,236,63,223,
    202,92,120,14,200,88,144,46,161,5,231,220,57,183,96,88,
    135,51,1,221,2,248,54,156,225,50,69,18,160,35,224,194,
    130,223,217,52,224,28,219,2,26,253,1,20,148,246,95,151,
    141,174,57,205,192,121,17,206,138,112,112,120,102,17,225,164,
    12,201,223,225,187,45,102,58,203,76,45,56,195,182,0,23,
    5,56,47,193,75,28,132,164,110,153,212,23,135,103,168,41,
    82,14,234,5,148,118,127,68,93,82,197,15,146,200,237,73,
    181,128,125,167,239,38,110,207,121,230,166,242,240,153,155,212,
    43,102,80,156,238,245,93,117,220,228,89,54,153,163,215,87,
    204,45,142,164,154,195,78,59,136,124,167,23,251,131,80,170,
    89,98,229,180,131,80,58,14,127,252,162,215,143,19,245,203,
    36,137,147,38,89,148,137,97,236,230,51,200,158,94,24,167,
    178,78,171,241,50,77,98,175,104,116,187,207,28,73,0,150,
    148,38,251,50,245,146,160,175,208,81,154,35,141,38,110,117,
    114,17,55,233,11,108,26,131,20,221,217,112,195,192,141,26,
    105,208,27,132,174,138,145,208,247,59,178,247,184,113,52,8,
    66,191,241,89,243,69,163,63,84,199,113,212,64,90,16,41,
    137,38,9,27,227,198,216,195,17,119,137,237,105,208,113,2,
    86,200,57,150,97,95,38,85,162,110,208,146,98,81,204,139,
    146,176,69,93,84,177,87,196,199,22,91,214,156,216,15,72,
    37,143,212,36,48,217,6,62,127,3,118,20,250,249,196,130,
    100,139,192,209,197,159,32,111,34,68,14,232,155,197,223,126,
    67,182,208,212,174,77,46,215,196,51,6,20,34,11,71,62,
    33,31,71,192,168,40,66,183,4,26,45,8,50,13,159,100,
    72,45,14,39,54,22,50,47,64,250,215,113,14,209,34,160,
    173,49,176,145,180,134,75,253,145,1,120,80,39,193,247,25,
    9,234,56,72,227,211,136,237,77,125,14,153,3,180,201,87,
    195,47,143,186,210,83,233,14,18,94,197,131,154,231,70,81,
    172,106,174,239,215,92,165,146,224,104,160,100,90,83,113,109,
    55,173,151,201,193,75,6,76,57,191,97,223,128,135,28,141,
    224,209,47,126,224,41,124,89,230,23,182,127,42,21,2,225,
    56,246,83,164,19,139,142,84,77,18,82,221,193,230,51,179,
    28,35,174,94,50,248,72,101,216,86,21,134,154,155,166,14,
    47,71,116,70,21,205,126,237,134,3,169,104,124,170,92,133,
    171,82,87,47,52,85,92,221,35,205,140,98,100,44,39,138,
    35,127,136,114,5,222,46,45,121,143,209,53,15,132,175,85,
    196,214,12,182,37,168,34,214,22,45,143,84,40,100,200,98,
    84,173,145,194,192,158,22,89,106,64,132,93,96,2,169,91,
    156,1,88,23,14,178,26,245,104,114,147,0,220,220,164,102,
    139,154,109,163,238,180,116,174,78,234,252,136,214,177,88,81,
    207,206,84,202,3,101,127,44,80,238,95,6,10,38,184,3,
    2,188,69,97,113,9,120,155,148,78,158,102,232,166,80,66,
    7,227,231,17,76,179,41,154,139,164,98,201,192,177,73,24,
    27,5,90,103,4,104,77,242,2,163,172,121,255,38,179,237,
    188,59,179,117,180,217,30,211,58,243,25,62,170,140,139,138,
    240,200,185,86,102,68,54,224,115,236,12,215,201,128,163,166,
    91,199,45,234,101,84,229,189,134,247,43,222,205,117,70,208,
    22,213,157,2,33,169,109,195,90,182,135,164,20,192,253,36,
    254,118,88,139,219,53,5,70,134,39,187,233,222,110,250,41,
    134,120,237,41,39,13,29,228,58,140,19,217,79,48,92,203,
    252,162,67,208,225,112,116,178,109,0,77,76,251,49,123,134,
    13,203,25,39,85,9,37,154,169,90,181,146,91,149,132,252,
    148,22,169,176,73,109,88,199,167,34,88,18,39,230,12,199,
    85,0,127,197,231,25,25,151,244,147,64,245,91,243,64,203,
    201,42,144,50,205,31,142,33,98,74,10,52,63,64,142,207,
    77,0,149,32,247,63,61,54,137,72,152,254,51,112,93,36,
    224,79,64,190,70,151,102,81,192,241,70,15,185,108,153,134,
    255,30,56,121,92,179,49,89,58,154,172,44,189,96,176,165,
    31,243,80,189,79,253,26,254,50,146,121,46,108,16,180,167,
    216,89,229,51,186,167,20,242,248,99,144,220,106,223,40,140,
    7,42,57,229,216,77,105,152,14,73,59,15,201,203,36,150,
    215,44,152,103,166,133,159,89,205,222,33,73,190,184,68,15,
    37,236,77,177,108,141,96,226,199,212,124,152,195,65,24,218,
    20,132,218,153,204,176,35,187,138,163,179,218,175,104,229,2,
    203,186,80,98,45,12,131,28,228,69,3,242,71,57,200,37,
    167,217,55,92,249,82,107,145,119,47,44,129,199,17,44,29,
    232,36,80,0,89,132,86,137,194,129,75,59,145,69,139,48,
    233,136,210,216,88,14,103,75,236,107,27,229,14,214,190,163,
    230,219,169,134,63,41,254,36,116,123,71,190,251,244,21,45,
    65,235,120,38,126,44,35,244,226,168,208,132,125,113,147,220,
    252,250,145,17,254,245,84,67,255,39,20,55,70,104,6,186,
    31,123,28,239,95,31,203,90,79,246,142,112,177,227,160,95,
    107,135,110,135,61,97,103,74,125,105,148,82,236,202,201,189,
    49,165,164,178,31,215,188,56,194,28,60,240,80,198,154,47,
    177,208,151,126,237,195,26,39,240,90,144,214,220,35,252,234,
    122,74,99,121,60,12,185,188,114,147,78,202,149,212,201,41,
    117,167,238,73,7,143,110,1,22,140,45,99,20,125,168,200,
    179,49,215,136,58,48,112,11,195,2,94,13,117,26,250,57,
    53,63,162,102,23,222,69,210,110,32,199,67,98,77,198,41,
    97,166,40,11,150,205,140,249,138,102,164,87,35,241,95,183,
    137,68,125,37,128,3,100,9,186,51,220,206,82,182,198,67,
    127,70,172,112,59,199,196,121,67,172,114,123,135,137,11,134,
    184,200,237,18,19,239,26,226,50,183,43,76,92,53,196,53,
    110,215,153,120,207,16,239,115,187,193,196,77,67,220,226,118,
    155,137,15,76,222,216,97,98,13,90,239,153,203,143,247,41,
    135,148,254,223,28,194,177,56,245,40,252,230,123,77,29,205,
    71,239,84,230,230,79,33,43,19,110,74,27,22,140,20,228,
    31,235,180,161,45,143,197,196,112,101,164,104,100,253,196,75,
    220,249,177,176,60,227,146,211,177,116,109,121,233,38,222,203,
    249,236,78,199,234,72,158,58,227,184,215,165,35,185,222,237,
    247,101,228,95,150,133,252,101,170,150,161,76,208,133,203,125,
    28,107,192,21,124,174,98,144,148,24,209,137,177,86,204,81,
    183,241,46,60,24,231,105,238,225,88,154,107,146,139,116,98,
    203,115,154,182,247,251,87,114,140,211,142,19,76,206,190,131,
    210,200,200,27,210,225,226,54,195,176,176,224,139,163,9,186,
    122,120,205,212,36,70,61,162,241,37,110,51,142,214,32,45,
    38,63,92,55,57,145,105,31,119,43,249,191,22,185,50,206,
    44,50,249,65,253,224,234,100,244,160,131,251,160,59,8,149,
    147,184,81,71,242,42,183,26,72,203,16,120,175,124,225,43,
    128,137,233,167,129,175,142,153,247,141,31,137,31,193,141,223,
    212,71,87,135,241,53,149,89,9,55,242,8,207,47,116,185,
    233,197,131,72,49,239,183,158,68,107,82,97,253,95,71,169,
    198,13,108,123,110,138,104,190,94,148,183,157,67,146,108,25,
    73,110,24,164,246,110,96,154,134,238,107,121,189,28,111,57,
    133,196,216,52,98,92,63,134,19,138,162,208,244,101,40,149,
    156,72,117,12,189,236,198,193,151,88,78,197,67,60,26,243,
    145,19,223,67,199,153,126,45,242,9,45,6,217,69,38,213,
    34,37,177,58,241,95,46,148,5,151,118,19,183,226,90,46,
    58,109,232,99,214,48,109,242,134,178,144,39,28,190,190,53,
    165,22,239,28,116,9,176,239,246,244,13,29,223,66,53,223,
    163,230,161,73,87,156,248,245,121,155,15,183,250,218,0,119,
    9,174,59,185,204,108,146,159,216,242,189,199,123,70,181,61,
    173,218,11,217,211,215,145,124,131,220,123,204,135,161,171,195,
    62,15,99,239,68,250,217,208,237,155,199,60,143,123,46,210,
    175,95,236,32,48,139,45,77,124,247,19,154,181,58,65,69,
    191,5,232,182,239,244,101,167,33,115,34,157,148,158,180,206,
    223,184,96,100,110,198,115,12,153,68,118,2,194,62,51,200,
    7,103,155,232,39,198,70,19,128,30,157,56,117,116,233,3,
    150,190,228,121,74,215,247,233,51,108,232,50,179,188,80,22,
    37,139,174,201,109,81,17,85,81,16,243,213,178,93,46,149,
    139,54,34,144,40,203,162,98,151,43,243,226,242,127,7,113,
    88,177,118,150,202,226,63,213,95,103,210,
};

EmbeddedPython embedded_m5_internal_param_BaseXBar(
    "m5/internal/param_BaseXBar.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_BaseXBar.py",
    "m5.internal.param_BaseXBar",
    data_m5_internal_param_BaseXBar,
    2299,
    6995);

} // anonymous namespace
