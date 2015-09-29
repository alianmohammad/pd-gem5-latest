#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IdeController[] = {
    120,156,189,88,109,111,219,200,17,158,37,37,57,146,173,216,
    142,157,119,231,204,52,245,157,146,203,217,109,218,220,21,189,
    32,104,26,23,168,11,196,151,210,5,146,83,139,178,52,185,
    146,41,243,69,32,215,206,233,96,127,169,131,182,31,10,244,
    71,20,253,208,255,209,255,213,155,153,37,105,90,150,218,0,
    173,109,139,139,225,190,204,206,203,51,179,179,244,32,255,171,
    227,243,51,11,32,251,216,0,240,241,39,32,4,136,4,116,
    5,8,41,192,95,130,253,58,164,63,6,191,14,239,1,186,
    6,72,3,78,144,48,225,183,6,196,115,188,166,1,161,201,
    61,2,70,45,144,53,232,214,225,77,188,8,53,217,128,253,
    22,164,127,0,33,68,44,224,173,63,3,254,21,120,143,220,
    145,104,50,195,43,224,183,152,104,130,63,203,68,11,70,11,
    32,103,161,139,204,103,160,219,70,86,143,144,213,85,102,245,
    47,98,229,227,200,50,248,109,154,142,178,124,77,51,107,52,
    147,247,184,202,92,230,11,201,22,160,187,88,208,215,42,244,
    82,133,94,174,208,215,43,244,141,10,125,179,66,223,170,208,
    183,43,244,157,10,125,183,66,175,84,232,123,21,250,163,10,
    189,90,161,173,10,125,191,66,127,175,66,63,168,208,223,103,
    122,30,228,34,12,214,96,240,49,12,62,129,30,58,111,161,
    180,80,7,164,9,131,135,208,125,8,18,127,29,56,65,255,
    250,139,149,21,143,120,197,181,114,197,167,188,226,49,116,31,
    131,196,223,167,122,69,3,118,58,215,17,51,193,191,241,175,
    35,144,82,115,216,28,202,52,11,146,216,9,226,94,18,24,
    52,222,160,134,16,230,81,51,147,67,237,37,65,237,159,192,
    56,243,141,28,106,199,128,140,5,233,18,26,112,204,196,177,
    1,163,14,28,9,24,212,192,55,225,8,183,169,147,0,125,
    1,39,6,252,206,164,9,199,216,214,16,28,31,65,77,105,
    156,13,24,28,154,211,12,28,215,225,168,14,59,111,143,12,
    234,216,111,66,250,15,248,118,133,153,94,97,166,6,28,97,
    91,131,147,26,28,55,224,13,78,194,174,65,147,212,23,111,
    143,80,83,236,217,233,212,80,218,237,138,186,164,138,31,164,
    177,27,73,181,140,180,51,116,83,55,114,182,124,249,50,137,
    85,154,132,161,76,59,173,98,102,146,173,15,93,181,103,243,
    82,147,108,18,13,21,179,76,98,169,102,145,232,5,177,239,
    68,137,127,16,74,117,133,248,57,189,32,148,142,195,131,91,
    209,48,73,213,47,210,52,73,109,50,43,119,134,137,91,174,
    32,163,122,97,146,201,14,237,198,219,216,196,94,209,236,222,
    144,57,146,0,44,46,45,246,101,230,165,193,80,161,183,52,
    71,154,77,220,58,228,39,110,50,27,155,141,131,12,125,186,
    225,134,129,27,111,100,65,116,16,186,42,193,142,161,223,151,
    209,211,141,221,131,32,244,55,94,216,175,54,134,35,181,151,
    196,27,216,23,196,74,162,93,194,141,9,22,89,199,105,215,
    136,247,187,160,239,4,172,149,179,39,195,161,76,219,212,123,
    135,246,21,11,98,78,52,132,41,58,162,141,84,29,31,83,
    172,24,179,98,59,32,189,60,210,149,96,101,22,64,250,59,
    176,203,208,227,251,6,164,43,4,147,1,254,4,249,21,193,
    178,67,99,6,143,253,154,12,162,123,7,38,57,95,119,30,
    49,180,16,99,56,243,25,121,59,6,198,71,29,6,13,208,
    184,65,184,105,32,165,35,106,113,58,177,49,144,121,13,178,
    191,157,229,16,47,0,26,28,83,17,118,221,192,173,254,200,
    80,220,233,144,224,219,12,7,181,23,100,201,187,152,141,78,
    52,7,207,14,218,228,245,232,171,221,129,244,84,182,138,29,
    95,39,7,150,231,198,113,162,44,215,247,45,87,169,52,216,
    61,80,50,179,84,98,173,101,157,38,121,121,177,64,84,201,
    111,52,44,16,68,222,70,4,233,23,63,240,20,190,44,241,
    11,219,63,147,10,209,176,151,248,25,246,19,139,190,84,54,
    9,169,174,98,243,162,216,142,97,215,105,20,32,201,100,216,
    83,45,198,155,155,101,14,111,71,253,12,45,90,125,232,134,
    7,82,209,252,76,185,10,119,37,82,111,116,241,224,186,69,
    234,21,218,145,197,156,56,137,253,17,10,23,120,107,180,239,
    45,134,216,28,16,200,174,35,192,102,176,109,64,27,1,183,
    96,120,164,71,45,135,23,67,235,6,105,13,236,110,145,103,
    10,132,217,9,230,147,142,193,9,129,21,226,112,179,136,162,
    197,54,161,216,190,75,205,10,53,247,10,157,47,84,241,246,
    184,226,79,104,51,131,181,245,204,92,175,50,100,182,207,132,
    204,237,211,144,193,164,183,67,208,55,40,64,78,161,111,146,
    230,233,243,28,231,20,84,232,106,28,174,160,155,237,97,47,
    144,158,141,2,152,54,161,173,10,185,126,5,114,54,185,130,
    241,102,223,158,102,187,213,75,182,93,95,219,238,41,109,54,
    151,35,165,205,8,105,9,143,220,108,228,150,100,43,110,34,
    49,186,73,86,172,218,239,38,158,93,111,226,54,31,66,124,
    144,113,57,162,19,132,54,171,38,106,132,169,158,9,55,242,
    195,37,163,120,30,166,201,55,35,43,233,89,10,10,25,158,
    173,101,235,107,217,151,24,241,214,115,206,33,58,230,117,84,
    167,114,152,98,244,54,249,69,71,164,195,209,233,228,71,3,
    218,153,14,106,118,15,91,151,19,80,166,82,202,59,23,111,
    218,86,105,90,146,244,75,218,169,197,118,53,225,38,62,45,
    193,226,56,9,103,61,174,17,120,20,159,159,147,133,73,73,
    9,84,133,218,59,90,88,214,131,52,178,63,57,131,141,139,
    212,194,126,132,108,55,139,120,106,64,137,4,122,76,146,147,
    32,254,103,224,210,73,192,159,128,188,142,206,205,131,130,195,
    143,30,114,222,18,77,255,61,112,66,153,112,98,25,58,184,
    140,60,229,96,236,101,95,240,84,125,128,253,10,254,82,201,
    70,39,38,8,58,108,204,188,56,170,30,54,181,50,28,25,
    46,31,116,160,212,206,198,45,121,102,207,205,104,154,142,80,
    179,140,208,211,196,86,86,52,152,118,46,20,73,87,244,30,
    14,137,179,117,138,35,202,228,119,197,146,81,65,199,99,106,
    62,43,129,33,138,190,139,146,108,117,60,245,86,206,28,71,
    167,187,95,210,246,53,22,120,190,193,249,230,12,151,18,248,
    245,2,248,79,74,224,75,78,194,239,185,86,166,214,32,103,
    159,24,2,47,90,88,98,208,29,167,6,178,14,221,6,133,
    8,215,129,34,143,32,81,228,41,218,239,76,134,103,155,108,
    107,107,149,254,214,174,164,230,155,139,207,11,228,205,103,161,
    27,237,250,238,243,62,237,67,155,121,69,76,25,133,228,11,
    85,201,41,30,196,52,225,249,245,7,133,6,135,23,159,19,
    126,136,108,75,201,57,2,252,196,227,68,240,155,61,105,69,
    50,218,197,29,247,130,161,213,11,221,62,251,196,204,53,251,
    170,208,76,177,83,199,207,208,140,178,205,118,98,121,73,140,
    105,250,192,67,65,45,95,226,253,64,250,214,103,22,231,120,
    43,200,44,119,23,71,93,79,105,124,159,141,79,46,200,220,
    180,159,113,237,181,255,142,200,203,241,169,131,119,191,0,235,
    204,189,194,50,250,66,82,38,108,46,45,117,176,224,81,135,
    117,191,26,233,36,245,57,53,15,169,89,131,75,203,235,27,
    200,182,71,252,201,76,13,204,35,77,193,213,202,153,137,175,
    105,109,118,62,68,255,250,33,33,170,191,130,228,129,218,160,
    153,114,134,46,158,212,54,41,189,119,91,69,231,44,183,115,
    220,217,46,58,175,114,59,207,157,11,197,215,151,69,238,188,
    6,221,37,186,246,83,207,50,5,255,204,255,26,252,28,63,
    151,19,57,241,255,53,230,237,39,151,47,184,253,35,200,15,
    254,105,241,46,170,90,181,117,188,15,68,81,64,87,85,226,
    27,248,157,201,192,115,188,84,186,74,106,7,221,185,12,61,
    57,105,232,93,135,165,155,10,101,202,43,196,23,165,66,39,
    92,239,140,150,43,21,46,123,77,188,193,226,4,171,224,35,
    214,217,49,116,33,124,138,192,90,169,250,77,50,172,124,231,
    76,80,95,23,187,36,145,59,28,202,216,63,45,100,121,228,
    226,157,254,185,214,179,172,55,176,106,93,198,231,124,160,145,
    58,21,237,216,95,245,50,180,46,197,115,140,208,81,225,51,
    254,66,119,154,122,109,242,152,78,182,101,158,181,127,90,250,
    224,193,52,248,169,52,116,146,94,143,106,47,188,30,125,208,
    60,124,248,43,83,165,79,221,155,178,206,15,178,253,140,57,
    255,231,25,196,131,204,201,111,202,154,50,55,72,28,12,194,
    158,22,245,191,78,34,158,116,106,21,29,218,217,228,42,95,
    134,82,201,73,128,84,100,193,252,58,235,75,60,131,147,17,
    94,185,248,22,131,239,161,227,92,210,217,245,19,100,27,17,
    127,250,158,70,103,87,3,79,175,235,252,223,172,53,5,23,
    3,99,223,96,181,80,84,25,235,138,125,196,178,129,61,95,
    130,128,191,19,22,231,50,71,56,221,44,183,221,72,127,5,
    226,143,28,246,125,106,30,20,56,226,216,212,247,55,190,39,
    233,187,40,70,51,87,42,92,152,216,235,133,89,163,167,235,
    133,94,235,168,209,38,250,210,57,148,84,226,240,151,202,232,
    169,186,61,54,171,212,158,230,170,27,99,163,50,62,224,193,
    173,77,117,119,226,66,90,181,21,185,136,134,201,227,59,65,
    164,191,184,169,197,177,113,63,117,145,190,62,214,139,110,12,
    208,139,223,78,227,247,218,11,54,229,97,224,201,115,234,230,
    227,232,248,94,146,70,12,246,9,122,162,135,115,55,243,167,
    172,9,2,143,50,37,163,115,187,179,33,94,201,40,73,71,
    175,18,95,170,149,177,241,23,190,159,218,110,220,151,133,185,
    239,143,79,200,203,73,205,163,152,101,77,148,225,236,220,41,
    150,192,193,220,178,171,19,199,95,134,137,183,47,253,124,206,
    100,115,240,156,205,36,34,79,76,241,111,228,230,246,158,226,
    143,32,201,199,57,206,243,65,69,136,31,119,24,225,182,124,
    227,210,240,252,145,204,97,159,202,126,128,78,72,153,75,185,
    34,63,174,40,44,167,38,158,234,234,203,73,19,250,162,165,
    63,5,61,167,148,204,223,30,232,227,103,115,190,41,26,6,
    125,91,55,69,75,180,69,77,204,181,155,102,179,209,172,155,
    152,74,168,103,73,180,204,102,107,78,124,216,255,42,38,157,
    150,177,218,110,138,239,0,161,5,148,19,
};

EmbeddedPython embedded_m5_internal_param_IdeController(
    "m5/internal/param_IdeController.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_IdeController.py",
    "m5.internal.param_IdeController",
    data_m5_internal_param_IdeController,
    2347,
    7254);

} // anonymous namespace
