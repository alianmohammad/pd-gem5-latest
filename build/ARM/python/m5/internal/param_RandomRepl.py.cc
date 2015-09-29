#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RandomRepl[] = {
    120,156,189,88,225,111,219,198,21,127,71,82,178,37,91,177,
    28,59,113,18,59,49,135,194,152,86,180,86,151,45,235,176,
    6,193,210,102,64,59,160,78,75,21,72,170,14,99,105,242,
    36,83,166,72,129,60,39,85,97,127,153,131,109,216,151,253,
    17,195,62,236,255,216,255,181,189,247,142,164,104,197,6,10,
    180,178,45,29,78,199,187,119,239,189,223,239,189,123,71,31,
    242,191,26,126,127,111,3,100,255,16,0,1,126,4,68,0,
    99,1,125,1,66,10,8,54,224,184,6,233,175,33,168,193,
    27,128,190,1,210,128,115,236,152,240,141,1,241,42,175,169,
    67,100,242,136,128,105,19,164,5,253,26,188,136,215,193,146,
    117,56,110,66,250,45,8,33,98,1,47,131,37,8,150,225,
    13,74,199,78,131,5,46,67,208,228,78,3,130,21,238,52,
    97,218,6,185,2,125,20,190,4,253,22,138,122,23,69,221,
    96,81,255,37,81,1,62,217,132,160,69,211,81,151,175,105,
    166,69,51,121,143,27,44,101,173,208,172,13,253,245,162,127,
    179,210,223,168,244,55,43,253,91,149,254,237,74,127,139,251,
    107,32,215,97,116,7,70,119,97,116,15,6,232,160,118,169,
    197,54,72,19,70,59,208,223,1,137,159,109,56,71,31,6,
    235,149,21,247,121,197,205,114,197,3,94,177,11,253,93,144,
    248,121,160,87,212,161,215,185,133,184,132,255,195,191,14,226,
    2,106,21,155,87,50,205,194,36,118,195,120,144,132,6,61,
    175,83,67,40,250,212,44,229,112,126,66,112,254,7,24,203,
    192,200,225,60,3,20,44,200,150,200,128,51,238,156,25,48,
    237,192,169,128,145,5,129,9,167,184,77,141,20,24,10,56,
    55,224,79,38,77,56,195,214,66,0,30,128,165,52,150,35,
    6,64,75,90,130,179,26,156,214,160,247,242,212,160,129,227,
    6,164,255,134,239,119,88,232,50,11,53,224,20,91,11,206,
    45,56,171,195,11,156,132,67,163,6,153,47,94,158,162,165,
    56,210,235,88,168,237,65,197,92,50,37,8,211,216,27,75,
    181,142,125,119,226,165,222,216,117,188,56,72,198,142,156,68,
    157,102,49,45,201,246,39,158,58,114,120,157,73,14,25,79,
    20,203,75,98,169,86,176,51,8,227,192,29,39,193,73,36,
    213,50,9,115,7,97,36,93,151,31,126,54,158,36,169,250,
    67,154,38,169,67,62,229,193,40,241,202,21,228,81,63,74,
    50,217,161,221,120,27,135,196,43,154,61,152,176,68,82,128,
    117,165,197,129,204,252,52,156,40,132,74,75,164,217,36,173,
    67,32,113,147,61,199,166,123,146,33,160,93,47,10,189,184,
    155,133,227,147,200,83,9,14,76,130,161,28,63,234,30,158,
    132,81,208,125,234,124,222,157,76,213,81,18,119,113,44,140,
    149,68,167,68,221,121,119,236,227,156,155,36,248,117,56,116,
    67,54,201,61,146,209,68,166,45,26,189,71,155,138,182,88,
    21,117,97,138,142,104,97,175,134,95,83,236,24,43,226,32,
    36,163,124,50,148,8,101,22,20,250,23,48,88,136,245,177,
    1,233,14,17,100,132,31,65,136,34,77,122,244,204,224,103,
    95,146,55,244,232,200,36,216,245,224,41,147,10,217,133,51,
    31,19,206,49,48,51,106,48,170,131,102,12,18,77,83,40,
    157,82,139,211,73,140,129,194,45,200,254,121,81,66,220,6,
    244,54,6,58,14,221,198,173,254,194,36,236,117,72,241,3,
    230,130,58,10,179,228,117,204,30,167,62,135,77,15,125,242,
    197,244,249,225,72,250,42,219,197,129,175,147,19,219,247,226,
    56,81,182,23,4,182,167,84,26,30,158,40,153,217,42,177,
    247,178,78,131,32,94,47,232,84,202,155,78,10,250,16,212,
    72,31,253,35,8,125,133,63,54,248,7,251,63,147,10,169,
    112,148,4,25,142,147,136,161,84,14,41,169,110,96,243,180,
    216,142,57,215,169,23,12,201,100,52,80,77,38,155,151,101,
    46,111,71,227,204,43,90,253,202,139,78,164,162,249,153,242,
    20,238,74,93,189,209,130,153,117,135,108,43,76,35,119,185,
    113,18,7,83,212,44,244,247,104,211,59,204,175,85,32,134,
    221,66,118,45,97,91,135,22,178,173,109,248,100,132,149,115,
    139,121,117,155,76,6,198,90,228,9,2,57,118,142,105,164,
    99,112,30,96,107,56,208,108,234,209,98,135,40,236,108,83,
    179,67,205,253,194,224,197,89,221,154,183,250,33,237,100,176,
    169,190,153,27,85,6,203,193,133,96,185,59,11,22,76,116,
    61,34,189,65,161,49,35,189,73,102,167,79,114,134,83,56,
    33,200,248,184,194,107,118,134,211,38,35,235,5,37,29,226,
    89,149,108,195,10,217,28,194,129,153,230,220,189,202,113,187,
    215,233,184,161,118,220,35,218,105,53,231,72,139,185,209,20,
    62,1,108,228,110,100,23,62,195,206,116,139,92,88,117,222,
    22,30,86,47,226,22,159,58,124,114,241,25,175,243,130,246,
    169,238,88,196,166,129,9,183,243,211,36,163,48,158,164,201,
    119,83,59,25,216,10,10,29,30,239,101,251,123,217,71,24,
    232,246,19,78,29,58,212,117,48,167,114,146,98,208,54,248,
    135,14,68,151,131,210,205,143,3,116,50,157,204,140,13,187,
    150,243,78,166,82,74,55,11,246,107,179,244,43,169,249,17,
    109,211,100,167,154,176,133,223,166,96,93,220,132,51,29,87,
    4,252,20,191,31,147,123,201,66,9,84,215,57,61,173,41,
    27,65,230,56,63,191,192,138,133,153,224,188,139,50,159,21,
    97,84,135,146,3,244,53,73,73,98,246,223,128,171,36,1,
    127,5,194,27,97,205,99,129,163,142,190,4,219,6,77,255,
    51,112,18,185,228,136,50,116,76,25,121,154,193,144,203,62,
    228,169,250,196,250,35,252,189,146,129,206,77,16,116,186,152,
    121,29,84,61,93,172,50,10,153,40,63,232,4,177,46,134,
    43,193,114,228,101,52,77,7,166,89,6,230,44,153,149,245,
    11,102,155,197,113,104,89,111,224,146,46,159,205,24,68,169,
    123,91,108,24,21,94,188,71,205,251,37,37,68,49,182,16,
    181,118,231,115,109,229,132,113,117,126,251,148,246,182,88,219,
    181,58,199,194,76,68,73,246,90,65,246,135,37,217,37,167,
    220,55,92,13,83,107,16,198,231,134,192,235,10,150,18,116,
    83,176,64,214,160,95,167,176,224,98,79,228,81,35,138,196,
    68,9,237,66,62,103,111,28,104,63,149,48,107,4,169,249,
    110,193,137,128,64,124,28,121,227,195,192,123,210,167,77,104,
    39,191,136,35,163,80,187,93,85,155,98,64,92,165,57,255,
    252,160,80,255,213,130,147,192,47,81,102,169,54,83,62,72,
    124,142,252,175,142,164,61,150,227,67,220,238,40,156,216,131,
    200,27,50,26,102,110,214,243,194,44,197,112,206,159,149,25,
    165,151,131,196,246,147,24,51,242,137,143,90,218,129,196,242,
    95,6,246,251,54,167,115,59,204,108,239,16,159,122,190,210,
    156,190,24,144,92,114,121,233,48,227,234,234,248,53,117,175,
    1,77,23,47,117,33,150,145,223,20,110,209,151,141,50,55,
    115,229,168,3,4,143,52,44,235,213,84,167,164,223,80,243,
    11,106,246,224,122,82,120,151,242,31,9,39,7,213,49,107,
    52,132,106,95,136,198,47,104,85,246,118,76,126,254,67,98,
    82,191,60,200,35,179,94,188,117,88,2,185,76,183,198,126,
    147,174,226,52,178,66,225,186,244,99,195,149,73,127,13,116,
    247,126,210,40,117,30,94,179,214,206,175,32,63,155,175,138,
    80,81,53,169,165,35,116,36,138,210,182,106,15,95,137,183,
    46,33,140,235,167,210,83,82,227,114,111,225,22,114,128,235,
    45,253,18,157,194,140,178,172,255,176,52,229,156,139,145,233,
    102,165,240,100,176,196,11,172,28,176,56,61,101,107,93,67,
    215,167,51,214,89,165,209,155,216,196,242,181,59,111,184,46,
    64,73,29,111,50,145,113,48,43,46,249,201,130,129,166,12,
    18,192,172,18,192,74,114,19,191,111,135,149,165,39,22,118,
    49,76,181,50,144,22,15,24,83,50,44,160,234,80,45,63,
    75,144,14,1,165,83,98,153,13,157,223,65,145,33,75,210,
    5,50,146,74,190,5,1,103,176,252,70,21,72,60,30,146,
    41,22,254,92,78,227,239,200,117,175,35,179,254,22,101,126,
    11,249,53,133,50,107,29,115,107,195,106,8,62,158,230,222,
    248,105,93,108,40,138,198,105,230,112,164,174,149,230,242,139,
    169,226,176,96,30,211,181,230,192,27,235,55,15,124,183,118,
    126,70,205,59,133,219,152,132,250,254,192,165,186,190,8,33,
    103,249,236,228,163,210,217,167,241,7,216,140,31,237,23,230,
    236,107,115,62,246,50,217,147,234,105,150,37,62,191,30,27,
    63,82,247,174,156,249,149,135,167,236,238,165,143,63,137,18,
    255,88,6,250,157,141,186,127,245,156,103,201,216,195,241,237,
    75,103,244,194,113,46,97,125,238,121,144,210,170,91,115,163,
    136,102,136,96,126,175,95,243,20,195,252,94,237,18,251,8,
    164,234,0,31,140,115,137,141,9,149,202,97,152,161,44,22,
    84,93,145,71,63,193,206,54,190,149,16,171,171,175,129,128,
    186,174,212,247,220,39,244,38,147,111,228,244,78,167,177,214,
    16,117,131,222,23,154,162,41,90,194,18,171,173,134,217,168,
    55,106,38,146,148,70,54,68,211,108,52,87,69,245,127,23,
    169,219,52,118,155,13,241,127,142,191,104,50,
};

EmbeddedPython embedded_m5_internal_param_RandomRepl(
    "m5/internal/param_RandomRepl.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_RandomRepl.py",
    "m5.internal.param_RandomRepl",
    data_m5_internal_param_RandomRepl,
    2108,
    6254);

} // anonymous namespace