#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MemCheckerMonitor[] = {
    120,156,197,89,109,115,27,73,17,238,217,149,100,75,182,98,
    57,126,75,98,199,22,5,6,113,197,89,16,8,161,238,82,
    41,142,132,42,142,170,248,142,21,69,114,58,138,189,245,238,
    216,94,121,95,84,187,163,228,116,101,127,193,41,160,248,194,
    143,160,248,192,255,224,27,63,138,235,238,217,93,175,95,228,
    164,46,68,103,107,167,70,189,51,61,253,242,116,79,207,200,
    133,236,175,138,207,47,219,0,233,223,5,128,135,31,1,1,
    64,40,160,47,64,72,1,222,18,28,85,33,249,25,120,85,
    120,5,208,55,64,26,112,138,29,19,62,55,32,154,231,57,
    53,8,76,166,8,24,55,64,86,160,95,133,103,209,34,84,
    100,13,142,26,144,124,1,66,136,72,192,115,111,6,188,89,
    120,133,220,177,83,103,134,179,224,53,184,83,7,111,142,59,
    13,24,183,64,206,65,31,153,207,64,191,137,172,222,67,86,
    55,152,213,127,136,149,135,111,150,193,107,210,112,148,229,51,
    26,89,161,145,188,198,13,230,178,144,75,214,130,254,98,222,
    191,89,234,47,149,250,203,165,254,74,169,191,90,234,175,113,
    127,1,228,34,12,110,193,224,54,12,238,192,62,26,168,85,
    72,177,14,210,132,193,6,244,55,64,226,103,29,78,209,134,
    222,98,105,198,93,158,113,179,152,177,201,51,182,160,191,5,
    18,63,155,122,70,13,122,157,21,244,139,255,63,252,235,160,
    95,64,205,99,243,66,38,169,31,71,182,31,237,199,190,65,
    239,107,212,144,23,93,106,102,50,119,62,38,119,254,27,216,
    151,158,145,185,243,4,144,177,32,93,2,3,78,184,115,98,
    192,184,3,199,2,6,21,240,76,56,198,101,170,36,192,129,
    128,83,3,254,104,210,128,19,108,43,232,128,77,168,40,237,
    203,1,59,64,115,154,129,147,42,28,87,161,247,252,216,32,
    194,81,29,146,127,193,87,27,204,116,150,153,26,112,140,109,
    5,78,43,112,82,131,103,56,8,73,131,58,169,47,158,31,
    163,166,72,233,117,42,40,237,110,73,93,82,197,243,147,200,
    9,165,186,133,125,123,232,36,78,104,63,149,225,227,67,233,
    30,201,228,105,28,249,42,78,58,141,124,116,156,238,12,29,
    117,104,241,116,147,236,18,14,21,179,141,35,169,230,176,179,
    239,71,158,29,198,222,40,144,106,150,120,218,251,126,32,109,
    155,95,126,28,14,227,68,253,58,73,226,196,34,211,50,49,
    136,157,98,6,25,214,13,226,84,118,104,53,94,198,34,246,
    138,70,239,15,153,35,9,192,34,211,100,79,166,110,226,15,
    21,122,76,115,164,209,196,173,67,190,226,38,253,3,54,221,
    81,138,126,237,58,129,239,68,221,212,15,71,129,131,138,165,
    221,161,119,32,195,251,221,189,145,31,120,221,143,172,167,221,
    225,88,29,198,81,23,105,126,164,36,218,38,232,78,176,202,
    14,14,189,73,252,95,250,7,182,207,154,217,135,50,24,202,
    164,73,212,59,180,182,104,137,121,81,19,166,232,136,38,246,
    170,248,152,98,195,152,19,187,62,233,230,146,190,4,47,51,
    7,212,63,129,93,135,158,63,50,32,217,32,184,12,240,35,
    200,191,8,154,30,189,51,248,221,239,200,40,154,58,48,9,
    4,154,120,204,16,67,172,225,200,135,228,245,8,24,39,85,
    24,212,64,227,7,97,167,1,149,140,169,197,225,196,198,64,
    230,21,72,255,113,158,67,212,2,52,58,134,61,146,86,113,
    169,63,51,36,123,29,18,124,151,33,161,14,253,52,126,25,
    177,225,169,207,65,212,67,155,124,58,254,100,111,32,93,149,
    110,33,225,179,120,212,118,157,40,138,85,219,241,188,182,163,
    84,226,239,141,148,76,219,42,110,111,167,157,58,121,122,49,
    71,85,193,111,60,204,81,68,30,71,20,233,47,158,239,42,
    252,178,196,95,216,254,169,84,136,136,195,216,75,145,78,44,
    14,164,178,72,72,117,3,155,143,242,229,24,122,157,90,14,
    148,84,6,251,170,193,152,115,210,212,230,229,136,206,240,162,
    217,47,156,96,36,21,141,79,149,163,112,85,234,234,133,166,
    3,48,14,203,92,67,178,154,29,197,145,55,70,1,125,119,
    155,214,190,197,48,155,7,2,218,10,130,108,6,219,26,52,
    17,116,45,195,37,93,42,25,196,24,94,171,164,57,176,203,
    69,150,53,16,106,167,152,91,58,6,39,7,86,138,195,174,
    77,61,154,108,17,146,173,117,106,54,168,185,155,235,253,206,
    149,111,94,84,254,30,45,104,176,198,174,153,233,86,132,206,
    238,185,208,185,125,22,58,152,4,123,20,2,6,5,202,89,
    8,152,164,125,242,40,195,59,5,23,186,28,95,151,80,206,
    54,177,90,164,107,45,7,168,69,168,43,67,239,160,4,61,
    139,220,193,184,179,110,79,178,223,214,183,96,191,3,109,191,
    251,180,224,124,134,152,38,35,165,33,92,114,183,145,89,147,
    45,249,4,59,227,53,178,100,217,134,107,184,159,61,139,154,
    188,49,241,230,198,101,128,78,22,218,180,186,83,33,108,237,
    155,176,154,109,56,41,197,246,48,137,191,28,183,227,253,182,
    130,92,134,135,219,233,206,118,250,33,70,127,251,17,231,19,
    29,255,58,194,19,57,76,48,146,235,252,69,71,167,205,145,
    106,103,91,5,218,154,54,111,118,17,91,152,147,81,170,18,
    202,65,211,49,111,163,48,47,73,251,33,173,214,96,219,154,
    176,134,79,67,176,72,118,204,89,144,107,7,126,139,207,175,
    200,202,164,168,4,170,0,173,158,22,152,117,33,173,172,31,
    156,195,200,187,214,196,122,15,89,63,201,99,171,6,5,34,
    232,49,73,86,130,251,95,129,203,42,1,127,1,242,62,58,
    57,11,16,14,69,122,200,137,75,52,252,79,192,9,230,138,
    93,204,208,129,102,100,41,8,227,48,125,192,67,245,166,246,
    91,248,91,41,59,157,154,32,104,3,50,179,194,169,188,1,
    85,138,208,100,216,188,209,38,83,57,31,195,228,157,67,39,
    165,97,58,90,205,34,90,207,18,93,81,233,96,10,122,231,
    136,154,213,235,216,36,210,199,103,120,162,236,190,46,150,140,
    18,74,126,68,205,251,5,64,68,78,123,151,210,109,93,76,
    199,165,189,200,214,41,240,55,36,66,133,133,94,168,41,50,
    245,37,78,69,32,84,243,64,184,87,4,130,228,228,252,138,
    107,106,106,13,114,252,169,33,240,208,131,37,8,157,55,42,
    32,171,208,175,81,200,112,173,40,178,136,18,121,238,162,156,
    119,46,243,179,109,118,181,213,10,223,107,183,82,243,229,116,
    114,5,121,246,97,224,132,123,158,243,168,79,107,209,130,110,
    30,99,70,46,125,171,44,61,197,135,152,164,0,127,253,113,
    174,197,139,233,228,137,159,32,235,66,122,142,10,47,118,57,
    57,252,254,80,182,67,25,238,225,170,135,254,176,189,31,56,
    7,236,27,51,211,238,147,92,59,197,206,189,184,199,166,148,
    129,118,227,182,27,71,152,194,71,46,174,215,246,36,158,37,
    164,215,126,191,205,249,191,237,167,109,103,15,223,58,174,210,
    120,63,31,179,92,184,57,201,65,202,53,218,209,75,234,78,
    207,183,54,158,23,125,172,73,63,207,173,163,15,48,69,50,
    231,50,84,7,15,110,133,120,70,80,99,157,188,126,78,205,
    15,169,217,134,169,230,252,46,37,76,90,131,204,85,195,252,
    82,23,106,237,170,128,253,148,120,164,151,195,246,191,111,18,
    182,250,150,34,11,222,26,141,148,51,116,104,165,182,78,233,
    191,223,200,137,115,220,206,51,177,153,19,111,112,187,192,196,
    86,78,92,228,246,38,19,151,114,226,50,183,43,76,92,205,
    137,107,220,222,98,226,237,252,114,229,14,19,215,233,2,193,
    171,49,229,46,229,147,153,183,205,39,28,142,211,11,68,231,
    255,154,70,172,123,223,142,240,214,79,33,171,47,38,165,16,
    81,214,172,169,83,200,64,228,53,123,89,45,190,0,216,156,
    140,97,219,77,164,163,164,118,214,157,105,233,203,249,72,175,
    236,22,46,203,149,42,78,47,15,10,197,78,185,188,26,47,
    151,10,107,246,160,120,134,181,16,22,223,199,172,187,109,232,
    250,251,12,145,149,194,4,116,214,136,228,203,203,210,104,51,
    232,58,155,164,114,134,67,25,121,103,53,52,191,153,14,8,
    40,239,13,224,172,196,193,130,121,25,159,203,1,72,106,149,
    180,100,223,85,139,144,155,154,23,25,181,113,238,191,14,161,
    236,44,187,91,228,61,157,207,139,84,110,125,80,248,227,251,
    215,64,18,17,239,106,58,29,210,222,116,40,22,96,124,252,
    56,35,169,237,107,102,226,102,24,217,113,20,140,121,141,55,
    27,73,75,208,241,171,160,168,95,92,51,143,111,191,66,39,
    69,59,218,184,137,71,120,226,161,75,84,55,30,69,138,23,
    253,198,147,73,14,42,199,175,27,164,62,120,45,119,25,218,
    169,239,201,171,133,123,139,233,36,222,102,33,222,164,97,234,
    193,235,86,72,3,231,197,4,233,190,233,92,18,109,61,23,
    237,234,49,175,215,220,29,142,222,198,112,147,167,159,51,220,
    196,97,156,39,120,156,39,3,169,228,164,156,166,40,248,178,
    11,25,79,98,149,24,143,109,91,159,191,241,123,96,219,83,
    172,172,8,234,95,64,118,55,71,149,85,13,107,171,149,210,
    127,189,82,23,92,184,94,248,125,65,139,215,134,252,196,57,
    78,45,222,34,23,138,76,194,247,223,121,253,200,91,6,133,
    232,174,19,234,155,77,190,180,179,190,67,205,119,243,100,196,
    137,94,223,65,240,57,95,223,169,224,246,192,85,53,23,209,
    214,14,209,41,200,194,251,59,185,134,59,23,53,228,59,248,
    240,62,67,234,242,184,158,31,234,235,94,62,245,149,223,123,
    137,131,253,149,11,84,180,188,143,134,255,74,78,224,135,235,
    102,252,182,174,124,255,56,136,81,40,47,27,115,119,242,152,
    39,113,72,235,147,229,242,215,138,12,122,113,153,186,134,178,
    254,198,213,241,213,165,4,99,44,145,7,62,101,34,230,84,
    204,202,182,87,242,191,250,222,53,145,81,230,48,61,92,234,
    51,168,190,61,123,68,191,157,240,61,31,221,27,215,23,234,
    162,102,208,79,19,166,104,136,166,168,136,249,102,221,172,215,
    234,85,19,177,75,148,37,209,48,235,141,121,81,254,223,66,
    20,55,140,173,86,93,124,13,116,9,253,100,
};

EmbeddedPython embedded_m5_internal_param_MemCheckerMonitor(
    "m5/internal/param_MemCheckerMonitor.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_MemCheckerMonitor.py",
    "m5.internal.param_MemCheckerMonitor",
    data_m5_internal_param_MemCheckerMonitor,
    2300,
    7399);

} // anonymous namespace