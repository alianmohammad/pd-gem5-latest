#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MemTraceProbe[] = {
    120,156,189,88,95,111,227,198,17,159,37,41,217,146,165,179,
    124,182,207,119,62,95,204,182,112,163,6,141,213,94,123,77,
    209,28,14,73,154,0,77,129,56,87,42,128,239,148,32,44,
    77,174,100,202,18,41,144,235,115,20,216,47,245,161,237,91,
    63,68,209,135,126,143,126,175,118,102,150,164,41,159,93,28,
    208,74,182,184,88,14,119,103,231,207,111,102,103,215,135,236,
    175,130,207,71,54,64,154,8,128,0,127,2,70,0,99,1,
    61,1,66,10,8,214,225,164,2,201,47,33,168,192,107,128,
    158,1,210,128,75,236,152,240,181,1,81,131,231,84,97,100,
    50,69,192,180,14,210,130,94,5,14,163,53,176,100,21,78,
    234,144,252,17,132,16,145,128,23,193,18,4,203,240,26,185,
    99,167,198,12,151,33,168,115,167,6,193,10,119,234,48,109,
    129,92,129,30,50,95,130,94,19,89,189,135,172,238,48,171,
    127,17,171,0,191,108,64,208,164,225,40,203,75,26,105,209,
    72,94,227,14,115,89,205,37,107,65,111,45,239,223,45,245,
    215,75,253,141,82,127,147,251,171,32,215,96,120,15,134,91,
    48,188,15,125,52,68,171,88,237,1,72,19,134,219,208,219,
    6,137,191,7,112,137,182,10,214,74,51,30,242,140,187,197,
    140,29,158,241,8,122,143,64,226,111,71,207,168,66,183,189,
    137,246,15,255,141,127,109,180,63,168,6,54,175,100,146,134,
    113,228,134,81,63,14,13,250,94,165,134,188,229,83,179,148,
    185,237,183,228,182,127,2,251,44,48,50,183,93,0,50,22,
    164,203,200,128,11,238,92,24,48,109,195,185,128,161,5,129,
    9,231,184,76,133,4,24,8,184,52,224,27,147,6,92,96,
    107,161,161,223,1,75,105,159,13,217,208,154,211,18,92,84,
    224,188,2,221,23,231,6,17,78,106,144,252,3,190,223,97,
    166,203,204,212,128,115,108,45,184,180,224,162,10,135,56,8,
    73,195,26,169,47,94,156,163,166,72,233,182,45,148,246,160,
    164,46,169,18,132,73,228,141,165,218,192,190,59,241,18,111,
    236,126,33,199,95,37,158,47,159,39,241,145,108,215,243,145,
    113,186,63,241,212,177,195,83,77,178,201,120,162,152,101,28,
    73,181,130,157,126,24,5,238,56,14,78,71,82,45,19,63,
    183,31,142,164,235,242,199,207,199,147,56,81,159,37,73,156,
    56,100,86,38,142,98,175,152,65,70,245,71,113,42,219,180,
    26,47,227,16,123,69,163,251,19,230,72,2,176,184,52,57,
    144,169,159,132,19,133,222,210,28,105,52,113,107,147,159,184,
    73,29,108,58,167,41,250,180,227,141,66,47,234,164,225,248,
    116,228,169,24,9,147,96,32,199,79,58,71,167,225,40,232,
    124,236,124,209,153,76,213,113,28,117,144,22,70,74,162,93,
    70,157,27,44,178,143,195,238,18,239,179,112,224,134,172,149,
    123,44,71,19,153,52,137,186,77,235,138,150,104,136,170,48,
    69,91,52,177,87,193,199,20,59,198,138,56,8,73,47,159,
    116,37,88,153,57,144,254,14,236,50,244,248,137,1,201,14,
    193,100,136,63,65,126,69,176,116,233,155,193,223,254,64,6,
    209,212,161,73,206,215,196,115,134,22,98,12,71,62,37,111,
    71,192,248,168,192,176,10,26,55,8,55,13,164,100,74,45,
    14,39,54,6,50,183,32,253,219,44,135,168,5,104,112,12,
    107,36,221,195,165,254,196,80,236,182,73,240,3,134,131,58,
    14,211,248,44,98,163,83,159,131,167,139,54,121,62,253,242,
    104,40,125,149,238,34,225,101,124,106,251,94,20,197,202,246,
    130,192,246,148,74,194,163,83,37,83,91,197,246,94,218,174,
    145,151,215,114,68,21,252,166,147,28,65,228,109,68,144,126,
    9,66,95,225,203,58,191,176,253,83,169,16,13,199,113,144,
    34,157,88,12,164,114,72,72,117,7,155,143,243,229,24,118,
    237,106,14,146,84,142,250,170,206,120,243,210,212,229,229,136,
    206,208,162,217,175,188,209,169,84,52,62,85,158,194,85,169,
    171,23,154,63,184,238,147,122,185,118,100,49,55,138,163,96,
    138,194,133,254,30,173,123,159,33,214,0,2,217,38,2,108,
    9,219,42,52,17,112,45,195,39,61,172,12,94,12,173,123,
    164,53,176,187,69,150,41,16,102,151,152,79,218,6,39,4,
    86,136,195,205,166,30,77,118,8,197,206,67,106,118,168,121,
    148,235,60,87,197,155,215,21,127,76,139,25,172,173,111,102,
    122,21,33,115,48,19,50,15,174,66,6,147,94,151,160,111,
    80,128,92,65,223,36,205,147,103,25,206,41,168,208,213,248,
    185,132,110,182,135,211,34,61,171,57,48,29,66,91,25,114,
    131,18,228,28,114,5,227,205,121,112,155,237,118,23,108,187,
    129,182,221,19,90,172,145,33,165,201,8,169,11,159,220,108,
    100,150,100,43,126,138,157,233,22,89,177,108,191,45,220,187,
    14,163,38,111,66,188,145,241,214,174,19,132,54,171,238,88,
    132,169,190,9,247,178,205,37,165,120,158,36,241,119,83,59,
    238,219,10,114,25,158,238,165,251,123,233,135,24,241,246,51,
    206,33,58,230,117,84,39,114,146,96,244,214,248,69,71,164,
    203,209,233,102,91,3,218,153,54,106,118,15,91,151,19,80,
    170,18,202,59,243,55,109,189,48,45,73,250,33,173,84,103,
    187,154,176,133,79,93,176,56,110,204,89,143,107,4,254,138,
    207,39,100,97,82,82,2,85,116,78,87,11,203,122,144,70,
    206,187,51,216,152,167,22,206,123,200,246,211,60,158,170,80,
    32,129,30,147,228,36,136,255,5,184,116,18,240,103,32,175,
    163,115,179,160,224,240,163,135,156,183,78,195,191,5,78,40,
    55,236,88,134,14,46,35,75,57,24,123,233,7,60,84,111,
    96,191,135,191,150,178,209,165,9,130,54,27,51,43,142,202,
    155,141,85,132,35,195,229,173,54,20,107,54,110,201,51,199,
    94,74,195,116,132,154,69,132,94,37,182,162,162,193,180,51,
    87,36,45,235,53,92,18,231,243,43,28,81,38,127,40,214,
    141,18,58,126,74,205,251,5,48,68,78,155,151,100,187,215,
    83,111,105,207,113,117,186,251,29,45,111,177,192,171,85,206,
    55,51,92,10,224,87,114,224,63,46,128,47,57,9,191,230,
    90,153,90,131,156,125,105,8,60,180,96,137,65,231,5,11,
    100,5,122,85,10,17,174,3,69,22,65,34,207,83,180,222,
    76,134,103,155,28,104,107,21,254,214,174,164,230,187,249,231,
    5,242,230,211,145,55,62,10,188,103,47,104,29,90,204,207,
    99,202,200,37,111,149,37,167,120,16,183,9,207,175,63,203,
    53,120,53,255,156,240,115,100,91,72,206,17,16,196,62,39,
    130,175,142,165,61,150,227,35,92,241,56,156,216,253,145,55,
    96,159,152,153,102,95,230,154,41,118,234,245,61,52,165,108,
    115,16,219,126,28,97,154,62,245,81,80,59,144,120,62,144,
    129,253,190,205,57,222,14,83,219,59,194,175,158,175,52,190,
    103,227,147,11,50,47,25,164,92,123,157,156,81,119,49,62,
    117,241,236,23,98,157,249,50,183,140,62,144,20,9,155,75,
    75,29,44,184,213,97,221,175,166,58,73,253,138,154,159,80,
    179,7,11,203,235,29,100,123,72,252,201,76,85,204,35,53,
    193,213,202,204,192,231,52,55,125,51,68,207,222,38,68,245,
    141,66,22,168,85,26,41,151,232,224,73,109,141,210,123,175,
    158,19,87,184,109,48,177,153,95,90,220,97,226,42,244,90,
    116,194,39,202,26,197,249,210,255,26,231,28,42,139,9,18,
    247,255,26,222,206,227,197,11,238,252,2,178,61,254,182,208,
    22,101,173,154,58,180,135,34,175,149,203,42,241,97,123,251,
    102,140,185,126,34,61,37,181,131,182,23,161,39,231,7,189,
    170,87,184,41,87,166,56,45,124,80,40,116,201,165,205,116,
    163,84,204,178,215,196,33,214,33,88,240,158,179,206,174,161,
    107,222,43,4,90,133,234,91,216,68,242,204,189,65,125,93,
    215,146,68,222,100,34,163,224,170,102,229,47,243,119,58,229,
    160,0,174,74,11,44,80,55,240,121,51,208,44,61,48,215,
    142,253,85,41,66,107,33,158,99,132,134,185,207,218,116,169,
    114,149,101,29,242,152,206,171,69,74,117,126,83,248,224,199,
    183,192,143,246,19,233,250,241,120,146,72,60,72,224,97,232,
    109,135,98,225,195,153,125,150,172,126,248,95,103,243,5,23,
    45,242,22,195,104,129,122,177,0,145,216,91,28,73,129,28,
    73,37,111,66,148,34,19,100,71,207,64,226,126,25,79,241,
    120,196,39,14,124,31,185,238,130,246,153,95,35,91,170,249,
    57,225,209,62,83,197,157,102,19,255,107,86,77,240,182,125,
    237,182,84,139,244,14,228,181,245,148,37,3,103,181,240,33,
    223,232,229,59,40,7,40,157,1,15,188,177,190,175,225,235,
    8,231,7,212,252,40,135,1,135,150,62,105,241,137,70,159,
    26,49,24,185,166,224,18,194,217,39,58,173,59,126,178,159,
    107,181,175,181,250,196,75,37,106,198,74,241,189,226,248,137,
    218,185,54,178,27,142,245,5,150,251,74,82,225,162,30,222,
    200,170,24,166,214,174,125,15,18,15,251,155,215,168,232,144,
    16,253,241,189,190,216,202,201,124,147,120,131,108,116,104,46,
    19,120,155,127,51,231,50,44,18,57,8,83,100,199,188,202,
    147,178,148,68,158,83,246,45,248,44,51,88,12,146,116,221,
    172,79,246,207,232,30,55,253,8,27,186,203,170,173,214,68,
    213,160,171,82,83,212,69,83,88,162,209,172,153,181,106,173,
    98,34,218,136,178,46,234,102,173,222,16,249,255,46,98,175,
    110,236,54,106,226,63,119,232,183,175,
};

EmbeddedPython embedded_m5_internal_param_MemTraceProbe(
    "m5/internal/param_MemTraceProbe.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_MemTraceProbe.py",
    "m5.internal.param_MemTraceProbe",
    data_m5_internal_param_MemTraceProbe,
    2154,
    6483);

} // anonymous namespace