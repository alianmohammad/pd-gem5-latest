#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseMemProbe[] = {
    120,156,189,88,91,111,227,198,21,62,67,82,180,41,91,182,
    188,94,239,205,110,204,162,48,170,6,141,213,110,178,73,128,
    44,140,38,77,129,166,64,156,13,85,212,27,181,13,75,139,
    35,153,50,69,10,228,120,55,10,236,151,120,145,230,45,63,
    34,200,67,255,71,255,87,123,206,25,146,166,189,94,36,64,
    34,219,226,96,56,151,51,231,242,157,203,112,0,197,95,3,
    159,63,184,0,249,80,0,132,248,19,16,3,76,4,244,5,
    8,41,32,92,135,227,6,100,111,65,216,128,23,0,125,3,
    164,1,231,216,49,225,239,6,36,203,188,199,134,216,228,17,
    1,179,38,72,11,250,13,56,72,214,192,146,54,28,55,33,
    251,23,8,33,18,1,79,195,5,8,23,225,5,82,199,142,
    195,4,23,33,108,114,199,129,112,137,59,77,152,181,65,46,
    65,31,137,47,64,191,133,164,94,71,82,43,76,234,191,68,
    42,196,153,219,16,182,104,57,242,242,25,173,180,104,37,159,
    177,194,84,86,75,206,218,208,95,43,251,183,106,253,245,90,
    255,54,247,87,65,174,193,120,3,198,119,96,124,23,80,33,
    97,187,58,225,30,72,19,198,247,161,127,31,36,254,238,193,
    57,234,39,92,171,237,120,192,59,110,85,59,54,121,199,22,
    244,183,64,226,111,83,239,176,161,215,217,64,157,71,255,195,
    191,14,234,28,212,50,54,207,100,150,71,105,226,71,201,48,
    141,12,154,183,169,33,11,13,168,89,40,76,245,71,50,213,
    127,128,237,20,26,133,169,206,0,9,11,146,37,54,224,140,
    59,103,6,204,58,112,42,96,108,65,104,194,41,30,211,32,
    6,70,2,206,13,248,135,73,11,206,176,181,80,185,175,129,
    165,180,157,198,172,92,77,105,1,206,26,112,218,128,222,211,
    83,131,6,142,29,200,190,135,47,183,152,232,34,19,53,224,
    20,91,11,206,45,56,179,225,0,23,225,208,216,33,241,197,
    211,83,148,20,71,122,29,11,185,221,175,137,75,162,132,81,
    150,4,19,169,214,177,239,79,131,44,152,248,31,4,185,252,
    88,78,158,100,233,161,236,52,203,133,105,190,59,13,212,145,
    199,59,77,82,201,100,170,152,98,154,72,181,132,157,97,148,
    132,254,36,13,79,98,169,22,137,156,63,140,98,233,251,60,
    249,209,100,154,102,234,79,89,150,102,30,105,149,7,227,52,
    168,118,144,78,7,113,154,203,14,157,198,199,120,68,94,209,
    234,225,148,41,18,3,204,45,109,14,101,62,200,162,169,66,
    99,105,138,180,154,168,117,200,76,220,228,159,98,211,61,201,
    209,164,221,32,142,130,164,155,71,147,147,56,80,41,14,76,
    195,145,156,60,234,30,158,68,113,216,125,223,251,184,59,157,
    169,163,52,233,226,88,148,40,137,106,137,187,47,43,100,23,
    87,221,34,210,207,163,145,31,177,80,254,145,140,167,50,107,
    209,232,3,58,86,180,197,178,176,133,41,58,162,133,189,6,
    62,166,216,50,150,196,126,68,98,13,72,84,2,149,89,194,
    232,59,96,131,161,189,143,13,200,182,8,36,99,252,9,178,
    42,66,165,71,115,6,207,125,74,250,208,163,99,147,76,175,
    7,79,25,88,136,48,92,249,152,108,157,0,163,163,1,99,
    27,52,106,16,108,26,70,217,140,90,92,78,100,12,36,110,
    65,254,237,101,10,73,27,80,223,232,200,56,116,7,143,250,
    138,129,216,235,16,227,251,140,6,117,20,229,233,243,132,117,
    78,125,118,157,30,234,228,201,236,147,195,177,28,168,124,27,
    7,62,75,79,220,65,144,36,169,114,131,48,116,3,165,178,
    232,240,68,201,220,85,169,187,147,119,28,50,242,90,9,168,
    138,222,108,90,2,136,140,141,0,210,47,97,52,80,248,194,
    72,245,89,255,185,84,8,134,163,52,204,113,156,72,140,164,
    242,136,73,181,130,205,251,229,113,140,186,142,93,98,36,151,
    241,80,53,25,110,65,158,251,124,28,141,51,178,104,247,179,
    32,62,145,138,214,231,42,80,120,42,117,245,65,115,199,214,
    61,146,174,20,142,20,230,39,105,18,206,144,183,104,176,67,
    199,222,99,132,45,3,97,108,3,241,181,128,173,13,45,196,
    91,219,24,144,24,86,129,46,70,214,29,18,26,216,218,162,
    8,19,136,178,115,12,38,29,131,163,1,203,195,206,230,82,
    143,54,123,4,98,111,147,154,45,106,126,81,138,60,79,185,
    91,87,229,126,72,103,25,44,236,192,44,196,170,28,102,255,
    146,195,220,191,112,24,12,120,61,2,190,65,238,113,1,124,
    147,4,207,246,10,148,147,75,161,161,113,186,134,109,86,135,
    215,38,49,237,18,150,30,97,173,14,184,81,13,112,30,89,
    130,209,230,221,127,149,234,182,111,86,117,35,173,186,71,116,
    214,114,129,147,22,227,163,41,6,100,100,163,80,36,43,241,
    67,236,204,238,146,18,235,234,187,139,105,235,32,105,113,254,
    225,28,198,153,92,71,7,173,85,221,177,8,81,67,19,238,
    20,121,37,39,103,158,102,233,23,51,55,29,186,10,74,30,
    30,239,228,187,59,249,123,232,238,238,30,7,16,237,240,218,
    165,51,57,205,208,117,29,126,209,238,232,179,107,250,69,90,
    64,53,83,142,102,235,176,114,57,250,228,42,163,160,51,119,
    205,54,43,205,18,163,239,209,65,77,86,171,9,119,241,105,
    10,230,198,79,57,226,113,117,192,179,248,124,64,10,38,25,
    37,80,253,230,245,52,175,44,6,9,228,253,250,18,50,230,
    40,132,247,58,82,253,176,116,38,27,42,28,208,99,18,155,
    132,239,127,3,215,76,2,190,6,178,57,154,182,240,8,246,
    61,122,200,116,235,180,252,115,224,96,114,77,178,50,180,103,
    25,69,184,65,199,203,223,225,165,58,119,253,5,190,169,69,
    162,115,19,4,229,25,179,168,138,234,121,198,170,124,145,193,
    242,163,114,137,117,217,105,201,48,71,65,78,203,180,123,154,
    149,123,94,4,181,170,150,193,152,51,79,28,45,234,35,124,
    226,230,163,11,20,81,16,223,20,235,70,13,27,191,165,230,
    141,10,22,162,28,155,19,99,219,87,163,110,45,219,248,58,
    210,253,153,78,183,152,223,85,155,211,124,157,72,5,250,70,
    9,250,135,21,232,37,135,223,23,92,33,83,107,144,165,207,
    13,129,215,19,44,45,232,102,96,129,108,64,223,38,247,224,
    242,79,20,222,35,202,16,69,161,237,82,108,103,141,236,107,
    93,85,198,214,118,164,230,139,185,135,4,50,229,227,56,152,
    28,134,193,222,1,29,67,103,13,74,127,50,74,198,219,117,
    198,201,23,196,171,120,231,215,223,149,2,60,155,123,56,248,
    61,82,173,24,103,240,135,233,128,99,192,95,143,164,59,145,
    147,67,60,240,40,154,186,195,56,24,177,69,204,66,176,79,
    74,193,20,155,244,106,238,204,41,208,236,167,238,32,77,48,
    62,159,12,144,79,55,148,120,41,144,161,251,134,203,193,221,
    141,114,55,56,196,217,96,160,52,182,47,187,38,151,97,65,
    54,202,185,226,58,126,78,221,27,177,168,143,215,189,8,139,
    203,167,165,98,244,37,164,138,212,92,79,106,71,193,20,135,
    197,190,154,233,240,244,54,53,191,161,102,7,110,42,160,119,
    145,234,223,136,60,41,201,198,8,226,8,190,146,212,215,61,
    161,157,249,203,222,153,252,24,239,212,159,13,112,129,180,97,
    188,192,237,34,69,243,190,83,14,54,185,93,226,193,229,210,
    155,91,60,184,194,23,126,253,137,162,77,158,109,255,84,207,
    102,239,184,17,191,248,252,103,117,104,239,225,141,243,237,189,
    9,69,66,127,149,51,27,80,43,163,223,209,206,172,45,128,
    105,127,118,187,86,230,177,140,226,0,115,52,150,130,167,92,
    36,250,134,174,6,47,204,197,89,151,111,223,116,211,72,228,
    115,255,101,20,234,130,143,96,16,76,167,50,9,47,138,57,
    158,153,187,134,200,71,15,225,34,235,98,229,118,27,159,151,
    49,73,194,212,100,99,236,53,42,20,62,184,41,107,142,170,
    32,180,118,41,8,121,100,46,29,118,170,136,163,117,255,218,
    181,222,239,79,130,36,24,201,140,174,5,63,180,4,211,63,
    151,76,197,187,250,229,245,203,167,212,215,183,114,34,250,195,
    171,136,46,169,253,98,136,205,161,40,238,135,50,150,74,94,
    3,24,69,50,22,55,174,80,98,186,72,103,120,45,224,82,
    27,223,99,223,191,153,56,251,46,82,253,39,145,95,41,226,
    172,141,87,169,13,225,88,142,224,148,117,229,235,160,230,135,
    234,74,93,82,206,114,143,93,114,181,50,211,162,86,132,78,
    31,236,123,116,241,217,71,165,232,239,98,46,173,36,157,122,
    191,42,141,204,110,163,239,23,92,200,235,171,18,250,25,231,
    83,78,159,222,46,141,83,81,59,121,180,91,138,180,219,139,
    38,250,67,140,255,76,82,42,230,207,104,147,71,106,243,202,
    58,45,122,181,90,173,93,153,15,179,0,251,27,87,70,81,
    213,17,106,250,75,253,157,166,28,86,36,234,85,130,196,112,
    245,198,185,139,141,95,87,54,91,58,147,163,40,71,58,76,
    164,218,80,68,16,50,5,23,171,215,160,173,190,249,70,128,
    161,107,64,125,63,221,163,47,145,249,30,54,244,61,198,89,
    117,132,109,208,215,62,83,52,69,75,88,98,185,229,152,142,
    237,52,76,4,15,141,172,139,166,233,52,151,133,254,223,70,
    40,53,141,237,37,71,252,31,35,115,90,242,
};

EmbeddedPython embedded_m5_internal_param_BaseMemProbe(
    "m5/internal/param_BaseMemProbe.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_BaseMemProbe.py",
    "m5.internal.param_BaseMemProbe",
    data_m5_internal_param_BaseMemProbe,
    2092,
    6150);

} // anonymous namespace