#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ArmTLB[] = {
    120,156,189,88,109,111,220,198,17,158,37,121,39,221,73,103,
    73,150,100,249,69,182,232,56,66,175,65,35,181,110,221,20,
    141,97,212,177,11,212,77,44,167,188,0,114,174,69,25,138,
    220,59,241,196,35,175,228,202,202,25,210,151,202,104,251,161,
    64,127,68,209,15,253,31,69,255,86,59,51,75,82,212,73,
    42,2,52,23,91,183,88,206,238,206,206,203,51,179,179,235,
    67,254,175,134,191,95,216,0,217,191,5,64,128,127,2,34,
    128,161,128,174,0,33,5,4,203,112,80,131,244,39,16,212,
    224,29,64,215,0,105,192,41,118,76,248,173,1,241,60,175,
    169,67,100,50,69,192,184,9,210,130,110,13,118,227,37,176,
    100,29,14,154,144,126,5,66,136,88,192,235,96,6,130,89,
    120,135,220,177,211,96,134,179,16,52,185,211,128,96,142,59,
    77,24,47,130,156,131,46,50,159,129,110,11,89,125,128,172,
    174,49,171,127,17,171,0,71,86,32,104,209,116,148,229,75,
    154,105,209,76,222,227,26,115,89,40,36,91,132,238,82,209,
    191,94,233,47,87,250,43,149,254,106,165,127,163,210,95,171,
    244,111,86,250,183,42,253,219,149,254,157,74,127,157,251,11,
    32,151,96,112,23,6,247,96,176,1,61,52,238,98,169,129,
    13,210,132,193,125,232,222,7,137,127,54,156,162,253,131,165,
    202,138,247,120,197,245,114,197,3,94,241,62,116,223,7,137,
    127,15,244,138,58,116,218,171,232,211,240,63,248,175,141,62,
    5,53,143,205,27,153,102,97,18,187,97,220,75,66,131,198,
    235,212,16,2,124,106,102,114,40,60,35,40,252,19,24,7,
    129,145,67,225,4,144,177,32,93,34,3,78,184,115,98,192,
    184,13,199,2,6,22,4,38,28,227,54,53,18,160,47,224,
    212,128,223,153,52,225,4,91,11,157,119,15,44,165,113,48,
    96,231,105,78,51,112,82,131,227,26,116,94,31,27,68,56,
    104,64,250,15,120,187,206,76,103,153,169,1,199,216,90,112,
    106,193,73,29,118,113,18,146,6,13,82,95,188,62,70,77,
    145,210,105,91,40,237,78,69,93,82,37,8,211,216,27,74,
    213,194,190,59,242,82,111,232,62,77,135,95,124,246,73,187,
    89,76,73,178,173,145,167,246,29,94,99,146,49,134,35,197,
    188,146,88,170,57,236,244,194,56,112,135,73,112,24,73,53,
    75,140,220,94,24,73,215,229,193,23,195,81,146,170,95,166,
    105,146,58,100,79,38,70,137,87,174,32,107,250,81,146,201,
    54,237,198,219,56,196,94,209,236,222,136,57,146,0,44,39,
    45,14,100,230,167,225,72,161,155,52,71,154,77,220,218,228,
    32,110,178,79,177,217,62,204,208,153,219,94,20,122,241,118,
    22,14,15,35,79,37,72,24,5,125,57,124,180,189,119,24,
    70,193,246,83,231,229,246,104,172,246,147,120,27,105,97,172,
    36,26,36,218,174,154,98,11,199,175,19,211,163,176,239,134,
    172,142,187,47,163,145,76,201,106,217,109,218,80,44,138,121,
    81,23,166,104,139,22,246,106,248,51,197,186,49,39,118,66,
    82,200,39,37,9,72,102,1,157,191,3,59,9,125,124,96,
    64,186,78,192,24,224,159,32,79,34,60,58,52,102,240,216,
    111,200,18,154,58,48,201,221,154,120,204,96,66,84,225,204,
    199,228,223,24,24,17,53,24,212,65,35,5,1,166,161,147,
    142,169,197,233,196,198,64,230,22,100,127,59,207,33,94,4,
    180,52,38,7,36,221,192,173,254,200,224,235,180,73,240,29,
    198,129,218,15,179,228,40,102,107,83,159,195,165,131,54,249,
    124,252,106,111,32,125,149,109,32,225,203,228,208,246,189,56,
    78,148,237,5,129,237,41,149,134,123,135,74,102,182,74,236,
    205,172,221,32,247,46,21,80,42,249,141,71,5,116,200,205,
    8,29,253,17,132,190,194,143,101,254,96,251,103,82,33,12,
    246,147,32,67,58,177,232,75,229,144,144,234,26,54,79,139,
    237,24,111,237,122,129,142,76,70,61,213,100,160,121,89,230,
    242,118,68,103,76,209,234,55,94,116,40,21,205,207,148,167,
    112,87,234,234,141,166,136,170,155,164,87,161,22,153,202,141,
    147,56,24,163,84,161,191,73,27,222,100,108,205,3,161,107,
    21,145,53,131,109,29,90,136,180,69,195,39,5,172,28,87,
    140,169,27,164,46,176,159,69,158,20,16,95,167,152,58,218,
    6,199,62,107,194,1,102,83,143,22,59,4,95,231,14,53,
    235,212,220,45,148,157,142,198,173,73,141,31,210,46,6,171,
    233,155,185,66,101,144,236,156,11,146,91,103,65,130,137,173,
    67,96,55,40,36,206,192,110,146,202,233,147,28,217,20,70,
    232,92,28,174,224,153,13,225,44,146,130,245,2,138,14,225,
    171,10,178,126,5,100,14,249,128,17,230,220,186,202,104,27,
    223,149,209,250,218,104,143,104,151,249,28,27,45,198,68,83,
    248,228,88,35,55,33,155,239,57,118,198,107,100,190,170,225,
    214,240,96,218,141,91,124,194,240,41,197,181,128,206,5,218,
    158,186,99,17,138,122,38,220,200,79,142,140,66,119,148,38,
    95,143,237,164,103,43,40,100,120,188,153,109,109,102,31,99,
    112,219,79,56,93,232,240,214,1,156,202,81,138,129,218,224,
    15,29,124,46,7,162,155,167,127,52,48,157,194,236,23,54,
    43,231,154,76,165,148,98,166,104,211,102,105,83,18,241,99,
    218,162,201,6,53,97,13,127,77,193,114,184,9,103,54,62,
    249,121,20,127,159,144,105,73,59,9,84,251,57,29,45,37,
    43,64,170,56,223,59,135,134,169,136,239,124,128,252,158,23,
    161,83,135,210,247,244,51,73,64,66,243,159,129,43,33,1,
    127,2,242,51,186,51,199,63,71,26,253,200,93,203,52,253,
    247,192,73,227,146,227,200,208,113,100,228,105,5,195,44,251,
    136,167,234,211,233,215,240,151,74,198,57,53,65,208,73,98,
    230,181,78,245,36,177,202,200,99,128,124,163,211,194,58,31,
    162,228,146,125,47,163,105,58,24,205,50,24,207,146,87,89,
    167,96,134,153,14,118,102,53,115,151,228,120,113,134,28,74,
    211,119,196,178,81,193,195,15,168,249,176,132,130,40,104,223,
    186,72,27,147,121,181,114,146,184,58,151,253,138,246,181,88,
    210,133,186,34,163,226,242,23,157,167,238,179,87,159,189,218,
    233,184,200,169,196,121,173,192,249,195,18,231,146,179,236,59,
    46,120,169,53,200,197,167,134,192,219,12,86,13,116,145,176,
    64,214,160,91,167,136,224,154,78,228,1,35,138,124,68,121,
    236,92,10,103,131,236,104,83,149,94,214,14,164,230,235,41,
    198,63,249,240,113,228,13,247,2,239,137,75,27,208,46,126,
    17,66,70,33,242,98,85,100,130,191,184,74,106,254,252,97,
    33,250,155,41,198,254,143,200,215,133,200,140,244,32,241,57,
    224,191,216,151,246,80,14,247,112,171,253,112,100,247,34,175,
    207,94,48,115,149,94,21,42,41,118,227,228,177,152,81,86,
    217,73,108,63,137,49,1,31,250,40,161,29,72,172,238,101,
    96,127,104,115,246,182,195,204,246,246,112,212,243,149,134,243,
    249,56,228,170,202,75,251,25,23,80,7,71,212,157,178,23,
    93,188,171,133,88,37,126,85,152,68,223,35,202,84,204,133,
    161,142,13,60,189,176,106,87,99,157,133,126,74,205,247,169,
    217,132,233,103,236,109,228,71,89,54,35,195,212,49,81,52,
    4,87,208,122,198,231,52,59,187,24,127,127,253,38,241,167,
    223,17,242,40,172,211,76,57,67,87,67,106,27,148,177,187,
    205,130,56,199,237,60,19,91,5,241,26,183,11,76,92,44,
    222,47,150,152,120,29,186,203,116,49,39,202,10,69,246,204,
    255,27,217,28,35,83,142,142,222,183,26,208,206,195,239,80,
    98,231,199,144,159,222,87,5,179,168,170,211,210,193,60,16,
    69,193,91,213,133,47,199,203,19,24,115,253,84,122,74,106,
    95,220,158,170,102,156,3,244,118,251,165,71,10,241,203,34,
    255,163,82,133,83,46,83,198,43,149,82,148,29,36,118,177,
    166,192,114,245,152,181,116,13,93,177,158,161,204,42,149,37,
    239,198,242,200,173,42,172,203,81,18,197,27,141,100,28,156,
    149,154,60,50,69,199,82,130,137,224,172,62,192,186,114,5,
    127,23,195,135,20,168,232,195,174,169,149,1,51,93,39,49,
    252,254,80,184,135,159,196,206,114,167,67,206,209,217,178,76,
    148,206,207,75,115,223,158,196,86,152,185,120,127,238,203,135,
    116,83,249,95,195,88,165,240,165,160,164,168,213,201,201,89,
    248,86,50,155,203,71,136,3,95,237,241,67,173,77,78,57,
    242,162,3,153,242,242,171,198,136,1,161,66,127,178,179,56,
    88,2,25,73,37,207,65,136,113,149,223,13,3,137,167,95,
    50,198,107,12,95,16,240,59,114,221,105,31,30,63,3,62,
    6,32,163,119,40,58,60,234,120,124,172,242,255,134,213,16,
    124,254,78,188,86,106,105,200,97,186,24,30,103,14,231,151,
    133,210,123,252,176,86,156,136,28,133,228,145,29,111,168,95,
    79,248,141,192,185,79,205,131,2,0,108,48,125,39,226,43,
    136,190,216,97,196,113,113,192,181,128,179,69,116,90,59,124,
    180,85,40,180,117,166,144,183,23,201,93,54,57,63,240,13,
    31,241,43,200,197,185,157,113,166,228,80,221,153,24,148,241,
    225,208,125,41,135,73,58,126,153,4,82,173,79,140,63,13,
    130,212,241,226,190,116,223,72,42,96,212,253,201,9,121,245,
    162,121,20,179,174,144,247,220,220,11,178,232,73,56,168,223,
    191,184,8,191,56,254,44,74,252,3,25,228,115,238,94,61,
    231,121,50,244,144,126,249,46,157,176,216,101,105,98,60,72,
    105,213,234,4,21,177,23,34,244,222,234,103,181,130,172,200,
    251,147,12,201,135,229,23,215,41,234,30,92,114,59,96,252,
    167,178,31,162,99,82,230,84,174,202,51,45,193,84,221,186,
    16,174,149,101,83,14,20,93,214,235,151,133,39,244,86,204,
    79,72,244,122,214,88,104,136,186,65,175,178,166,104,138,150,
    176,196,124,171,97,54,234,141,154,137,193,68,148,101,209,52,
    27,205,121,113,249,255,13,12,179,166,177,209,106,136,255,2,
    104,217,200,241,
};

EmbeddedPython embedded_m5_internal_param_ArmTLB(
    "m5/internal/param_ArmTLB.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_ArmTLB.py",
    "m5.internal.param_ArmTLB",
    data_m5_internal_param_ArmTLB,
    2276,
    6674);

} // anonymous namespace