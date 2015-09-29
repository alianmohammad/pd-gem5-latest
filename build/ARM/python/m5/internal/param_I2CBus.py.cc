#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_I2CBus[] = {
    120,156,189,88,109,115,219,198,17,222,3,72,74,164,68,75,
    178,36,91,182,229,8,142,163,152,205,52,82,235,214,77,167,
    241,120,234,151,206,212,237,88,113,193,204,216,97,59,69,33,
    224,68,129,194,11,7,56,202,97,70,250,82,121,218,126,235,
    143,232,244,67,255,71,127,77,255,68,179,187,7,64,32,45,
    101,50,147,48,18,113,179,184,151,189,125,121,118,111,15,30,
    228,127,117,124,126,109,1,100,255,19,0,62,254,4,132,0,
    145,128,158,0,33,5,248,171,112,84,135,244,231,224,215,225,
    45,64,207,0,105,192,25,18,38,252,209,128,120,145,215,52,
    32,52,185,71,192,184,5,178,6,189,58,188,138,87,160,38,
    27,112,212,130,244,47,32,132,136,5,188,246,231,192,159,135,
    183,200,29,137,38,51,156,7,191,197,68,19,252,5,38,90,
    48,94,6,185,0,61,100,62,7,189,54,178,250,8,89,93,
    97,86,255,37,86,62,142,172,129,223,166,233,40,203,23,52,
    179,70,51,121,143,43,204,101,169,144,108,25,122,43,5,125,
    181,66,175,86,232,181,10,189,94,161,175,85,232,235,21,122,
    163,66,223,168,208,55,43,244,173,10,189,89,161,111,87,232,
    247,42,244,22,211,75,32,87,96,96,193,224,14,12,222,135,
    3,116,192,114,169,229,93,144,38,12,62,128,222,7,32,241,
    119,23,206,208,71,254,74,101,197,54,175,184,90,174,248,144,
    87,220,131,222,61,144,248,251,80,175,104,64,183,179,142,126,
    15,254,143,127,29,244,59,168,69,108,142,101,154,5,73,236,
    4,241,65,18,24,52,222,160,134,80,226,81,51,151,195,229,
    41,193,229,63,192,88,241,141,28,46,167,128,140,5,233,18,
    26,112,202,196,169,1,227,14,156,8,24,212,192,55,225,4,
    183,169,147,0,125,1,103,6,252,201,164,9,167,216,214,208,
    193,239,65,77,105,172,12,216,193,154,211,28,156,214,225,164,
    14,221,215,39,6,117,28,53,33,253,55,124,181,201,76,231,
    153,169,1,39,216,214,224,172,6,167,13,120,133,147,176,107,
    208,36,245,197,235,19,212,20,123,186,157,26,74,187,87,81,
    151,84,241,131,52,118,35,169,218,72,59,67,55,117,35,231,
    249,253,167,79,70,89,167,85,76,73,178,157,161,171,14,109,
    94,99,146,49,162,161,98,94,73,44,213,2,18,7,65,236,
    59,81,226,143,66,169,230,137,145,115,16,132,210,113,120,240,
    121,52,76,82,245,155,52,77,82,155,236,201,157,97,226,150,
    43,200,154,94,152,100,178,67,187,241,54,54,177,87,52,251,
    96,200,28,73,0,150,147,22,251,50,243,210,96,168,208,77,
    154,35,205,38,110,29,114,16,55,217,239,177,217,29,101,232,
    204,93,55,12,220,120,55,11,162,81,232,170,4,59,134,126,
    95,70,15,118,247,71,65,232,239,62,182,95,236,14,199,234,
    48,137,119,177,47,136,149,68,131,132,187,85,83,236,224,248,
    85,98,250,38,232,59,1,171,227,28,202,112,40,83,178,90,
    118,147,54,20,203,98,81,52,132,41,58,162,141,84,29,31,
    83,108,26,11,98,47,32,133,60,82,146,128,100,22,208,249,
    23,176,147,208,199,71,6,164,155,4,140,1,254,4,121,18,
    225,209,165,49,131,199,254,64,150,208,189,3,147,220,173,59,
    79,24,76,136,42,156,249,144,252,27,3,35,162,14,131,6,
    104,164,32,192,52,116,210,49,181,56,157,216,24,200,188,6,
    217,63,39,57,196,203,128,150,198,4,130,93,215,112,171,191,
    50,248,186,29,18,124,143,113,160,14,131,44,121,19,179,181,
    137,230,112,233,162,77,94,142,63,219,31,72,79,101,91,216,
    241,69,50,178,60,55,142,19,101,185,190,111,185,74,165,193,
    254,72,201,204,82,137,181,157,117,154,228,222,149,2,74,37,
    191,241,176,128,14,185,25,161,163,95,252,192,83,248,178,202,
    47,108,255,76,42,132,193,97,226,103,216,79,44,250,82,217,
    36,164,186,130,205,227,98,59,198,91,167,81,160,35,147,225,
    129,106,49,208,220,44,115,120,59,234,103,76,209,234,99,55,
    28,73,69,243,51,229,42,220,149,72,189,209,12,81,181,65,
    122,21,106,145,169,156,56,137,253,49,74,21,120,219,180,225,
    6,99,107,17,8,93,235,136,172,57,108,27,208,70,164,45,
    27,30,41,80,203,113,197,152,186,70,234,2,251,89,228,73,
    1,241,117,134,169,163,99,112,236,179,38,28,96,22,81,180,
    216,38,248,218,183,168,217,164,230,118,161,236,108,52,110,79,
    107,124,159,118,49,88,77,207,204,21,42,131,100,111,34,72,
    110,156,7,9,38,182,46,129,221,160,144,56,7,187,73,42,
    167,143,114,100,83,24,161,115,113,184,130,103,54,132,189,76,
    10,54,10,40,218,132,175,42,200,250,21,144,217,228,3,70,
    152,125,227,50,163,109,253,80,70,235,107,163,61,160,93,22,
    115,108,180,25,19,45,225,145,99,141,220,132,108,190,103,72,
    140,175,147,249,170,134,187,142,7,211,171,184,205,39,12,159,
    82,92,47,232,92,160,237,169,137,26,161,232,192,132,107,249,
    201,145,81,232,14,211,228,203,177,149,28,88,10,10,25,30,
    110,103,59,219,217,167,24,220,214,35,78,23,58,188,117,0,
    167,114,152,98,160,54,249,69,7,159,195,129,232,228,233,31,
    13,76,167,48,251,133,205,202,185,38,83,41,165,152,25,218,
    180,85,218,148,68,252,148,182,104,177,65,77,184,142,79,75,
    176,28,78,194,153,141,79,126,30,197,231,9,153,150,180,147,
    64,245,161,221,213,82,178,2,164,138,125,111,2,13,51,17,
    223,254,8,249,61,43,66,167,1,165,239,233,49,73,64,66,
    243,223,129,43,33,1,127,3,242,51,186,51,199,63,71,26,
    61,228,174,85,154,254,103,224,164,113,193,113,100,232,56,50,
    242,180,130,97,150,125,194,83,245,233,244,59,248,71,37,227,
    156,153,32,232,36,49,243,90,167,122,146,212,202,200,99,128,
    124,171,211,162,54,25,162,228,146,67,55,163,105,58,24,205,
    50,24,207,147,87,89,167,96,134,153,13,118,230,53,115,135,
    228,120,126,142,28,74,211,183,196,170,81,193,195,143,169,249,
    184,132,130,40,250,190,119,145,182,166,243,106,229,36,113,116,
    46,251,45,237,91,99,73,151,26,124,190,233,229,37,184,235,
    5,184,239,151,224,150,156,90,223,114,149,75,173,65,126,61,
    51,4,94,115,176,84,160,27,70,13,100,29,122,13,10,3,
    46,228,68,30,37,162,72,66,148,188,38,242,54,91,97,79,
    219,167,116,173,246,26,53,95,206,48,232,201,113,15,67,55,
    218,247,221,71,251,180,1,237,226,21,113,99,20,34,47,87,
    69,38,204,139,203,164,230,215,159,20,162,31,207,48,224,127,
    138,252,74,145,25,222,126,226,113,148,127,126,40,173,72,70,
    251,184,213,97,48,180,14,66,183,207,94,48,115,149,62,43,
    84,82,236,198,233,179,48,163,84,178,151,88,94,18,99,214,
    29,121,40,161,229,75,44,233,165,111,125,108,113,202,182,130,
    204,114,247,113,212,245,148,198,240,100,240,113,41,229,166,253,
    140,81,117,244,134,200,25,123,209,193,11,90,128,165,161,87,
    152,68,95,30,202,252,203,213,160,14,8,60,178,176,84,87,
    99,157,122,126,65,205,143,168,217,134,217,167,233,93,50,12,
    49,38,195,52,48,59,52,5,151,205,122,198,75,154,125,65,
    252,237,127,155,248,211,31,24,242,40,108,208,76,57,71,247,
    65,106,155,148,166,123,173,226,115,197,2,119,46,210,183,1,
    188,246,82,207,21,138,215,185,239,26,175,140,252,25,99,62,
    248,94,195,212,190,255,3,74,108,255,12,242,131,248,178,16,
    21,85,117,218,58,68,7,162,168,93,171,186,240,61,119,117,
    10,57,142,151,74,87,73,237,139,155,51,213,140,35,91,111,
    119,84,122,164,16,191,172,215,63,41,85,56,227,138,99,188,
    86,169,42,217,65,226,21,150,7,88,121,158,176,150,142,161,
    139,207,115,148,213,74,101,201,187,177,124,227,84,21,214,149,
    37,137,226,14,135,50,246,207,171,70,30,153,161,99,41,109,
    68,112,126,212,99,137,184,134,207,187,225,67,10,84,244,97,
    215,212,203,128,153,173,147,24,126,105,225,158,206,18,84,51,
    162,77,206,209,57,176,76,127,246,175,74,115,111,76,99,203,
    151,199,129,39,51,186,114,92,62,136,197,134,254,140,164,223,
    217,76,12,83,95,134,82,201,9,231,177,71,243,11,150,47,
    241,52,73,198,120,23,224,42,27,223,67,199,153,117,50,254,
    37,242,59,36,198,116,54,80,50,110,96,58,94,23,205,90,
    83,240,89,54,245,185,79,75,66,173,174,38,199,153,205,81,
    189,84,218,140,191,76,21,167,11,99,159,238,57,123,110,164,
    63,63,240,37,219,190,67,205,221,194,236,12,94,125,169,224,
    26,94,223,140,16,231,124,208,242,185,106,239,80,63,213,179,
    209,131,157,66,153,29,84,227,25,27,217,57,150,116,70,243,
    215,177,232,129,186,53,53,175,84,90,207,190,100,188,27,68,
    250,155,141,90,153,26,247,83,23,233,245,169,94,116,66,128,
    62,248,74,42,235,66,126,79,220,44,240,94,6,201,55,110,
    122,62,190,113,177,80,227,76,201,232,157,197,50,30,69,206,
    11,25,37,233,248,69,226,203,119,44,243,216,247,83,219,141,
    251,165,101,238,76,79,200,75,23,205,163,152,117,177,34,147,
    115,47,81,4,7,115,235,109,93,56,254,52,76,188,35,233,
    231,115,110,95,62,231,89,18,145,181,9,71,197,176,90,35,
    80,93,100,84,66,237,100,23,151,23,149,83,129,99,43,149,
    253,0,237,152,50,163,201,249,121,18,165,56,80,55,166,67,
    186,186,118,198,145,168,235,112,125,255,127,68,95,116,179,207,
    177,161,111,92,205,165,166,104,24,244,237,212,20,45,209,22,
    53,177,216,110,154,205,70,179,110,98,180,82,207,170,104,153,
    205,214,162,248,166,255,45,140,232,150,177,181,208,20,95,3,
    237,246,184,152,
};

EmbeddedPython embedded_m5_internal_param_I2CBus(
    "m5/internal/param_I2CBus.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_I2CBus.py",
    "m5.internal.param_I2CBus",
    data_m5_internal_param_I2CBus,
    2228,
    6626);

} // anonymous namespace
