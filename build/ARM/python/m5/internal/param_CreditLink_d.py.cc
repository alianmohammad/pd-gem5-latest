#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CreditLink_d[] = {
    120,156,189,88,91,111,227,198,21,62,67,82,180,37,91,107,
    123,189,119,123,215,44,10,163,106,208,88,201,38,219,4,205,
    98,209,100,183,64,83,52,78,66,21,216,93,181,40,67,147,
    35,137,50,69,10,228,120,29,5,118,31,234,69,219,183,254,
    136,162,15,253,31,253,95,237,57,103,72,154,190,1,1,18,
    203,22,7,195,225,204,153,115,249,206,101,38,128,226,175,129,
    207,175,29,128,252,47,2,32,196,159,128,24,96,34,160,47,
    64,72,1,225,58,236,55,32,251,16,194,6,188,5,232,27,
    32,13,56,193,142,9,127,52,32,89,230,53,54,196,38,143,
    8,152,181,64,90,208,111,192,203,100,13,44,105,195,126,11,
    178,111,64,8,145,8,120,21,46,64,184,8,111,145,58,118,
    154,76,112,17,194,22,119,154,16,46,113,167,5,179,85,144,
    75,208,71,226,11,208,111,35,169,119,144,212,13,38,245,95,
    34,21,226,151,91,16,182,105,58,242,242,154,102,90,52,147,
    247,184,193,84,86,74,206,86,161,191,86,246,111,214,250,235,
    181,254,173,90,255,118,173,127,135,251,43,32,215,96,124,23,
    198,247,96,124,31,6,168,148,213,106,231,7,32,77,24,111,
    64,127,3,36,254,30,192,9,234,45,92,171,173,216,228,21,
    55,171,21,15,121,197,35,232,63,2,137,191,135,122,133,13,
    189,206,109,180,69,244,63,252,235,160,45,64,45,99,243,70,
    102,121,148,38,94,148,12,210,200,160,239,54,53,100,185,128,
    154,133,194,132,207,201,132,255,1,182,95,104,20,38,60,6,
    36,44,72,150,216,128,99,238,28,27,48,235,192,145,128,177,
    5,161,9,71,184,77,131,24,24,10,56,49,224,79,38,77,
    56,198,214,66,165,63,2,75,105,251,141,89,233,154,210,2,
    28,55,224,168,1,189,87,71,6,13,236,55,33,251,55,124,
    183,201,68,23,153,168,1,71,216,90,112,98,193,177,13,47,
    113,18,14,141,155,36,190,120,117,132,146,226,72,175,99,33,
    183,187,53,113,73,148,48,202,18,127,34,213,58,246,189,169,
    159,249,19,239,121,38,195,72,253,62,74,246,189,176,211,42,
    39,166,249,206,212,87,35,151,87,154,164,146,201,84,49,197,
    52,145,106,9,59,131,40,9,189,73,26,30,196,82,45,18,
    57,111,16,197,210,243,248,227,231,147,105,154,169,223,100,89,
    154,185,164,85,30,140,83,191,90,65,58,13,226,52,151,29,
    218,141,183,113,137,188,162,217,131,41,83,36,6,152,91,90,
    28,202,60,200,162,169,66,99,105,138,52,155,168,117,200,76,
    220,228,95,99,211,61,200,209,164,93,63,142,252,164,155,71,
    147,131,216,87,41,14,76,195,161,156,60,233,238,29,68,113,
    216,253,212,253,162,59,157,169,81,154,116,113,44,74,148,68,
    181,196,221,139,10,217,193,89,55,137,244,97,52,244,34,22,
    202,27,201,120,42,179,54,141,62,160,109,197,170,88,22,182,
    48,69,71,180,177,215,192,199,20,155,198,146,216,141,72,172,
    128,68,37,80,153,37,140,254,5,108,48,180,247,190,1,217,
    38,129,100,140,63,65,86,69,168,244,232,155,193,223,190,38,
    125,232,209,177,73,166,215,131,71,12,44,68,24,206,124,74,
    182,78,128,209,209,128,177,13,26,53,8,54,13,163,108,70,
    45,78,39,50,6,18,183,32,255,231,89,10,201,42,160,190,
    209,193,113,232,14,110,245,87,6,98,175,67,140,239,50,26,
    212,40,202,211,195,132,117,78,125,118,157,30,234,228,171,217,
    151,123,99,25,168,124,11,7,94,167,7,78,224,39,73,170,
    28,63,12,29,95,169,44,218,59,80,50,119,84,234,108,231,
    157,38,25,121,173,4,84,69,111,54,45,1,68,198,70,0,
    233,151,48,10,20,190,48,82,61,214,127,46,21,130,97,148,
    134,57,142,19,137,161,84,46,49,169,110,96,243,105,185,29,
    163,174,99,151,24,201,101,60,80,45,134,155,159,231,30,111,
    71,227,140,44,90,253,198,143,15,164,162,249,185,242,21,238,
    74,93,189,209,181,99,235,30,73,87,10,71,10,243,146,52,
    9,103,200,91,20,108,211,182,247,24,97,203,64,24,187,141,
    248,90,192,214,134,54,226,109,213,8,72,12,171,64,23,35,
    235,14,9,13,108,109,81,132,9,68,217,9,6,147,142,193,
    209,128,229,97,103,115,168,71,139,93,2,177,187,65,205,38,
    53,15,75,145,175,83,238,246,121,185,31,211,94,6,11,27,
    152,133,88,149,195,236,158,113,152,251,167,14,131,1,175,71,
    192,55,200,61,78,129,111,146,224,217,179,2,229,228,82,104,
    104,252,92,195,54,171,195,93,37,49,237,18,150,46,97,173,
    14,184,97,13,112,46,89,130,209,230,222,191,74,117,91,243,
    85,221,80,171,238,9,237,181,92,224,164,205,248,104,137,128,
    140,108,20,138,100,37,190,192,206,236,46,41,177,174,190,187,
    152,182,94,38,109,206,63,156,195,56,195,235,232,160,181,170,
    59,22,33,106,96,194,157,34,175,228,228,204,211,44,253,118,
    230,164,3,71,65,201,195,211,237,124,103,59,255,4,221,221,
    121,198,1,68,59,188,118,233,76,78,51,116,221,38,191,104,
    119,244,216,53,189,34,45,160,154,41,71,179,117,88,185,28,
    125,114,149,81,208,185,118,205,182,42,205,18,163,159,208,70,
    45,86,171,9,119,241,105,9,230,198,75,57,226,113,117,192,
    95,241,249,140,20,76,50,74,160,186,206,237,105,94,89,12,
    18,200,253,217,25,100,92,163,16,238,59,72,245,69,233,76,
    54,84,56,160,199,36,54,9,223,127,7,174,153,4,252,13,
    200,230,104,218,194,35,216,247,232,33,211,173,211,244,63,3,
    7,147,75,146,149,161,61,203,40,194,13,58,94,254,17,79,
    213,185,235,119,240,143,90,36,58,49,65,80,158,49,139,170,
    168,158,103,172,202,23,25,44,223,43,151,88,103,157,150,12,
    51,242,115,154,166,221,211,172,220,243,52,168,85,181,12,198,
    156,235,196,209,162,222,194,35,110,62,63,69,17,5,241,13,
    177,110,212,176,241,11,106,222,173,96,33,202,177,107,98,108,
    235,124,212,173,101,27,79,71,186,223,210,238,22,243,187,98,
    115,154,175,19,169,64,223,40,65,255,184,2,189,228,240,251,
    150,43,100,106,13,178,244,137,33,240,216,130,165,5,157,24,
    44,144,13,232,219,228,30,92,254,137,194,123,68,25,162,40,
    180,157,137,237,172,145,93,173,171,202,216,218,142,212,124,123,
    237,33,129,76,249,52,246,39,123,161,255,236,53,109,67,123,
    5,165,63,25,37,227,171,117,198,201,23,196,85,188,243,235,
    123,165,0,111,174,61,28,188,79,190,84,50,206,224,15,211,
    128,99,192,31,70,210,153,200,201,30,110,56,138,166,206,32,
    246,135,108,17,179,16,236,203,82,48,197,38,61,159,59,115,
    10,52,187,169,19,164,9,198,231,131,0,249,116,66,137,135,
    2,25,58,239,58,28,220,157,40,119,252,61,252,234,7,74,
    99,251,172,107,114,25,230,103,195,156,43,174,253,67,234,206,
    197,162,30,30,247,34,44,46,251,165,98,244,33,164,138,212,
    92,79,106,71,193,20,135,197,190,154,233,240,244,75,106,126,
    78,205,54,204,43,160,119,145,234,43,34,79,74,178,49,130,
    52,5,31,73,234,243,190,162,149,249,69,239,252,226,251,120,
    167,190,78,40,124,212,46,239,33,22,64,46,210,153,178,223,
    162,131,58,141,44,145,227,46,252,80,199,101,240,207,5,246,
    223,252,168,254,234,62,158,59,223,238,7,80,228,235,171,124,
    85,212,133,106,107,95,29,139,178,232,173,75,196,71,230,251,
    151,194,198,11,50,233,43,169,173,243,96,14,82,178,187,235,
    77,247,42,27,149,162,84,69,255,71,149,56,39,92,164,204,
    110,213,138,82,54,153,120,137,21,5,22,174,71,44,177,103,
    232,218,245,20,125,86,37,56,157,139,18,121,232,93,20,94,
    151,167,196,144,63,157,202,36,60,45,61,249,203,181,27,156,
    34,10,249,109,89,35,96,157,121,11,159,139,46,70,194,212,
    100,99,99,53,42,167,154,135,217,24,156,163,210,96,29,170,
    13,78,67,166,75,230,210,65,178,138,143,238,175,160,140,153,
    21,252,66,25,75,37,47,49,132,162,181,197,185,43,148,152,
    52,210,25,30,14,184,224,198,247,216,243,230,19,109,63,166,
    13,161,56,204,80,180,181,49,222,54,173,166,224,180,117,238,
    134,80,115,67,85,149,46,43,103,185,203,126,187,82,137,204,
    215,88,101,10,97,68,211,225,103,215,159,232,91,10,62,133,
    187,63,161,230,167,165,234,24,140,250,140,193,197,188,62,46,
    33,122,57,167,114,10,117,119,104,156,246,157,60,217,41,5,
    218,209,2,237,74,117,152,102,251,90,34,190,77,155,60,185,
    98,234,243,56,13,246,101,168,111,112,212,195,171,231,188,72,
    39,62,142,111,92,58,163,23,77,10,10,107,231,190,135,25,
    173,186,125,110,20,45,22,161,193,190,211,151,62,229,48,31,
    187,47,147,128,162,218,153,17,78,136,23,66,25,3,39,147,
    195,40,71,122,76,236,204,162,194,217,63,46,245,118,73,20,
    172,19,152,11,214,116,113,169,15,190,207,232,138,51,255,12,
    27,186,232,105,174,52,133,109,208,53,162,41,90,162,45,44,
    177,220,110,154,77,187,217,48,17,143,52,178,46,90,102,179,
    181,44,78,255,183,16,163,45,99,171,213,20,255,7,44,128,
    113,235,
};

EmbeddedPython embedded_m5_internal_param_CreditLink_d(
    "m5/internal/param_CreditLink_d.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_CreditLink_d.py",
    "m5.internal.param_CreditLink_d",
    data_m5_internal_param_CreditLink_d,
    2098,
    6267);

} // anonymous namespace