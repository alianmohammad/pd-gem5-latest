#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MemTest[] = {
    120,156,189,89,95,115,219,198,17,223,3,72,74,164,68,75,
    178,254,217,146,108,193,86,212,48,174,35,181,110,156,100,26,
    143,167,110,220,153,166,83,43,41,148,25,59,236,31,20,2,
    78,20,40,18,224,0,71,219,244,72,47,149,167,237,91,63,
    68,167,15,253,10,125,238,247,106,119,247,0,8,36,165,68,
    157,134,150,196,155,227,222,222,222,237,238,111,247,246,78,30,
    164,63,101,252,252,204,2,72,254,37,0,124,252,19,208,1,
    232,10,104,10,16,82,128,191,8,199,101,136,63,2,191,12,
    111,1,154,6,72,3,206,176,99,194,111,13,8,103,121,78,
    5,58,38,83,4,12,106,32,75,208,44,195,243,112,1,74,
    178,2,199,53,136,255,8,66,136,80,192,11,127,10,252,105,
    120,139,210,177,83,101,129,211,224,215,184,83,5,127,134,59,
    53,24,204,131,156,129,38,10,159,130,102,29,69,221,67,81,
    215,88,212,191,73,148,143,35,75,224,215,137,29,247,242,13,
    113,150,136,147,215,184,198,82,230,178,157,205,67,115,33,235,
    95,47,244,23,11,253,165,66,127,185,208,95,41,244,87,11,
    253,27,133,254,205,66,127,173,208,95,231,254,28,200,5,104,
    111,64,251,22,180,111,195,33,26,116,62,223,245,38,72,19,
    218,22,52,45,144,248,183,9,103,104,115,127,161,48,227,14,
    207,184,158,207,184,203,51,182,160,185,5,18,255,238,234,25,
    21,216,111,44,163,31,131,255,224,79,3,253,8,106,22,155,
    151,50,78,130,40,116,130,240,48,10,12,26,175,80,67,94,
    247,168,153,74,221,255,57,185,255,159,192,190,247,141,212,253,
    167,128,130,5,233,210,49,224,148,59,167,6,12,26,112,34,
    160,93,2,223,132,19,92,166,76,27,104,9,56,51,224,119,
    38,49,156,98,91,66,135,221,134,146,210,190,111,179,195,180,
    164,41,56,45,195,73,25,246,95,156,24,68,56,174,66,252,
    15,120,179,193,66,167,89,168,1,39,216,150,224,172,4,167,
    21,120,142,76,72,106,87,73,125,241,226,4,53,69,202,126,
    163,132,187,221,43,168,75,170,248,65,28,186,93,169,174,97,
    223,233,185,177,219,117,158,201,238,215,50,81,141,90,198,19,
    37,59,61,87,29,217,60,201,36,107,116,123,138,133,69,161,
    84,51,216,57,12,66,223,233,70,126,191,35,213,52,73,114,
    14,131,142,116,28,30,252,162,219,139,98,245,139,56,142,98,
    155,12,202,196,78,228,230,51,200,156,94,39,74,100,131,86,
    227,101,108,18,175,136,251,176,199,18,105,3,188,81,154,236,
    203,196,139,131,158,66,63,105,137,196,77,210,26,228,33,110,
    146,95,99,179,219,79,208,155,187,110,39,112,195,221,36,232,
    246,59,174,138,144,208,243,91,178,251,112,247,160,31,116,252,
    221,39,246,179,221,222,64,29,69,225,46,210,130,80,73,180,
    72,103,119,200,22,59,200,112,157,164,190,10,90,78,192,250,
    56,71,178,211,147,113,157,168,107,180,162,152,23,179,162,34,
    76,209,16,117,236,149,241,99,138,13,99,70,236,5,164,145,
    71,90,18,148,204,12,60,127,7,118,19,122,249,216,128,120,
    131,160,209,198,63,65,190,68,128,236,211,152,193,99,191,33,
    83,104,106,219,36,135,107,226,9,195,9,113,133,156,143,200,
    195,33,48,38,202,208,174,128,198,10,66,76,131,39,30,80,
    139,236,36,198,64,225,37,72,254,54,44,33,156,7,52,53,
    166,4,36,173,224,82,127,98,248,237,55,104,227,123,12,4,
    117,20,36,209,171,144,205,77,125,14,152,125,180,201,87,131,
    47,15,218,210,83,201,38,18,190,137,250,150,231,134,97,164,
    44,215,247,45,87,169,56,56,232,43,153,88,42,178,182,147,
    70,149,252,187,144,97,41,151,55,232,101,216,33,63,35,118,
    244,23,63,240,20,126,89,228,47,108,255,68,42,196,193,81,
    228,39,72,39,17,45,169,108,218,36,131,248,73,182,28,3,
    174,81,201,224,145,200,206,161,170,49,210,220,36,113,120,57,
    162,51,168,104,246,75,183,211,151,138,248,19,229,42,92,149,
    186,122,161,73,194,234,6,41,150,233,69,182,114,194,40,244,
    7,184,173,192,219,166,21,111,48,184,102,129,224,181,140,208,
    154,194,182,2,117,132,218,188,225,145,6,165,20,88,12,170,
    21,210,23,216,209,34,205,11,8,176,51,204,30,13,131,195,
    159,85,225,16,179,168,71,147,109,194,175,189,78,205,6,53,
    183,50,109,39,164,114,125,84,229,7,180,140,193,122,122,102,
    170,81,30,38,123,67,97,114,243,60,76,48,185,237,19,220,
    13,10,138,115,184,155,164,115,252,56,197,54,5,18,186,23,
    135,11,136,102,75,216,243,164,97,37,3,163,77,8,43,194,
    172,85,128,153,77,78,96,140,217,55,47,179,218,230,59,179,
    90,75,91,237,33,45,51,155,162,163,206,168,168,9,143,92,
    107,164,54,100,251,61,197,206,96,149,236,87,180,220,42,158,
    78,207,195,58,31,51,124,84,113,17,160,211,129,54,168,238,
    148,8,71,135,38,172,164,199,71,66,209,219,139,163,215,3,
    43,58,180,20,100,123,120,180,157,236,108,39,159,97,124,91,
    143,57,99,232,8,215,49,28,203,94,140,177,90,229,47,58,
    254,28,142,69,39,61,2,208,194,116,20,179,99,216,174,156,
    110,18,21,83,150,153,164,81,107,185,81,105,143,159,209,26,
    53,182,168,9,171,248,169,9,222,136,19,113,118,227,243,159,
    71,241,243,115,178,45,169,39,129,170,62,123,95,111,147,53,
    32,93,236,247,135,240,48,153,253,219,247,80,224,211,44,122,
    42,144,123,159,62,38,237,144,0,253,23,224,130,72,192,159,
    129,60,141,14,77,67,128,131,141,62,228,176,69,98,255,3,
    112,226,184,224,76,50,116,40,25,105,106,193,72,75,62,97,
    86,125,68,253,10,254,90,200,58,103,38,8,58,78,204,180,
    228,41,30,39,165,60,248,24,34,87,58,50,74,195,81,74,
    62,57,114,19,98,211,241,104,230,241,120,158,192,242,106,5,
    147,204,132,208,51,173,165,59,180,145,47,206,177,67,185,122,
    93,44,26,5,68,220,167,230,195,28,12,34,163,125,255,123,
    218,28,77,174,133,243,196,209,9,237,151,180,112,137,183,58,
    87,97,99,166,243,115,128,151,51,128,63,200,1,46,57,193,
    190,229,122,151,90,131,92,123,102,8,188,192,96,201,64,119,
    135,18,200,50,52,43,20,10,92,209,137,52,82,68,150,137,
    40,131,13,101,111,182,195,158,182,80,238,93,237,56,106,94,
    79,50,242,201,119,143,58,110,247,192,119,31,19,234,19,90,
    198,203,98,199,200,246,60,95,220,51,225,94,92,182,109,254,
    250,163,108,239,47,39,25,245,63,70,129,249,158,25,227,126,
    228,113,168,127,125,36,173,174,236,30,224,90,71,65,207,58,
    236,184,45,246,131,153,234,244,101,166,147,98,71,142,158,137,
    9,229,147,189,200,242,162,16,147,111,223,195,45,90,190,196,
    234,94,250,214,135,22,103,110,43,72,44,247,0,71,93,79,
    105,28,15,71,32,23,85,110,220,74,184,126,58,126,69,221,
    73,251,209,193,219,90,128,85,162,147,217,68,95,36,242,52,
    172,111,55,28,20,120,116,97,213,174,6,58,1,125,76,205,
    7,212,108,195,59,200,214,187,40,240,247,36,153,76,83,193,
    28,81,21,124,172,167,44,95,17,127,50,30,132,31,137,43,
    4,161,126,63,72,67,177,66,156,114,138,174,135,212,86,41,
    93,55,107,25,113,134,219,89,38,214,51,226,53,110,231,152,
    56,159,17,23,184,189,206,196,197,140,184,196,237,50,19,87,
    50,226,42,183,55,152,120,51,35,174,113,187,206,196,141,140,
    120,139,219,219,76,220,204,136,22,183,119,152,120,55,35,110,
    113,251,30,19,183,51,226,15,184,125,159,137,141,236,125,229,
    3,38,222,131,230,15,233,17,129,40,247,41,13,77,253,191,
    105,136,227,121,210,145,44,191,215,236,99,63,120,151,91,182,
    127,2,105,145,113,89,230,17,69,125,234,58,243,180,69,86,
    154,23,149,225,155,252,210,104,56,56,94,44,93,37,181,59,
    214,38,171,27,167,44,189,94,43,119,74,166,64,126,33,249,
    36,87,226,140,235,169,193,82,161,106,102,31,137,231,88,252,
    96,101,125,194,122,58,134,46,174,207,145,86,202,213,37,7,
    134,242,149,51,164,178,46,157,105,47,110,175,39,67,255,188,
    44,230,145,73,58,247,227,84,237,172,146,193,26,120,9,63,
    227,65,68,42,20,52,98,239,148,243,176,153,176,159,24,131,
    175,51,15,53,168,174,58,79,246,54,249,71,167,247,60,179,
    219,63,205,45,190,54,6,48,94,6,111,255,116,175,250,182,
    97,172,167,248,180,201,8,106,125,140,183,235,190,118,232,101,
    43,97,89,223,54,78,194,232,62,148,83,212,123,99,220,120,
    80,121,50,84,206,97,63,244,232,173,43,221,226,149,24,73,
    62,189,88,141,15,113,133,120,241,124,68,126,186,245,239,226,
    33,241,245,130,120,166,170,237,75,103,225,234,174,119,36,221,
    3,188,235,145,252,171,113,210,42,139,133,85,10,99,202,26,
    151,16,71,173,88,226,221,18,89,188,99,94,230,59,153,104,
    5,42,14,134,201,106,235,242,121,67,104,185,10,31,45,177,
    80,92,34,199,207,202,216,236,36,120,163,237,115,201,16,201,
    226,199,44,252,194,151,154,17,158,126,175,199,75,144,183,29,
    44,189,194,32,108,105,135,94,153,57,73,87,191,120,152,159,
    171,70,228,12,18,37,187,188,200,165,131,36,148,95,214,248,
    171,186,63,110,54,122,81,229,6,75,207,80,50,84,177,219,
    71,167,147,224,255,105,66,146,134,241,229,44,156,230,248,168,
    241,37,66,73,14,167,95,69,185,35,125,4,242,145,26,71,
    3,199,209,239,0,248,189,227,56,19,175,19,63,213,201,21,
    146,187,160,235,196,10,86,138,203,23,254,86,75,85,193,197,
    247,200,255,42,244,246,40,85,232,59,240,32,177,137,98,207,
    229,137,112,90,99,82,87,195,124,166,81,62,218,115,187,250,
    229,148,159,7,237,59,212,108,101,185,148,125,168,223,66,248,
    229,65,191,232,224,249,197,55,3,190,8,216,59,68,39,32,
    116,31,238,100,26,238,104,13,247,181,247,13,30,228,236,88,
    228,145,97,159,141,16,197,131,103,145,47,213,198,200,248,19,
    223,143,109,55,108,73,231,165,164,139,137,186,51,202,144,222,
    74,180,140,140,203,186,112,43,195,188,99,123,201,61,162,159,
    181,57,29,142,143,127,222,137,188,99,233,167,60,183,46,231,
    121,26,117,93,164,95,188,202,126,144,173,178,48,50,238,199,
    52,107,121,132,138,56,11,16,102,111,228,249,97,68,89,157,
    28,59,186,237,170,14,27,253,141,111,31,197,250,138,17,30,
    203,86,128,94,137,121,126,206,155,214,33,159,94,124,96,22,
    231,77,58,22,244,61,93,191,18,62,158,201,86,160,183,240,
    234,92,85,84,12,250,39,139,41,106,162,46,74,98,182,94,
    53,171,149,106,217,196,120,33,202,162,168,153,213,218,172,184,
    232,119,19,227,166,102,108,46,87,197,127,1,246,2,20,52,
};

EmbeddedPython embedded_m5_internal_param_MemTest(
    "m5/internal/param_MemTest.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_MemTest.py",
    "m5.internal.param_MemTest",
    data_m5_internal_param_MemTest,
    2480,
    7637);

} // anonymous namespace