#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseCPU[] = {
    120,156,197,26,219,118,219,198,113,0,82,148,72,73,150,100,
    73,190,219,98,226,40,102,28,91,114,156,56,73,19,215,141,
    47,185,56,181,101,133,116,98,71,73,131,66,196,74,130,68,
    2,12,176,180,205,28,249,165,202,73,251,208,115,218,183,190,
    244,173,167,15,253,143,254,87,59,51,139,5,151,55,89,141,
    67,213,22,231,12,102,7,179,59,215,157,5,80,133,228,223,
    8,254,62,42,2,196,95,217,0,30,254,89,80,3,168,91,
    176,102,129,37,44,240,102,97,103,4,162,119,192,27,129,31,
    1,214,108,16,54,236,33,146,129,111,108,8,38,248,158,28,
    212,50,76,177,160,85,0,145,133,181,17,120,20,204,64,86,
    228,96,167,0,209,239,193,178,172,192,130,199,222,40,120,99,
    240,35,74,71,36,207,2,199,192,43,48,146,7,111,156,145,
    2,180,166,65,140,195,26,10,31,133,181,73,20,117,17,69,
    29,97,81,255,38,81,30,142,204,129,55,73,236,184,150,175,
    137,51,75,156,60,199,17,150,50,165,87,54,13,107,51,26,
    63,106,224,179,6,62,103,224,243,6,126,204,192,143,27,248,
    9,3,63,105,224,167,12,252,180,129,159,49,240,179,6,126,
    206,192,23,12,188,104,224,175,24,248,171,6,126,222,192,95,
    51,240,69,3,127,221,192,47,24,120,137,241,41,16,51,176,
    253,6,108,95,132,237,55,97,3,157,61,157,90,244,18,136,
    12,108,95,134,181,203,32,240,239,18,236,97,60,120,51,198,
    29,75,124,199,209,244,142,101,190,227,10,172,93,1,129,127,
    203,234,142,28,84,74,243,24,99,254,127,240,95,201,66,76,
    78,32,120,34,162,216,15,3,199,15,54,66,223,166,241,28,
    1,138,200,42,129,209,36,52,111,83,104,254,11,56,46,61,
    59,9,205,231,128,130,45,210,165,102,195,115,70,158,219,208,
    42,193,174,5,219,89,240,50,176,139,211,140,208,2,54,45,
    216,179,225,219,12,49,60,71,152,197,96,58,7,89,169,226,
    114,155,131,73,73,26,133,231,35,176,59,2,149,199,187,54,
    17,118,242,16,253,19,126,56,195,66,199,88,168,13,187,8,
    179,176,151,133,231,57,120,132,76,72,218,206,147,250,214,227,
    93,212,20,41,149,82,22,87,187,98,168,75,170,120,126,20,
    184,117,33,143,32,238,52,220,200,173,59,183,220,88,220,94,
    253,178,84,208,60,97,188,212,112,229,86,153,111,202,144,53,
    234,13,201,194,194,64,200,113,68,54,252,192,115,234,161,215,
    172,9,57,70,146,156,13,191,38,28,135,7,239,214,27,97,
    36,63,142,162,48,42,147,65,153,88,11,221,244,14,50,103,
    181,22,198,162,68,179,241,52,101,18,47,137,123,163,193,18,
    105,1,188,80,186,217,19,113,53,242,27,18,253,164,36,18,
    55,73,43,145,135,24,196,247,16,44,55,99,244,230,178,91,
    243,221,96,57,246,235,205,154,43,67,36,52,188,77,81,191,
    182,188,222,244,107,222,242,205,242,253,229,70,75,110,133,193,
    50,210,252,64,10,180,72,109,185,195,22,75,200,112,148,164,
    62,245,55,29,159,245,113,182,68,173,33,162,73,162,158,162,
    25,173,105,107,194,202,89,25,171,100,77,34,54,130,191,140,
    117,198,30,183,86,124,210,168,74,90,82,40,101,116,240,252,
    3,216,77,232,229,29,27,162,51,20,26,219,248,103,145,47,
    49,64,42,52,102,243,216,23,100,10,69,221,206,144,195,21,
    113,151,195,9,227,10,57,175,147,135,3,224,152,24,129,237,
    28,168,88,193,16,83,193,19,181,8,34,59,137,177,81,120,
    22,226,191,116,74,8,166,1,77,141,229,10,73,199,112,170,
    63,112,248,85,74,180,240,21,14,4,185,229,199,225,211,128,
    205,77,56,39,76,5,109,178,218,122,176,190,45,170,50,94,
    64,194,215,97,179,88,117,131,32,148,69,215,243,138,174,148,
    145,191,222,148,34,46,202,176,184,24,151,242,228,223,25,29,
    75,169,188,86,67,199,14,249,25,99,71,93,120,126,85,226,
    197,44,95,176,253,99,33,49,14,182,66,47,70,58,137,216,
    20,178,76,139,228,32,190,169,167,227,128,43,229,116,120,196,
    162,182,33,11,28,105,110,28,59,60,29,209,57,168,232,238,
    39,110,173,41,36,241,199,210,149,56,43,161,106,162,97,134,
    213,9,82,76,235,69,182,114,130,48,240,90,184,44,191,186,
    72,51,158,224,224,154,0,10,175,121,12,173,81,132,57,152,
    196,80,155,182,171,164,65,54,9,44,14,170,99,164,47,176,
    163,173,164,46,96,128,237,97,245,40,217,156,254,172,10,167,
    88,145,48,186,185,76,241,91,62,77,224,12,129,179,90,219,
    33,169,60,217,173,242,85,154,198,102,61,171,153,68,163,52,
    77,86,58,210,228,100,59,77,176,184,85,40,220,109,74,138,
    118,184,103,72,231,232,70,18,219,148,72,232,94,28,54,34,
    154,45,81,158,38,13,115,58,24,203,20,97,102,152,109,26,
    97,86,38,39,112,140,149,79,14,178,218,194,161,89,109,83,
    89,237,26,77,51,145,68,199,36,71,69,193,170,146,107,237,
    196,134,108,191,59,136,180,142,147,253,76,203,29,199,221,233,
    81,48,201,219,12,111,85,220,160,168,114,160,12,170,144,44,
    197,209,70,6,142,37,219,71,76,217,219,136,194,103,173,98,
    184,81,148,160,215,112,125,49,94,90,140,63,196,252,46,222,
    224,138,161,50,92,229,112,36,26,17,230,106,158,47,84,254,
    57,156,139,78,178,5,160,133,105,43,102,199,176,93,185,220,
    196,50,162,42,51,76,163,22,82,163,210,26,63,164,57,10,
    108,209,12,28,199,95,193,226,133,56,33,87,55,222,255,121,
    20,127,183,200,182,164,158,0,234,72,203,21,181,76,214,128,
    116,41,95,232,136,135,225,172,191,124,17,5,222,209,217,147,
    131,212,251,244,203,208,10,41,160,255,8,220,16,89,240,19,
    144,167,209,161,73,10,112,178,209,143,28,54,75,236,223,1,
    23,142,62,123,146,173,82,201,78,74,11,102,90,252,30,179,
    170,45,234,115,248,147,81,117,246,50,96,209,118,146,73,90,
    30,115,59,201,166,201,199,33,114,160,45,35,219,153,165,228,
    147,45,55,38,54,149,143,153,52,31,219,5,44,237,86,176,
    200,12,41,122,198,148,116,135,22,114,183,29,59,84,171,79,
    91,179,182,17,17,151,8,92,78,131,193,210,180,95,126,77,
    11,221,197,213,216,79,28,85,208,62,163,137,179,188,212,169,
    28,27,51,185,63,13,240,17,29,224,223,167,1,46,184,192,
    254,200,253,46,65,155,92,187,103,91,120,184,194,150,129,206,
    53,89,16,35,176,150,211,231,177,81,234,231,147,115,212,168,
    62,71,141,37,231,168,228,136,53,174,143,88,19,250,136,53,
    73,153,68,5,133,67,89,255,184,144,81,1,236,40,254,108,
    198,21,101,224,52,56,148,223,9,60,27,102,225,32,215,95,
    175,185,245,117,207,189,177,67,51,208,52,85,157,122,182,94,
    243,180,185,102,74,27,107,208,178,249,242,138,94,251,147,97,
    22,141,183,80,96,186,102,78,17,47,172,114,165,120,184,37,
    138,117,81,95,199,185,182,252,70,113,163,230,110,178,31,50,
    137,78,15,180,78,146,227,160,123,75,141,169,28,173,132,197,
    106,24,96,237,110,86,113,137,69,79,224,225,64,120,197,203,
    69,46,252,69,63,46,186,235,56,234,86,165,74,131,206,4,
    230,158,204,141,54,99,110,191,118,158,18,58,108,63,58,120,
    216,243,177,201,172,165,126,212,113,151,250,113,82,233,188,109,
    233,158,194,116,34,31,65,102,218,105,68,233,39,171,91,15,
    154,137,134,167,96,184,157,1,237,171,233,148,65,135,18,118,
    226,188,79,13,199,41,37,48,24,255,220,79,143,57,67,15,
    233,238,136,7,120,32,254,36,10,235,237,189,185,252,206,144,
    245,161,244,55,167,14,95,198,47,179,61,126,17,222,161,121,
    102,60,245,12,79,218,248,165,2,108,163,214,140,183,30,222,
    187,21,31,94,128,165,83,126,255,50,74,28,53,163,43,148,
    110,237,46,86,138,67,210,130,159,103,164,115,70,47,153,39,
    39,204,184,34,255,98,27,75,130,43,50,108,28,98,174,208,
    90,187,167,143,135,160,218,189,208,245,254,143,170,233,233,165,
    86,173,68,103,253,118,163,173,158,95,113,219,131,135,147,134,
    136,100,75,181,152,239,18,120,131,0,29,166,203,239,19,248,
    128,192,117,2,55,8,124,68,224,22,129,59,112,8,45,251,
    50,112,63,0,49,85,218,28,54,138,121,60,202,231,141,255,
    124,210,75,110,88,165,187,227,222,190,236,175,246,1,250,50,
    245,184,27,25,68,14,182,71,25,142,81,227,142,141,88,66,
    44,48,28,103,226,132,38,78,50,60,194,196,41,77,156,102,
    56,195,196,163,154,56,203,112,142,137,243,154,120,140,225,113,
    38,158,208,196,147,12,79,49,241,180,38,158,97,120,150,137,
    231,52,113,129,97,145,137,175,104,226,171,12,207,51,241,53,
    77,92,100,248,58,19,47,104,98,137,225,27,76,188,168,137,
    111,50,188,196,196,203,154,184,196,112,153,137,87,52,241,45,
    134,87,153,248,182,38,190,195,240,26,19,223,213,196,247,24,
    190,207,196,95,105,226,7,12,63,100,226,117,77,252,53,195,
    27,76,252,141,38,126,196,240,38,19,111,105,226,109,134,119,
    152,248,177,38,126,194,240,83,38,126,166,137,119,25,126,206,
    196,223,106,226,61,134,247,153,184,162,137,15,24,174,50,241,
    11,77,44,51,172,48,241,161,38,126,201,240,43,38,62,210,
    196,199,12,191,102,226,154,238,244,191,97,226,183,176,246,59,
    221,236,127,71,109,123,14,94,178,109,231,254,119,216,157,111,
    43,173,142,191,68,183,94,190,122,152,75,46,191,13,201,153,
    126,80,167,174,171,61,235,243,94,90,237,247,248,228,223,154,
    51,158,239,176,122,214,35,60,166,91,150,181,203,27,130,99,
    171,199,64,109,39,101,193,108,63,2,241,212,233,40,76,234,
    33,15,249,221,109,52,68,224,25,187,195,204,144,237,66,133,
    253,111,208,62,115,91,25,152,195,95,111,252,145,10,134,70,
    28,103,35,105,196,13,185,233,96,247,253,61,221,180,156,142,
    77,171,252,49,129,233,206,29,138,141,125,178,123,7,112,112,
    31,172,238,136,136,158,253,237,51,138,71,126,62,207,39,215,
    230,78,174,57,27,77,199,247,88,204,192,65,146,194,185,204,
    151,114,177,135,207,11,213,140,141,16,21,199,195,19,182,83,
    44,241,96,156,36,158,66,184,207,152,60,211,79,194,247,77,
    95,196,85,193,83,236,203,64,146,11,74,114,66,234,191,36,
    126,192,31,75,191,26,191,104,241,61,156,198,226,187,199,228,
    217,94,9,200,179,41,174,58,245,122,147,231,216,159,131,100,
    243,235,173,54,77,206,247,222,33,215,89,86,255,17,146,193,
    39,122,185,46,139,61,28,27,205,160,74,111,205,28,58,127,
    43,131,190,144,137,36,82,119,213,73,150,175,191,240,62,233,
    70,146,167,56,32,43,77,52,215,51,145,26,236,227,119,206,
    185,168,217,72,220,183,47,131,14,140,54,169,143,249,252,216,
    29,96,88,26,209,134,69,188,143,27,253,23,58,218,239,227,
    104,127,95,71,251,3,29,237,27,142,70,92,94,232,225,168,
    187,207,146,128,117,107,53,71,110,69,194,245,148,157,14,202,
    27,39,51,247,29,237,227,82,131,47,104,37,124,3,188,223,
    151,85,123,191,223,224,128,69,211,59,228,131,42,216,203,107,
    42,216,51,58,96,213,9,223,65,20,236,97,53,21,236,30,
    236,19,189,65,179,254,208,208,106,95,6,29,222,109,82,159,
    61,2,207,69,252,82,190,255,14,162,71,245,14,146,92,203,
    243,253,56,55,35,17,39,249,245,196,173,177,196,131,240,145,
    236,25,37,187,115,164,143,9,99,122,203,78,251,130,170,13,
    237,50,125,64,86,109,237,126,131,242,116,175,140,16,247,75,
    169,119,198,253,198,73,48,63,112,211,20,121,174,151,59,121,
    228,227,132,77,85,1,95,192,66,50,233,161,151,73,236,179,
    61,199,173,88,138,250,128,189,59,25,212,123,183,186,236,195,
    199,69,53,26,32,36,25,212,66,212,165,60,213,195,247,52,
    140,118,248,11,14,18,179,207,48,9,162,39,172,154,32,223,
    238,13,19,250,150,194,175,186,168,183,194,171,97,16,8,181,
    1,84,195,102,160,12,248,115,238,163,201,95,161,112,123,17,
    231,32,233,222,207,92,213,190,247,117,172,106,63,78,238,112,
    57,134,61,129,137,40,58,59,111,126,58,146,188,169,246,68,
    44,163,176,229,56,234,101,37,94,215,28,103,232,207,49,62,
    65,129,207,72,50,61,58,161,231,24,57,107,254,103,254,207,
    103,243,22,191,2,232,250,224,74,45,159,90,104,245,34,175,
    21,151,137,82,158,74,27,229,49,85,78,212,3,31,106,167,
    57,55,87,220,186,250,252,131,191,113,40,147,185,203,231,117,
    155,205,145,173,94,232,242,235,83,245,90,26,143,54,252,126,
    130,95,71,148,151,136,78,73,91,191,182,164,45,176,164,44,
    112,51,170,87,120,215,190,127,255,75,254,64,169,126,141,19,
    169,47,231,195,123,183,184,193,234,63,232,174,215,196,35,183,
    166,27,245,94,166,138,74,226,211,93,131,2,235,188,115,95,
    212,195,168,117,63,244,4,239,13,230,248,77,207,139,202,110,
    176,41,156,39,130,222,193,112,188,117,48,36,47,96,148,12,
    205,53,96,161,29,188,61,107,81,76,56,168,62,0,226,215,
    143,189,227,183,107,84,45,189,132,231,236,96,158,59,97,221,
    69,122,255,89,42,190,158,101,166,107,220,139,232,174,249,46,
    42,6,187,143,177,254,131,24,176,42,244,193,221,118,67,120,
    178,219,72,56,90,185,169,141,51,208,197,200,51,120,112,21,
    99,228,84,223,193,85,76,189,141,48,170,15,48,6,174,43,
    186,29,34,8,107,61,2,110,83,117,192,42,157,172,172,219,
    251,90,64,44,31,182,203,183,201,176,26,133,85,218,125,147,
    251,187,245,78,214,167,152,56,193,244,144,164,188,235,118,56,
    101,79,122,197,15,55,59,94,33,81,129,138,196,38,118,186,
    184,146,41,147,55,121,130,64,101,164,207,22,98,222,55,236,
    82,166,94,230,170,47,81,110,240,43,155,13,4,244,189,85,
    126,42,111,229,108,250,144,47,99,21,172,73,43,107,77,76,
    230,51,249,92,126,36,131,229,142,40,179,86,33,147,47,76,
    88,255,219,255,133,241,188,85,176,23,22,243,214,127,1,172,
    227,55,107,
};

EmbeddedPython embedded_m5_internal_param_BaseCPU(
    "m5/internal/param_BaseCPU.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_BaseCPU.py",
    "m5.internal.param_BaseCPU",
    data_m5_internal_param_BaseCPU,
    3235,
    11503);

} // anonymous namespace
