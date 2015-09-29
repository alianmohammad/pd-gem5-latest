#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Pl111[] = {
    120,156,189,88,235,115,27,73,17,239,217,149,100,75,182,252,
    118,158,78,172,112,248,162,4,206,38,129,112,20,151,74,145,
    139,41,200,85,197,23,214,20,201,9,138,101,189,59,178,87,
    222,135,106,119,100,71,87,246,23,156,2,62,80,197,31,65,
    241,129,255,227,254,47,232,238,217,93,175,108,153,187,42,78,
    103,75,83,173,121,244,244,227,215,61,61,227,66,246,87,197,
    239,47,90,0,233,156,1,224,225,71,64,0,16,10,232,8,
    16,82,128,183,12,135,85,72,126,2,94,21,222,3,116,12,
    144,6,156,33,97,194,239,13,136,102,121,77,13,2,147,123,
    4,12,27,32,43,208,169,194,155,104,17,42,178,6,135,13,
    72,254,4,66,136,72,192,91,111,10,188,105,120,143,220,145,
    168,51,195,105,240,26,76,212,193,155,97,162,1,195,5,144,
    51,208,65,230,83,208,105,34,171,135,200,106,142,89,125,69,
    172,60,28,89,1,175,73,211,81,150,47,104,102,133,102,242,
    30,115,204,101,62,151,108,1,58,139,57,189,84,162,151,75,
    244,74,137,94,45,209,215,74,244,245,18,125,163,68,223,44,
    209,183,74,244,237,18,189,86,162,239,148,232,187,37,122,189,
    68,183,74,244,189,18,253,61,166,231,65,46,66,239,3,232,
    125,31,122,27,208,69,39,45,20,150,248,16,164,9,189,251,
    208,185,15,18,63,31,194,25,250,209,91,44,173,104,243,138,
    165,98,197,3,94,241,16,58,15,65,226,231,129,94,81,131,
    221,246,42,98,195,255,15,254,181,5,82,106,22,155,35,153,
    164,126,28,217,126,212,141,125,131,198,107,212,16,146,92,106,
    166,50,72,189,32,72,253,27,24,79,158,145,65,234,20,144,
    177,32,93,2,3,78,153,56,53,96,216,134,19,1,189,10,
    120,38,156,224,54,85,18,96,95,192,153,1,127,48,105,194,
    41,182,21,4,193,93,168,40,141,167,30,131,64,115,154,130,
    211,42,156,84,97,247,237,137,65,29,135,117,72,254,5,95,
    174,49,211,105,102,106,192,9,182,21,56,171,192,105,13,222,
    224,36,236,234,213,73,125,241,246,4,53,197,158,221,118,5,
    165,221,41,169,75,170,120,126,18,57,161,100,213,237,190,147,
    56,161,253,58,120,244,232,81,187,145,207,136,211,205,190,163,
    14,44,94,98,146,45,194,190,98,86,113,36,213,12,18,93,
    63,242,236,48,246,6,129,84,211,196,199,238,250,129,180,109,
    30,124,25,246,227,68,253,50,73,226,196,34,115,114,103,16,
    59,197,10,50,166,27,196,169,108,211,110,188,141,69,236,21,
    205,238,246,153,35,9,192,98,210,98,79,166,110,226,247,21,
    122,73,115,164,217,196,173,77,254,225,38,253,12,155,173,65,
    138,190,220,114,2,223,137,182,82,63,28,4,142,138,177,163,
    239,237,203,240,201,214,222,192,15,188,173,231,214,171,173,254,
    80,29,196,209,22,246,249,145,146,104,143,96,171,100,137,77,
    28,94,34,158,199,254,190,237,179,54,246,129,12,250,50,105,
    82,239,45,218,79,44,136,89,81,19,166,104,139,38,82,85,
    252,154,98,205,152,17,59,62,233,227,146,142,4,35,51,7,
    206,63,129,93,132,30,62,52,32,89,35,88,244,240,35,200,
    143,8,142,93,26,51,120,236,55,100,8,221,219,51,201,217,
    186,243,132,161,132,152,194,153,79,201,187,17,48,30,170,208,
    171,129,198,9,194,75,3,39,25,82,139,211,137,141,129,204,
    43,144,254,99,148,67,180,0,104,104,76,49,216,117,13,183,
    250,51,67,111,183,77,130,239,48,12,212,129,159,198,199,17,
    27,155,104,70,204,46,218,228,245,240,243,189,158,116,85,186,
    142,29,95,196,131,150,235,68,81,172,90,142,231,181,28,165,
    18,127,111,160,100,218,82,113,107,35,109,215,201,187,139,57,
    146,10,126,195,126,142,28,242,50,34,71,255,240,124,87,225,
    143,101,254,193,246,79,165,66,20,28,196,94,138,253,196,98,
    95,42,139,132,84,115,216,60,207,183,99,184,181,107,57,56,
    82,25,116,85,131,113,230,164,169,205,219,81,63,67,138,86,
    31,57,193,64,42,154,159,42,71,225,174,68,234,141,38,7,
    170,27,164,86,174,21,89,202,142,226,200,27,162,80,190,187,
    65,251,221,96,104,205,2,129,107,21,129,53,133,109,13,154,
    8,180,5,195,37,249,43,25,172,24,82,215,72,91,96,55,
    139,44,35,32,188,206,48,111,180,13,14,124,86,132,195,171,
    69,20,45,182,8,189,214,109,106,214,168,185,147,235,58,17,
    133,155,23,21,126,76,155,24,172,165,107,102,250,20,33,178,
    51,18,34,55,207,67,4,147,218,46,65,221,160,128,56,135,
    186,73,26,39,207,50,92,83,16,161,107,113,184,132,102,182,
    131,181,64,250,213,114,32,90,132,174,50,196,246,75,16,179,
    200,5,140,47,235,230,85,54,91,255,142,108,182,175,109,246,
    132,54,153,205,144,209,100,68,52,132,75,110,53,50,11,178,
    245,182,145,24,94,39,235,149,237,118,29,207,164,55,81,147,
    15,23,62,160,184,156,208,137,64,155,83,19,21,194,80,215,
    132,107,217,161,145,82,220,246,147,248,221,176,21,119,91,10,
    114,25,158,110,164,155,27,233,39,24,217,173,103,156,43,116,
    108,235,232,77,100,63,193,40,173,243,15,29,121,54,71,161,
    157,165,126,180,47,29,192,236,22,182,42,39,154,84,37,148,
    95,38,103,210,70,97,82,146,240,19,218,161,193,246,52,225,
    58,126,27,130,197,176,99,206,106,124,230,243,40,126,63,37,
    203,146,114,18,168,122,180,118,181,144,44,63,105,98,221,31,
    193,194,36,164,183,30,34,187,237,60,110,106,80,120,158,190,
    38,201,71,80,254,43,112,9,36,224,47,64,94,70,103,102,
    224,231,48,163,47,57,107,153,166,255,17,56,97,140,57,137,
    12,29,68,70,150,82,48,198,210,143,121,170,62,152,62,131,
    191,149,178,205,153,9,130,14,17,51,43,114,202,135,72,165,
    8,59,134,199,55,58,40,42,163,241,73,30,57,112,82,154,
    166,35,209,44,34,241,60,113,21,21,10,166,151,137,32,103,
    90,243,182,73,140,151,231,184,161,12,125,91,44,27,37,52,
    252,144,154,143,10,32,136,188,239,219,150,104,253,98,74,45,
    157,33,182,78,99,191,166,109,43,44,232,124,141,79,59,94,
    93,0,187,154,3,251,113,1,108,201,73,245,61,215,182,212,
    26,228,212,51,67,224,5,8,75,4,186,123,84,64,86,161,
    83,163,16,224,250,77,100,17,34,242,252,67,121,107,36,99,
    179,13,118,180,117,10,191,106,151,81,243,110,114,241,78,94,
    123,26,56,225,158,231,60,147,196,159,54,113,243,152,49,114,
    137,23,202,18,19,222,197,85,66,243,207,31,229,146,31,77,
    46,214,31,105,143,104,137,25,217,94,236,114,128,255,246,64,
    182,66,25,238,225,78,7,126,191,213,13,156,125,246,129,153,
    105,244,121,174,145,98,39,94,60,3,83,202,34,59,113,203,
    141,35,76,183,3,23,5,108,121,18,235,120,233,181,62,106,
    113,174,110,249,105,203,217,195,81,199,85,26,191,163,113,199,
    5,148,147,236,167,92,43,29,30,19,57,89,31,218,120,39,
    243,177,30,236,230,22,209,23,134,34,241,114,9,168,131,1,
    143,42,172,207,213,80,39,157,159,82,243,128,154,13,152,120,
    126,222,2,126,101,128,148,204,82,195,188,80,23,124,107,225,
    9,175,105,110,122,57,244,254,254,77,66,79,191,58,100,1,
    88,163,153,114,138,46,128,212,214,41,61,119,26,121,231,12,
    183,179,220,217,204,59,231,184,157,231,206,133,252,181,99,145,
    59,151,160,179,76,215,111,234,89,161,160,158,250,127,131,154,
    227,99,178,145,17,124,171,177,108,61,254,238,4,182,126,12,
    217,65,125,85,28,139,178,54,77,29,199,61,145,23,182,101,
    85,248,6,188,52,10,48,219,77,164,163,164,118,196,173,73,
    234,197,193,175,119,139,10,119,228,194,23,165,252,199,133,2,
    103,92,143,12,87,74,21,39,123,71,188,193,226,1,171,210,
    19,214,209,54,116,97,122,142,176,74,161,234,60,54,145,60,
    182,75,234,234,162,147,36,113,250,125,25,121,231,5,37,143,
    76,206,169,148,88,18,56,175,3,176,122,92,193,239,229,192,
    169,232,164,144,107,195,126,169,22,161,50,81,15,49,242,142,
    115,223,240,139,215,121,202,180,200,51,58,73,22,249,209,250,
    121,97,235,187,23,96,37,35,103,15,203,118,215,233,171,65,
    34,233,70,242,117,83,176,42,225,180,60,218,173,110,95,88,
    213,247,223,201,0,239,8,177,123,200,92,255,215,56,177,164,
    132,90,234,227,235,91,121,254,81,228,50,159,113,253,180,158,
    144,137,52,59,144,131,199,147,129,84,178,12,42,69,86,201,
    174,132,158,196,115,48,30,226,245,133,111,6,248,59,176,237,
    9,159,35,63,67,118,135,196,151,196,163,115,164,134,39,201,
    42,255,215,43,117,193,7,241,133,247,73,45,204,15,32,175,
    130,135,169,197,217,102,190,112,40,191,165,229,103,35,71,37,
    221,206,118,156,80,191,152,240,195,128,117,143,154,15,114,76,
    112,92,233,187,16,223,61,244,125,14,35,144,171,4,46,10,
    172,77,234,39,20,135,79,54,115,125,54,181,62,191,139,220,
    151,81,127,160,248,53,47,124,194,158,189,60,107,215,15,245,
    35,146,90,188,48,238,37,14,210,171,23,122,209,202,62,26,
    249,75,201,5,240,101,126,207,195,61,103,59,116,182,229,145,
    239,74,117,115,236,156,79,157,84,254,202,119,175,144,251,53,
    122,174,27,39,161,186,51,118,248,101,164,146,23,49,54,113,
    192,239,56,99,84,26,166,74,134,151,244,149,209,32,180,95,
    201,48,78,134,175,98,79,170,181,11,227,207,61,47,177,156,
    104,95,218,71,146,202,50,117,239,226,132,172,38,211,60,242,
    89,173,241,102,24,153,123,133,237,113,48,179,253,120,91,190,
    160,8,147,94,54,103,188,57,120,206,118,28,146,175,198,239,
    242,218,143,51,111,140,31,63,247,22,97,52,31,228,0,30,
    231,82,58,18,71,122,184,238,58,63,7,57,110,19,185,239,
    163,19,18,230,50,50,59,59,55,40,198,216,125,229,28,81,
    94,57,217,24,215,55,19,253,22,242,140,82,90,218,193,134,
    94,251,234,243,117,81,51,232,17,217,20,13,209,20,21,49,
    219,172,155,245,90,189,106,98,30,160,158,101,209,48,235,141,
    89,241,245,255,235,152,45,26,198,122,179,46,254,11,33,175,
    5,40,
};

EmbeddedPython embedded_m5_internal_param_Pl111(
    "m5/internal/param_Pl111.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_Pl111.py",
    "m5.internal.param_Pl111",
    data_m5_internal_param_Pl111,
    2338,
    6931);

} // anonymous namespace
