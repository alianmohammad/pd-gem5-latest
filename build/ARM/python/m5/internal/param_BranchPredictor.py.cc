#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BranchPredictor[] = {
    120,156,197,88,95,115,27,73,17,239,217,93,173,45,217,178,
    229,248,95,226,4,188,7,24,196,21,103,65,32,28,85,151,
    74,17,115,87,197,81,117,190,176,242,225,156,56,88,214,218,
    145,180,178,180,171,218,29,37,167,148,253,130,83,192,27,31,
    130,226,129,7,190,5,223,11,186,123,118,87,178,46,190,164,
    10,34,108,237,212,108,239,76,79,255,249,117,79,207,180,33,
    251,43,225,243,115,7,32,109,9,128,0,127,2,6,0,67,
    1,248,46,164,128,96,19,206,75,144,252,4,130,18,188,4,
    104,25,32,13,184,194,142,9,191,53,32,90,229,57,54,12,
    76,166,8,152,84,64,90,208,42,193,105,180,1,150,180,225,
    188,2,201,31,64,8,17,9,120,26,44,65,176,12,47,145,
    59,118,202,204,112,25,130,10,119,202,16,172,112,167,2,147,
    26,200,21,104,33,243,37,104,85,145,213,187,200,106,141,89,
    253,139,88,5,248,101,11,130,42,13,71,89,62,167,145,22,
    141,228,53,214,152,203,122,46,89,13,90,27,121,255,214,76,
    127,147,251,235,32,55,160,191,5,253,109,232,239,64,7,21,
    174,21,92,119,65,154,208,191,13,173,219,32,241,183,11,87,
    104,147,96,99,102,198,29,158,113,171,152,177,199,51,238,66,
    235,46,72,252,237,233,25,54,52,235,219,104,231,240,223,248,
    87,71,59,131,90,197,230,153,76,210,48,142,188,48,234,196,
    161,65,223,109,106,200,43,109,106,150,50,247,252,130,220,243,
    15,96,223,4,70,230,158,75,64,198,130,116,25,24,112,201,
    157,75,3,38,117,184,16,208,183,32,48,225,2,151,41,145,
    0,93,1,87,6,124,97,210,128,75,108,45,52,232,55,193,
    82,218,55,125,54,168,230,180,4,151,37,184,40,65,243,233,
    133,65,132,243,50,36,127,135,23,247,152,233,50,51,53,224,
    2,91,11,174,44,184,180,225,20,7,33,169,95,38,245,197,
    211,11,212,20,41,205,186,133,210,30,207,168,75,170,4,97,
    18,249,67,169,118,176,239,141,252,196,31,122,71,137,31,181,
    123,79,18,25,132,109,21,39,245,74,62,54,78,15,71,190,
    234,185,60,217,36,171,12,71,138,153,198,145,84,43,216,233,
    132,81,224,13,227,96,60,144,106,153,56,122,157,112,32,61,
    143,63,126,60,28,197,137,250,40,73,226,196,37,195,50,113,
    16,251,197,12,50,107,123,16,167,178,78,171,241,50,46,177,
    87,52,186,51,98,142,36,0,11,76,147,3,153,182,147,112,
    164,208,95,154,35,141,38,110,117,242,20,55,233,9,54,141,
    113,138,94,109,248,131,208,143,26,105,56,28,15,124,84,44,
    109,140,130,174,28,62,104,156,141,195,65,208,120,236,126,210,
    24,77,84,47,142,26,72,11,35,37,209,50,131,198,43,109,
    114,136,3,111,17,247,231,97,215,11,89,47,175,39,7,35,
    153,84,137,186,71,43,139,154,88,21,182,48,69,93,84,177,
    87,194,199,20,247,140,21,113,28,146,102,109,210,150,160,101,
    230,96,250,27,176,219,208,235,231,6,36,247,8,42,125,252,
    9,242,45,2,166,73,223,12,254,246,107,50,137,166,246,77,
    2,128,38,94,48,188,16,103,56,242,33,121,60,2,198,72,
    9,250,54,104,236,32,228,52,152,146,9,181,56,156,216,24,
    200,220,130,244,175,215,57,68,53,64,147,99,8,35,105,7,
    151,250,35,195,177,89,39,193,143,25,16,170,23,166,241,243,
    136,205,78,125,14,160,38,218,228,201,228,211,179,190,108,171,
    116,31,9,159,199,99,167,237,71,81,172,28,63,8,28,95,
    169,36,60,27,43,153,58,42,118,14,210,122,153,252,188,145,
    99,170,224,55,25,229,24,34,127,35,134,244,11,57,0,95,
    54,249,133,237,159,74,133,120,232,197,65,138,116,98,209,149,
    202,37,33,213,26,54,143,243,229,24,120,117,59,135,73,42,
    7,29,85,97,196,249,105,234,241,114,68,103,112,209,236,103,
    254,96,44,21,141,79,149,175,112,85,234,234,133,22,1,175,
    219,164,96,174,31,217,204,139,226,40,152,160,120,97,251,128,
    86,190,205,32,91,5,130,217,54,66,108,9,91,27,170,8,
    185,154,209,38,77,172,12,96,12,46,138,111,5,236,112,145,
    229,11,4,218,21,102,149,186,193,105,129,85,226,144,115,168,
    71,147,93,194,177,123,151,154,123,212,124,35,215,250,45,171,
    94,157,87,253,62,45,103,176,190,109,51,211,172,8,155,227,
    107,97,115,103,26,54,152,252,154,4,127,131,130,100,10,127,
    147,116,79,30,101,88,167,192,66,119,227,231,25,132,179,69,
    220,26,105,106,231,224,116,9,113,179,176,235,206,192,206,37,
    103,48,230,220,59,55,89,111,127,225,214,235,106,235,61,160,
    229,86,51,180,84,25,37,21,209,38,87,27,153,45,217,142,
    31,98,103,178,75,118,156,181,224,46,238,98,167,81,149,183,
    35,222,210,120,51,215,105,66,27,86,119,44,194,85,199,132,
    157,108,155,73,41,170,71,73,252,229,196,137,59,142,130,92,
    134,135,7,233,225,65,250,1,198,189,243,136,51,137,142,124,
    29,219,137,28,37,24,195,101,126,209,113,233,113,140,122,217,
    22,129,150,166,45,155,29,196,246,229,52,148,170,132,178,207,
    34,140,91,41,140,75,178,126,64,107,85,216,178,38,236,226,
    83,17,44,144,23,115,246,227,122,129,191,226,115,68,54,38,
    53,37,80,21,231,54,181,184,172,9,233,228,126,239,26,62,
    222,174,30,238,187,200,248,195,60,170,108,40,208,64,143,73,
    146,18,208,255,12,92,72,9,248,19,144,231,209,193,89,104,
    112,16,210,67,14,220,164,225,191,7,78,44,175,216,187,12,
    29,98,70,150,122,48,2,211,247,121,168,222,202,126,5,127,
    153,201,74,87,38,8,218,118,204,172,84,154,221,118,172,34,
    40,25,50,111,180,181,88,215,163,151,124,211,243,83,26,166,
    227,212,44,226,116,154,224,138,234,6,147,207,91,70,211,178,
    94,197,35,129,62,158,98,137,114,250,93,177,105,204,32,228,
    7,212,188,87,128,67,228,180,183,39,219,254,124,18,158,217,
    127,60,157,248,126,73,2,88,44,242,186,205,81,123,68,44,
    62,139,194,41,244,75,57,244,239,23,208,151,156,138,95,114,
    229,76,173,65,206,190,50,4,30,85,176,216,160,83,130,5,
    178,4,45,155,130,132,107,66,145,197,144,200,115,21,229,184,
    107,121,158,45,114,172,109,85,248,91,187,146,154,47,23,145,
    27,200,155,15,7,254,240,44,240,31,253,134,86,162,229,218,
    121,84,25,185,236,181,89,217,41,34,196,77,226,243,235,15,
    115,29,158,45,34,47,252,8,25,23,178,115,20,4,113,155,
    147,193,73,79,58,67,57,60,195,53,123,225,200,233,12,252,
    46,251,197,204,116,251,52,215,77,177,99,231,119,211,148,50,
    206,113,236,180,227,8,211,245,152,214,115,2,137,231,5,25,
    56,239,57,156,235,157,48,117,252,51,252,234,183,149,70,248,
    245,24,229,242,204,79,186,41,87,98,231,207,169,187,40,191,
    122,120,30,12,177,238,60,205,109,163,143,40,69,226,230,82,
    83,135,11,110,122,120,14,80,19,157,170,126,74,205,247,169,
    57,128,5,230,247,6,50,254,140,86,32,83,217,152,77,202,
    66,145,176,115,67,159,208,252,244,171,193,250,207,55,9,86,
    125,163,128,3,164,13,253,37,110,151,41,191,183,202,57,177,
    194,237,10,19,87,115,98,149,219,53,38,174,231,196,26,183,
    27,76,188,149,19,55,185,221,98,226,118,158,27,118,152,184,
    75,199,255,236,242,227,14,229,9,251,191,205,19,28,104,139,
    10,177,223,253,79,211,131,123,255,255,33,186,251,99,200,234,
    132,155,82,131,1,51,101,250,251,58,53,104,63,96,53,49,
    217,154,169,33,89,77,113,138,91,63,214,153,23,92,129,122,
    134,46,53,167,78,227,205,156,143,249,148,23,34,249,124,94,
    68,141,102,93,80,18,30,252,209,72,70,193,180,88,228,47,
    139,176,19,5,125,0,211,253,28,43,195,45,124,190,138,79,
    75,15,204,53,100,28,150,10,68,238,45,208,173,97,145,216,
    246,174,37,54,151,252,166,83,89,145,197,180,19,190,115,83,
    58,241,142,78,142,62,138,176,18,147,41,29,65,222,108,32,
    22,25,92,92,79,73,95,63,239,196,239,54,195,23,242,245,
    11,228,3,103,22,200,72,234,157,27,231,185,143,155,5,247,
    215,143,34,214,188,29,232,119,245,221,27,103,132,184,249,53,
    123,97,71,61,30,42,102,254,134,67,105,5,58,61,205,18,
    191,70,237,104,60,60,233,37,210,15,94,231,128,153,129,185,
    125,166,36,134,177,162,194,56,144,3,169,228,171,195,77,17,
    54,178,35,113,128,94,75,226,9,30,218,248,20,132,239,3,
    207,91,216,158,247,51,100,252,5,173,176,5,122,207,179,241,
    172,155,255,151,173,178,224,82,98,238,78,87,11,70,74,234,
    154,127,146,186,156,220,214,11,156,243,173,99,190,167,115,22,
    163,74,247,216,31,234,27,37,190,46,113,9,36,238,183,243,
    40,225,236,163,207,128,124,210,210,39,90,204,88,92,231,112,
    89,227,30,18,157,110,7,134,15,14,115,221,14,181,110,205,
    112,168,175,207,248,226,115,248,64,109,204,13,11,18,31,251,
    219,115,84,52,105,136,22,125,161,175,205,114,178,34,77,230,
    249,146,60,197,27,23,11,124,1,92,148,239,236,206,68,118,
    195,20,153,48,135,98,116,150,100,201,216,234,91,55,2,107,
    118,254,162,0,160,11,112,125,81,240,136,174,135,211,135,216,
    208,245,88,121,189,44,108,131,238,95,77,81,17,85,97,137,
    213,106,217,44,219,229,146,137,32,33,202,166,168,152,229,202,
    170,160,255,125,132,74,197,216,95,43,139,255,0,232,102,226,
    122,
};

EmbeddedPython embedded_m5_internal_param_BranchPredictor(
    "m5/internal/param_BranchPredictor.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_BranchPredictor.py",
    "m5.internal.param_BranchPredictor",
    data_m5_internal_param_BranchPredictor,
    2177,
    6544);

} // anonymous namespace
