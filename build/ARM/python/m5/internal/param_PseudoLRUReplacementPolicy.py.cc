#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_PseudoLRUReplacementPolicy[] = {
    120,156,197,88,225,115,220,70,21,127,43,233,100,223,217,23,
    219,113,18,39,177,193,98,192,211,107,135,248,32,16,202,208,
    140,135,64,153,161,12,117,131,142,214,233,21,170,202,210,222,
    89,103,157,116,35,237,37,189,142,253,5,103,128,111,252,17,
    12,31,248,63,248,191,224,189,183,146,44,219,53,205,12,204,
    217,57,109,86,171,221,183,251,222,251,253,222,190,221,0,138,
    191,6,62,63,119,0,242,129,0,8,241,39,32,6,24,11,
    232,11,16,82,64,184,14,199,13,200,126,12,97,3,94,3,
    244,13,144,6,156,97,197,132,207,12,72,150,121,140,13,177,
    201,45,2,102,45,144,22,244,27,112,144,172,129,37,109,56,
    110,65,246,5,8,33,18,1,47,194,5,8,23,225,53,74,
    199,74,147,5,46,66,216,226,74,19,194,37,174,180,96,182,
    10,114,9,250,40,124,1,250,109,20,245,14,138,186,197,162,
    254,69,162,66,252,114,7,194,54,117,199,181,124,74,61,45,
    234,201,115,220,98,41,43,229,202,86,161,191,86,214,111,215,
    234,235,181,250,29,174,175,128,92,131,209,93,24,221,131,209,
    6,160,65,194,213,106,134,251,32,77,24,61,128,254,3,144,
    248,187,15,103,104,159,112,173,54,226,33,143,184,93,141,216,
    228,17,91,208,223,2,137,191,77,61,194,134,94,231,46,218,
    60,250,55,254,117,208,230,160,150,177,120,41,179,60,74,19,
    47,74,6,105,100,208,119,155,10,242,80,64,197,66,225,170,
    95,146,171,254,9,236,167,208,40,92,117,10,40,88,144,46,
    177,1,167,92,57,53,96,214,129,19,1,35,11,66,19,78,
    112,154,6,45,96,40,224,204,128,63,152,212,225,20,75,11,
    141,251,109,176,148,246,211,136,141,171,37,45,192,105,3,78,
    26,208,123,113,98,80,195,113,19,178,127,192,87,91,44,116,
    145,133,26,112,130,165,5,103,22,156,218,112,128,157,176,105,
    212,36,245,197,139,19,212,20,91,122,29,11,87,187,95,83,
    151,84,9,163,44,241,199,82,125,7,235,222,196,207,252,177,
    247,60,151,211,48,253,173,251,177,43,39,177,31,200,177,76,
    212,243,52,142,130,89,167,85,14,75,243,221,137,175,142,92,
    150,99,146,129,198,19,197,242,211,68,170,37,172,12,162,36,
    244,198,105,56,141,165,90,36,225,222,32,138,165,231,241,199,
    15,198,147,52,83,191,202,178,52,115,201,198,220,24,167,126,
    53,130,44,28,196,105,46,59,52,27,79,227,146,120,69,189,
    7,19,150,72,11,224,181,211,224,80,230,65,22,77,20,186,
    78,75,164,222,36,173,67,78,227,34,247,176,232,78,115,116,
    112,215,143,35,63,233,230,209,120,26,251,42,197,134,73,56,
    148,227,39,221,195,105,20,135,221,103,238,135,221,201,76,29,
    165,73,23,219,162,68,73,52,82,220,253,38,243,236,226,152,
    219,52,209,171,104,232,69,172,162,119,36,227,137,204,218,212,
    250,144,22,33,86,197,178,176,133,41,58,162,141,181,6,62,
    166,216,50,150,196,126,68,74,6,164,56,1,206,44,33,246,
    119,96,103,34,22,142,13,200,182,8,64,35,252,9,242,56,
    194,168,71,223,12,254,246,59,178,142,110,29,153,4,11,221,
    120,194,160,67,244,97,207,167,132,131,4,24,57,13,24,217,
    160,17,133,64,212,16,203,102,84,98,119,18,99,160,112,11,
    242,191,93,148,144,172,2,90,31,73,142,77,247,112,170,63,
    49,72,123,29,90,248,62,99,67,29,69,121,250,42,97,15,
    80,157,105,213,67,155,60,159,125,116,56,146,129,202,183,177,
    225,211,116,234,4,126,146,164,202,241,195,208,241,149,202,162,
    195,169,146,185,163,82,103,39,239,52,201,229,107,37,188,42,
    121,179,73,9,39,114,61,194,73,191,132,81,160,240,101,157,
    95,216,254,185,84,8,141,163,52,204,177,157,68,12,165,114,
    105,145,234,22,22,207,202,233,24,131,29,187,68,76,46,227,
    129,106,49,248,252,60,247,120,58,106,103,156,209,232,151,126,
    60,149,138,250,231,202,87,56,43,85,245,68,115,70,218,125,
    210,181,84,149,204,231,37,105,18,206,112,165,81,176,67,139,
    184,207,120,91,6,66,220,93,68,219,2,150,54,180,17,125,
    171,70,64,74,89,5,214,24,103,247,200,4,192,190,23,69,
    64,65,204,157,97,216,233,24,28,55,88,59,38,162,67,53,
    26,236,18,164,221,77,42,182,168,248,86,105,128,249,89,161,
    125,217,10,143,105,102,131,85,15,204,66,201,138,76,251,23,
    200,244,224,156,76,24,40,123,68,10,131,168,115,78,10,147,
    204,144,237,21,12,32,186,33,8,240,115,13,247,108,28,119,
    149,148,182,75,200,186,132,195,58,24,135,53,48,186,228,23,
    70,162,251,224,58,67,110,223,164,33,135,218,144,79,104,230,
    229,2,67,109,198,78,75,4,4,0,163,48,43,155,244,125,
    172,204,54,200,164,117,99,110,224,230,119,144,180,121,23,227,
    157,144,243,1,29,71,180,141,117,197,34,180,13,76,184,87,
    236,78,57,209,126,146,165,95,206,156,116,224,40,40,215,240,
    116,39,223,221,201,223,195,192,224,236,113,168,209,161,65,147,
    63,147,147,12,73,222,228,23,77,92,143,73,236,21,219,9,
    26,157,118,122,246,21,155,154,227,84,174,50,10,79,115,182,
    115,171,178,51,45,251,61,154,182,197,70,54,97,3,159,150,
    224,181,121,41,71,74,206,56,248,43,62,191,32,115,147,198,
    18,40,39,116,123,122,229,172,20,169,231,190,117,1,53,115,
    83,201,125,7,231,120,191,164,157,13,21,70,232,49,105,209,
    196,132,191,0,103,101,2,254,12,132,7,116,123,193,29,102,
    41,61,228,214,117,234,254,57,112,16,250,154,45,207,208,28,
    52,138,48,133,20,205,223,229,174,122,7,252,13,252,181,22,
    193,206,76,16,180,91,153,69,222,85,223,173,172,138,181,12,
    164,55,218,145,172,139,244,38,55,29,249,57,117,211,68,54,
    43,34,159,7,195,42,63,194,232,52,63,140,45,234,9,61,
    90,219,7,231,8,163,173,96,83,172,27,53,220,124,159,138,
    71,21,100,68,217,54,151,101,110,95,142,221,181,29,204,211,
    241,242,215,180,22,139,87,191,98,171,21,252,191,18,169,229,
    84,12,105,148,12,121,92,49,68,114,28,127,205,41,58,149,
    6,1,225,204,16,120,62,194,252,133,142,38,22,200,6,244,
    109,226,18,103,156,162,160,154,40,163,27,69,197,11,155,4,
    155,104,95,27,175,194,130,118,51,21,95,206,57,154,144,167,
    159,198,254,248,48,244,247,14,104,82,154,57,40,201,103,148,
    106,172,214,213,32,226,136,235,52,225,215,31,148,234,188,156,
    115,36,249,33,206,81,169,193,188,9,211,128,195,199,239,143,
    164,51,150,227,67,156,254,40,154,56,131,216,31,178,183,204,
    66,205,143,74,53,21,187,251,242,6,157,83,140,218,79,157,
    32,77,48,236,79,3,92,181,19,74,60,163,200,208,121,228,
    240,158,225,68,185,227,31,226,87,63,80,154,8,23,89,205,
    121,160,159,13,115,78,249,142,95,81,245,6,188,237,225,201,
    52,194,92,247,69,105,38,125,66,170,54,0,78,111,53,171,
    112,31,197,179,135,154,233,56,247,19,42,222,166,98,7,110,
    102,159,232,226,28,159,208,100,100,64,27,67,81,83,40,167,
    78,233,43,163,158,147,212,252,42,199,63,124,19,142,235,219,
    143,130,233,118,121,109,178,0,114,145,142,198,253,22,221,55,
    80,203,18,209,127,225,127,165,63,147,230,6,232,242,249,255,
    149,245,238,227,27,214,194,253,17,20,9,195,117,140,23,117,
    21,219,154,241,35,81,230,231,117,253,248,30,224,173,55,0,
    152,23,100,210,87,82,251,241,225,220,45,192,1,69,47,225,
    139,202,155,165,154,213,217,229,221,74,213,51,206,160,102,119,
    106,217,52,59,87,28,96,186,131,25,247,9,91,195,51,116,
    210,125,142,90,171,50,202,247,176,72,228,171,255,178,44,109,
    24,157,101,211,242,252,201,68,38,225,121,6,205,95,230,12,
    20,138,96,62,156,167,51,152,46,223,193,231,42,109,73,209,
    154,222,236,214,70,69,212,249,59,152,33,62,40,93,219,161,
    3,205,121,192,118,201,177,58,68,87,209,217,253,25,148,17,
    187,2,113,40,99,169,228,55,186,76,145,164,226,216,25,74,
    220,206,210,25,158,134,248,76,129,239,177,231,221,68,228,255,
    41,206,241,71,40,206,114,20,249,109,140,253,77,171,41,120,
    123,189,116,205,170,215,70,233,179,206,156,103,185,203,145,97,
    165,50,7,223,254,149,155,27,243,130,206,126,251,254,88,95,
    231,240,5,133,75,55,154,238,119,75,179,50,136,245,161,138,
    207,43,250,180,136,28,224,189,159,183,122,119,151,218,105,196,
    248,201,110,169,222,174,86,239,138,86,124,17,57,126,162,54,
    191,182,123,47,26,235,171,46,181,118,233,123,152,249,88,191,
    123,169,21,173,31,161,241,191,210,119,91,101,179,218,32,61,
    175,153,159,86,252,172,72,87,174,124,229,173,86,109,193,149,
    116,153,113,145,201,97,148,227,20,44,255,58,230,147,203,212,
    163,55,9,158,117,145,55,0,46,157,3,235,131,254,30,93,
    5,231,123,88,208,165,87,115,165,41,108,131,46,88,77,209,
    18,109,97,137,229,118,211,108,218,205,134,137,0,164,150,117,
    209,50,155,173,101,161,255,109,35,32,91,198,118,171,41,254,
    3,142,41,239,81,
};

EmbeddedPython embedded_m5_internal_param_PseudoLRUReplacementPolicy(
    "m5/internal/param_PseudoLRUReplacementPolicy.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_PseudoLRUReplacementPolicy.py",
    "m5.internal.param_PseudoLRUReplacementPolicy",
    data_m5_internal_param_PseudoLRUReplacementPolicy,
    2101,
    6549);

} // anonymous namespace