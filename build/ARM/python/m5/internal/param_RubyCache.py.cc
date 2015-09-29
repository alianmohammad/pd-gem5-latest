#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyCache[] = {
    120,156,189,89,81,115,219,198,17,222,3,72,202,164,69,75,
    178,44,201,182,100,139,182,163,132,113,99,169,117,235,164,211,
    120,60,117,236,206,212,153,70,113,193,206,216,97,211,160,16,
    112,146,64,129,0,7,56,217,102,70,122,169,60,109,223,250,
    35,58,125,232,75,127,69,255,87,187,187,135,131,32,138,114,
    52,211,210,18,121,115,216,219,219,187,221,253,118,111,113,244,
    33,255,171,226,247,151,45,128,236,95,2,32,192,143,128,8,
    160,47,160,43,64,72,1,193,60,236,85,33,253,25,4,85,
    120,11,208,181,64,90,112,132,29,27,126,111,65,60,205,115,
    106,16,217,76,17,48,108,128,172,64,183,10,47,226,57,168,
    200,26,236,53,32,253,35,8,33,98,1,47,131,41,8,46,
    192,91,148,142,157,58,11,188,0,65,131,59,117,8,46,114,
    167,1,195,89,144,23,161,139,194,167,160,219,68,81,119,81,
    212,37,22,245,111,18,21,224,200,21,8,154,196,142,123,249,
    134,56,43,196,201,107,92,98,41,51,102,103,179,208,157,51,
    253,203,165,254,124,169,127,165,212,95,40,245,23,75,253,165,
    82,255,106,169,127,173,212,191,206,253,25,144,115,208,91,134,
    222,10,244,110,192,54,26,113,182,216,233,77,144,54,244,86,
    161,187,10,18,63,55,225,8,237,28,204,149,102,180,120,198,
    229,98,198,45,158,113,27,186,183,65,226,231,150,158,81,131,
    78,123,1,125,23,254,7,255,218,232,59,80,211,216,188,146,
    105,22,38,177,27,198,219,73,104,209,120,141,26,242,180,79,
    205,84,238,242,39,228,242,127,2,251,59,176,114,151,31,2,
    10,22,164,75,100,193,33,119,14,45,24,182,225,64,64,175,
    2,129,13,7,184,76,149,54,176,35,224,200,130,111,109,98,
    56,196,182,130,78,186,9,21,165,253,221,99,39,105,73,83,
    112,88,133,131,42,116,94,30,88,68,216,171,67,250,15,248,
    126,133,133,94,96,161,22,28,96,91,129,163,10,28,214,224,
    5,50,33,169,87,39,245,197,203,3,212,20,41,157,118,5,
    119,187,89,82,151,84,9,194,52,246,250,82,205,98,223,29,
    120,169,215,119,157,253,173,225,19,207,223,149,237,134,225,74,
    178,245,129,167,118,29,158,102,147,61,250,3,197,226,146,88,
    170,139,216,217,14,227,192,237,39,193,126,36,213,5,146,229,
    110,135,145,116,93,30,124,214,31,36,169,250,85,154,38,169,
    67,38,101,98,148,120,197,12,50,168,31,37,153,108,211,106,
    188,140,67,226,21,113,111,15,88,34,109,128,183,74,147,3,
    153,249,105,56,80,232,41,45,145,184,73,90,155,124,196,77,
    182,137,205,198,126,134,254,220,240,162,208,139,55,178,176,191,
    31,121,42,65,194,32,216,145,253,7,27,91,251,97,20,108,
    60,118,190,218,24,12,213,110,18,111,32,45,140,149,68,155,
    68,27,35,214,88,71,150,203,36,247,117,184,227,134,172,145,
    187,43,163,129,76,155,68,189,78,107,138,89,49,45,106,194,
    22,109,209,196,94,21,191,182,88,177,46,138,205,144,116,242,
    73,79,130,147,109,0,244,119,96,87,161,167,247,44,72,87,
    8,30,61,252,8,242,39,130,164,67,99,22,143,253,150,140,
    161,169,61,155,156,174,137,7,12,41,196,22,114,62,36,47,
    199,192,184,168,66,175,6,26,47,8,51,13,160,116,72,45,
    178,147,24,11,133,87,32,251,219,73,9,241,44,160,177,49,
    21,32,105,17,151,250,19,67,176,211,166,141,111,50,20,212,
    110,152,37,175,99,54,56,245,57,104,58,104,147,231,195,175,
    183,122,210,87,217,42,18,190,73,246,91,190,23,199,137,106,
    121,65,208,242,148,74,195,173,125,37,179,150,74,90,107,89,
    187,78,30,158,51,104,42,228,13,7,6,61,228,105,68,143,
    126,8,66,95,225,195,60,63,176,253,51,169,16,9,187,73,
    144,33,157,68,236,72,229,208,38,213,37,108,30,155,229,24,
    114,237,154,1,72,38,163,109,213,96,172,121,89,230,242,114,
    68,103,88,209,236,87,94,180,47,21,241,103,202,83,184,42,
    117,245,66,147,5,214,85,82,205,104,70,214,114,227,36,14,
    134,184,177,208,95,163,53,175,50,188,166,129,0,182,128,224,
    154,194,182,6,77,4,219,172,229,147,14,149,28,90,12,171,
    69,210,24,216,213,34,207,14,8,177,35,204,33,109,139,147,
    0,43,195,97,214,162,30,77,118,8,193,206,50,53,43,212,
    220,48,250,78,76,233,230,168,210,247,105,33,139,53,245,237,
    92,167,34,84,54,79,132,202,181,227,80,193,36,215,33,200,
    91,20,24,199,144,183,73,235,244,81,142,111,10,38,116,49,
    14,151,80,205,182,112,40,245,49,70,24,144,14,161,172,12,
    181,157,18,212,28,114,3,227,204,185,118,150,221,86,223,163,
    221,118,180,221,30,208,66,211,57,66,154,140,140,134,240,201,
    189,86,110,69,182,224,83,236,12,151,200,130,101,219,45,225,
    57,245,34,110,242,129,195,135,22,151,0,58,41,104,147,234,
    78,133,176,180,109,195,98,126,144,100,20,195,131,52,121,51,
    108,37,219,45,5,102,15,15,215,178,245,181,236,115,140,242,
    214,35,206,27,58,206,117,36,167,114,144,98,196,214,249,65,
    71,161,203,17,233,230,71,1,218,152,14,101,118,13,91,150,
    147,78,166,82,202,53,147,53,107,163,48,43,237,242,115,90,
    165,193,54,181,97,9,191,13,193,91,113,19,206,114,92,11,
    240,40,126,191,32,235,146,130,18,168,234,115,58,122,163,172,
    3,105,227,124,116,2,19,147,210,192,185,139,34,159,154,24,
    170,65,129,0,250,218,180,71,130,245,95,128,203,35,1,127,
    6,242,54,58,53,15,4,14,57,250,146,211,230,137,253,59,
    224,4,50,230,116,178,116,64,89,121,138,193,120,203,62,99,
    86,125,88,125,9,127,45,101,159,35,27,4,29,44,118,94,
    0,149,15,150,74,17,130,12,147,115,29,30,149,147,177,74,
    94,217,245,50,98,211,81,105,23,81,121,156,200,138,202,5,
    83,205,196,16,116,65,203,119,105,43,207,142,241,67,89,123,
    89,204,91,37,84,124,66,205,189,2,16,194,208,38,177,171,
    213,209,52,91,58,91,92,157,218,126,77,75,87,120,179,51,
    53,46,176,120,246,87,178,159,164,195,2,234,85,3,245,251,
    5,212,37,167,219,183,92,5,83,107,145,139,143,44,129,175,
    50,88,68,208,91,68,5,100,21,186,53,10,10,174,242,68,
    30,51,194,100,37,202,102,39,114,57,91,99,83,219,169,240,
    178,118,32,53,111,38,155,5,200,135,15,35,175,191,21,120,
    143,254,64,107,208,66,190,137,34,203,236,122,182,188,107,138,
    0,113,214,198,249,241,199,102,247,175,38,155,1,126,130,34,
    139,93,51,222,131,196,231,176,255,221,174,108,245,101,127,11,
    87,219,13,7,173,237,200,219,97,95,216,185,86,95,27,173,
    20,59,115,244,148,204,40,183,108,38,45,63,137,49,25,239,
    251,184,201,86,32,177,234,151,65,235,94,139,51,121,43,204,
    90,222,22,142,122,190,210,136,62,25,141,92,106,121,233,78,
    198,85,213,222,107,234,78,222,151,46,190,201,133,88,61,126,
    103,172,162,95,49,138,180,204,5,163,14,15,60,204,176,154,
    87,67,157,142,62,165,230,99,106,214,224,189,100,239,13,20,
    249,45,201,38,243,212,48,99,212,133,154,161,245,13,211,115,
    154,147,157,14,199,103,226,28,225,168,239,20,242,160,172,17,
    167,156,162,215,71,106,235,148,192,187,13,67,188,200,237,52,
    19,155,134,120,137,219,25,38,206,26,226,28,183,151,153,56,
    111,136,87,184,93,96,226,162,33,46,113,123,149,137,215,12,
    241,58,183,203,76,92,49,196,27,220,222,100,226,170,33,182,
    184,189,197,196,219,134,120,135,219,15,152,184,102,136,31,114,
    251,17,19,219,134,248,49,183,119,153,248,35,115,17,243,9,
    19,239,65,119,157,110,30,136,178,65,89,106,234,127,205,82,
    28,236,147,15,243,224,255,154,156,156,251,239,119,211,206,79,
    33,175,71,206,74,76,162,172,81,83,39,166,158,48,181,124,
    89,29,190,0,88,60,29,41,174,159,74,79,73,237,148,235,
    147,214,143,179,154,94,113,187,112,141,81,162,120,139,249,172,
    80,228,136,203,175,225,149,82,161,205,158,18,47,176,86,194,
    98,252,128,117,117,45,93,143,31,35,174,82,168,76,214,139,
    229,107,119,68,109,93,111,211,110,188,193,64,198,193,113,45,
    205,35,147,117,242,167,185,234,166,244,193,194,249,10,126,79,
    7,84,69,163,193,104,197,62,170,22,33,52,113,111,49,26,
    223,24,63,181,57,4,138,51,193,33,47,233,83,160,56,0,
    156,95,20,118,191,54,6,106,120,254,37,62,189,143,189,99,
    20,203,47,190,101,224,39,181,54,134,47,240,148,247,216,247,
    101,150,253,6,97,20,251,67,150,120,62,78,146,78,254,61,
    53,162,110,159,53,63,77,189,225,23,94,188,151,241,50,231,
    96,163,53,46,153,53,10,178,186,49,102,102,136,31,159,158,
    89,246,187,57,72,44,189,18,22,20,181,60,134,63,42,153,
    228,93,227,36,141,146,120,254,172,62,28,195,139,111,120,145,
    231,203,190,140,149,59,72,162,48,23,123,78,86,90,129,174,
    2,79,15,141,53,98,42,179,100,63,245,101,71,121,81,116,
    182,173,71,216,140,173,79,146,185,154,63,53,19,159,221,108,
    152,41,217,103,233,63,196,67,162,169,200,47,209,248,6,106,
    116,78,22,126,175,221,119,230,32,73,226,155,53,124,80,119,
    198,113,41,47,85,88,130,5,242,141,187,133,117,24,73,59,
    15,31,9,166,226,103,132,174,62,24,51,87,121,59,167,131,
    230,92,140,180,10,215,188,35,3,234,214,25,179,79,70,204,
    15,115,209,2,205,124,129,130,202,73,146,15,172,64,70,82,
    201,209,4,174,47,227,117,77,26,72,44,168,147,161,235,234,
    203,7,124,142,92,247,61,20,163,63,7,253,123,71,70,118,
    164,98,180,134,229,232,194,25,255,245,74,93,112,157,63,242,
    131,137,222,34,185,91,191,122,15,51,135,40,206,76,145,74,
    249,98,223,148,221,124,54,82,30,216,244,250,250,234,150,111,
    39,29,54,243,29,147,141,249,100,211,151,48,124,225,161,47,
    147,240,28,228,151,16,126,231,112,214,137,78,51,250,15,214,
    141,150,235,185,150,199,49,251,92,135,172,197,124,156,82,78,
    179,119,194,190,190,214,230,220,90,30,15,82,15,251,11,35,
    84,116,66,136,62,192,104,88,25,191,60,26,185,163,35,238,
    230,89,11,14,162,252,205,91,181,198,178,60,206,95,178,114,
    166,241,27,199,193,124,227,171,99,199,159,68,137,191,39,131,
    156,231,198,217,60,79,147,62,41,74,158,50,195,28,153,163,
    246,33,55,20,79,252,50,195,105,163,116,145,192,136,78,229,
    78,136,234,167,44,163,224,207,43,23,66,29,27,238,84,122,
    40,205,156,60,250,245,37,128,190,144,124,68,137,50,251,18,
    27,186,122,175,207,212,69,205,162,95,117,108,209,16,77,81,
    17,211,205,186,93,175,213,171,54,70,8,81,230,69,195,174,
    55,166,197,233,255,85,140,146,134,181,186,88,23,255,5,81,
    11,47,193,
};

EmbeddedPython embedded_m5_internal_param_RubyCache(
    "m5/internal/param_RubyCache.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_RubyCache.py",
    "m5.internal.param_RubyCache",
    data_m5_internal_param_RubyCache,
    2499,
    7740);

} // anonymous namespace