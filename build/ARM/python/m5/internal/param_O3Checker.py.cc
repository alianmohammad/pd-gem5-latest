#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_O3Checker[] = {
    120,156,189,88,109,83,27,201,17,238,217,149,4,18,200,128,
    177,241,27,54,114,46,228,116,206,25,157,185,56,119,149,115,
    185,98,227,84,197,169,128,201,202,87,248,72,42,155,69,59,
    136,21,251,162,218,29,193,233,10,190,4,87,146,111,249,17,
    169,124,200,255,200,255,186,116,247,236,46,139,64,85,151,74,
    100,208,78,245,206,75,79,191,60,221,211,59,29,72,255,202,
    248,252,178,1,144,132,6,128,139,63,1,62,64,32,96,87,
    128,144,2,220,69,56,44,67,252,51,112,203,240,30,96,215,
    0,105,192,25,18,38,252,222,128,112,150,215,84,192,55,185,
    71,192,176,6,178,4,187,101,216,9,23,160,36,43,112,88,
    131,248,79,32,132,8,5,188,115,167,192,157,134,247,200,29,
    137,42,51,156,6,183,198,68,21,220,25,38,106,48,156,7,
    57,3,187,200,124,10,118,235,200,234,17,178,186,198,172,254,
    77,172,92,28,185,1,110,157,166,163,44,223,208,204,18,205,
    228,61,174,49,151,185,76,178,121,216,93,200,232,235,5,122,
    177,64,223,40,208,55,11,244,82,129,190,85,160,111,23,232,
    59,5,250,110,129,190,87,160,151,11,244,253,2,253,160,64,
    175,20,232,70,129,126,88,160,127,84,160,63,42,208,63,46,
    208,171,5,250,39,5,250,227,2,221,44,208,159,20,232,71,
    76,207,129,92,128,222,79,161,247,41,244,30,195,62,130,96,
    62,183,244,26,72,19,122,45,216,109,129,196,223,26,156,33,
    78,220,133,194,138,207,120,197,245,124,197,19,94,177,14,187,
    235,32,241,247,68,175,168,64,187,121,19,177,231,125,143,127,
    77,129,148,154,197,230,72,198,137,23,133,182,23,238,71,158,
    65,227,21,106,8,169,29,106,166,82,200,110,16,100,255,5,
    140,87,215,72,33,123,10,200,88,144,46,190,1,167,76,156,
    26,48,108,194,137,128,94,9,92,19,78,112,155,50,9,208,
    21,112,102,192,31,76,154,112,138,109,9,65,246,0,74,74,
    227,181,199,32,211,156,166,224,180,12,39,101,104,191,59,49,
    168,227,176,10,241,63,225,187,101,102,58,205,76,13,56,193,
    182,4,103,37,56,173,192,14,78,194,174,94,149,212,23,239,
    78,80,83,236,105,55,75,40,237,86,65,93,82,197,245,226,
    208,9,164,154,71,218,238,59,177,19,216,111,62,223,56,144,
    157,67,25,55,107,217,172,40,89,235,59,234,192,226,101,38,
    217,35,232,43,102,23,133,82,205,32,177,239,133,174,29,68,
    238,192,151,106,154,120,217,251,158,47,109,155,7,95,7,253,
    40,86,191,138,227,40,182,200,164,220,233,71,78,190,130,12,
    218,241,163,68,54,105,55,222,198,34,246,138,102,239,247,153,
    35,9,192,162,210,98,87,38,157,216,235,43,244,148,230,72,
    179,137,91,147,124,196,77,178,133,77,107,144,160,63,91,142,
    239,57,97,43,241,130,129,239,168,8,59,250,110,87,6,79,
    91,123,3,207,119,91,47,172,205,86,127,168,14,162,176,133,
    125,94,168,36,218,196,111,141,88,99,13,167,92,39,190,199,
    94,215,246,88,35,251,64,250,125,25,215,169,247,46,237,41,
    230,197,172,168,8,83,52,69,29,169,50,62,166,88,54,102,
    196,150,71,58,117,72,79,130,147,153,1,232,31,192,174,66,
    79,31,26,16,47,19,60,122,248,19,228,79,4,73,155,198,
    12,30,251,29,25,67,247,246,76,114,186,238,60,97,72,33,
    182,112,230,51,242,114,8,140,139,50,244,42,160,241,130,48,
    211,0,138,135,212,226,116,98,99,32,243,18,36,127,191,200,
    33,156,7,52,54,166,50,236,90,194,173,254,204,16,108,55,
    73,240,45,134,130,58,240,146,232,56,100,131,19,205,65,211,
    70,155,108,15,223,236,245,100,71,37,43,216,241,77,52,104,
    116,156,48,140,84,195,113,221,134,163,84,236,237,13,148,76,
    26,42,106,172,38,205,42,121,120,33,67,83,206,111,216,207,
    208,67,158,70,244,232,23,215,235,40,124,89,228,23,182,127,
    34,21,34,225,32,114,19,236,39,22,93,169,44,18,82,93,
    195,230,69,182,29,67,174,89,201,0,146,72,127,95,213,24,
    107,78,146,216,188,29,245,51,172,104,245,145,227,15,164,162,
    249,137,114,20,238,74,164,222,104,178,192,186,77,170,101,154,
    145,181,236,48,10,221,33,10,230,117,86,105,207,219,12,175,
    89,32,128,221,68,112,77,97,91,129,58,130,109,222,232,144,
    14,165,20,90,12,171,37,210,24,216,213,34,205,14,8,177,
    51,204,33,77,131,147,0,43,195,97,214,32,138,22,91,132,
    96,235,30,53,203,212,220,207,244,157,152,210,245,81,165,215,
    105,35,131,53,237,152,169,78,121,168,108,93,8,149,59,231,
    161,130,73,174,77,144,55,40,48,206,33,111,146,214,241,243,
    20,223,20,76,232,98,28,46,160,154,109,97,81,234,99,140,
    48,32,45,66,89,17,106,221,2,212,44,114,3,227,204,186,
    51,206,110,43,31,208,110,93,109,183,167,180,209,108,138,144,
    58,35,163,38,58,228,94,35,181,34,91,240,21,18,195,91,
    100,193,162,237,110,225,57,181,19,214,249,192,225,67,139,75,
    24,157,20,180,73,53,81,34,44,237,155,176,148,30,36,9,
    197,112,63,142,190,29,54,162,253,134,130,76,134,103,171,201,
    218,106,242,21,70,121,227,57,231,13,29,231,58,146,99,217,
    143,49,98,171,252,162,163,208,230,136,180,211,163,0,109,76,
    135,50,187,134,45,203,73,39,81,49,229,154,201,154,181,150,
    155,149,164,252,138,118,169,177,77,77,184,133,79,77,176,40,
    118,196,89,142,107,1,30,197,231,37,89,151,20,148,64,85,
    171,213,214,130,178,14,164,141,245,241,5,76,76,74,3,235,
    17,178,124,149,197,80,5,114,4,208,99,146,140,4,235,191,
    2,151,71,2,254,2,228,109,116,106,26,8,28,114,244,144,
    211,22,105,250,31,129,19,200,21,167,147,161,3,202,72,83,
    12,198,91,242,5,79,213,135,213,111,224,111,133,236,115,102,
    130,160,131,197,76,11,160,226,193,82,202,67,144,97,242,131,
    14,143,210,197,88,37,175,28,56,9,77,211,81,105,230,81,
    121,158,200,242,202,5,83,205,196,16,52,173,249,219,36,202,
    235,115,252,80,214,190,39,22,141,2,42,62,165,230,113,14,
    8,145,245,77,66,170,149,209,52,91,56,91,108,157,218,126,
    77,91,151,88,216,185,10,71,103,206,33,7,122,57,3,250,
    122,14,116,201,201,246,61,215,192,212,26,228,224,51,67,224,
    135,24,150,16,244,13,84,2,89,134,221,10,133,4,215,120,
    34,141,24,145,229,36,202,101,23,50,57,219,98,75,91,41,
    247,177,118,31,53,223,78,54,7,144,7,159,249,78,176,231,
    58,207,3,218,131,54,234,100,49,100,100,82,207,23,165,38,
    252,139,113,130,243,235,103,153,244,71,147,141,255,39,200,50,
    151,154,209,238,70,29,14,250,183,7,178,17,200,96,15,119,
    59,240,250,141,125,223,233,178,47,204,84,171,55,153,86,138,
    157,57,122,70,38,148,89,182,162,70,39,10,49,21,15,58,
    40,100,195,149,88,243,75,183,241,184,193,121,188,225,37,13,
    103,15,71,157,142,210,120,190,24,139,92,104,57,113,55,225,
    154,234,240,152,200,201,251,210,198,239,56,15,107,199,48,179,
    138,254,192,200,147,50,151,139,58,56,240,40,195,90,94,13,
    117,50,250,57,53,159,80,179,10,31,36,119,183,144,165,79,
    188,201,60,21,204,23,85,161,230,138,129,184,77,107,146,203,
    225,184,249,67,194,81,223,136,164,65,89,201,174,82,166,64,
    78,211,103,226,110,141,190,189,169,103,134,34,117,234,127,141,
    84,6,252,228,161,174,254,175,1,106,173,127,88,161,173,207,
    33,61,145,199,5,167,40,106,84,215,107,123,34,171,102,139,
    234,240,39,240,210,101,180,216,157,88,58,74,106,167,220,157,
    180,126,28,217,122,199,163,220,53,153,18,121,29,255,69,174,
    200,25,23,32,195,27,133,82,147,61,37,118,176,90,192,114,
    244,132,117,181,13,93,145,158,35,174,148,171,76,214,11,229,
    177,61,162,182,174,56,73,26,167,223,151,161,123,94,77,242,
    200,100,157,76,153,227,24,206,15,127,44,29,111,224,115,57,
    160,72,141,130,86,236,163,114,30,66,19,247,22,163,241,36,
    243,83,147,74,247,243,188,104,145,151,116,38,204,147,160,245,
    11,200,18,99,142,55,87,250,82,201,81,251,235,219,36,157,
    86,93,137,103,66,52,196,50,159,171,103,124,247,109,251,3,
    228,211,47,83,205,248,155,132,242,105,5,51,106,181,84,21,
    124,36,141,220,236,105,81,40,32,117,141,56,76,44,14,209,
    185,92,89,190,129,202,78,8,134,48,85,73,91,78,160,239,
    24,248,51,218,122,72,205,71,153,209,24,128,250,107,129,43,
    115,253,213,131,112,229,243,146,143,71,107,141,250,169,74,13,
    158,174,101,218,172,105,109,82,93,54,182,191,230,91,176,224,
    169,186,115,229,188,151,78,34,105,210,131,43,71,95,196,65,
    91,57,93,185,190,185,249,53,223,50,92,57,229,237,111,95,
    170,198,216,65,103,207,151,59,142,143,194,140,225,208,30,38,
    74,6,234,222,200,160,12,7,129,189,41,131,40,30,110,70,
    174,188,164,231,11,215,141,45,39,236,74,251,72,82,73,161,
    30,142,78,72,235,9,205,35,155,53,70,208,11,115,47,201,
    162,39,225,160,190,164,226,162,248,10,155,251,17,218,220,77,
    231,220,31,63,231,85,20,56,216,127,245,46,109,47,219,101,
    97,100,220,141,105,213,205,145,94,196,189,135,176,255,78,142,
    145,10,125,240,154,122,226,65,95,37,151,80,64,163,237,23,
    153,113,198,186,24,231,140,31,220,70,112,220,189,114,112,27,
    163,112,63,138,131,49,198,64,185,226,141,8,155,200,191,196,
    96,35,26,16,153,73,118,53,202,95,99,65,249,22,253,134,
    216,26,93,191,29,71,29,153,36,217,250,171,209,159,78,226,
    248,204,134,56,253,92,10,34,74,199,231,175,92,111,93,60,
    50,57,95,197,178,235,33,152,99,230,113,62,61,61,87,190,
    204,194,117,244,156,45,46,157,124,114,211,159,41,250,194,228,
    57,93,135,39,88,232,240,213,96,117,174,42,42,6,221,58,
    155,162,38,234,162,36,102,235,85,179,90,169,150,77,76,128,
    212,179,40,106,102,181,54,43,254,251,255,21,76,158,53,99,
    165,86,21,255,1,209,102,70,64,
};

EmbeddedPython embedded_m5_internal_param_O3Checker(
    "m5/internal/param_O3Checker.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_O3Checker.py",
    "m5.internal.param_O3Checker",
    data_m5_internal_param_O3Checker,
    2329,
    7100);

} // anonymous namespace