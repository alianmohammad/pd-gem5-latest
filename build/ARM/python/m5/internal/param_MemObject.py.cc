#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MemObject[] = {
    120,156,189,88,109,111,219,214,21,62,151,164,104,83,182,98,
    59,206,123,156,154,195,96,76,45,90,171,203,150,117,64,131,
    160,93,51,96,45,80,183,163,6,56,81,139,178,52,121,37,
    83,166,72,129,188,78,170,194,254,50,7,219,190,237,71,12,
    251,176,255,177,255,181,157,115,46,73,83,74,2,20,216,100,
    91,188,184,188,47,231,158,151,231,188,92,134,80,254,181,240,
    249,196,5,40,114,1,16,225,79,64,2,48,17,48,16,32,
    164,128,104,27,78,90,144,255,26,162,22,188,2,24,24,32,
    13,184,192,142,9,223,24,144,174,243,30,27,18,147,71,4,
    204,218,32,45,24,180,224,48,221,2,75,218,112,210,134,252,
    123,16,66,164,2,158,69,43,16,173,194,43,164,142,29,135,
    9,174,66,212,230,142,3,209,26,119,218,48,219,4,185,6,
    3,36,190,2,131,14,146,122,15,73,93,99,82,255,38,82,
    17,206,220,128,168,67,203,145,151,231,180,210,162,149,124,198,
    53,166,178,81,113,182,9,131,173,170,127,189,209,223,110,244,
    111,52,250,55,185,191,1,114,11,198,183,96,124,27,198,119,
    96,136,138,216,172,79,187,11,210,132,241,61,24,220,3,137,
    191,187,112,129,186,138,182,26,59,238,243,142,235,245,142,29,
    222,241,0,6,15,64,226,111,71,239,176,161,223,189,137,250,
    143,255,131,127,93,212,63,168,117,108,94,200,188,136,179,212,
    143,211,97,22,27,52,111,83,67,214,10,169,89,41,205,246,
    25,153,237,95,192,54,139,140,210,108,231,128,132,5,201,146,
    24,112,206,157,115,3,102,93,56,19,48,182,32,50,225,12,
    143,105,17,3,35,1,23,6,124,107,210,130,115,108,45,84,
    244,59,96,41,109,179,49,43,90,83,90,129,243,22,156,181,
    160,255,236,204,160,129,19,7,242,127,194,143,59,76,116,149,
    137,26,112,134,173,5,23,22,156,219,112,136,139,112,104,236,
    144,248,226,217,25,74,138,35,253,174,133,220,30,52,196,37,
    81,162,56,79,131,137,84,155,216,247,167,65,30,76,252,47,
    229,228,171,163,177,12,85,183,93,173,202,138,253,105,160,142,
    61,222,102,146,62,38,83,197,228,178,84,170,53,236,12,227,
    52,242,39,89,116,154,72,181,74,180,252,97,156,72,223,231,
    201,207,39,211,44,87,191,207,243,44,247,72,165,60,152,100,
    65,189,131,20,26,38,89,33,187,116,26,31,227,17,121,69,
    171,135,83,166,72,12,48,171,180,57,146,69,152,199,83,133,
    150,210,20,105,53,81,235,146,141,184,41,14,176,233,157,22,
    104,207,94,144,196,65,218,43,226,201,105,18,168,12,7,166,
    209,72,78,30,245,142,78,227,36,234,125,234,125,217,155,206,
    212,113,150,246,112,44,78,149,68,157,36,189,5,109,236,227,
    146,235,68,247,101,60,242,99,150,200,63,150,201,84,230,29,
    26,189,71,103,138,77,177,46,108,97,138,174,232,96,175,133,
    143,41,118,140,53,113,16,147,76,33,201,73,112,50,43,0,
    253,3,216,84,104,233,19,3,242,29,130,199,24,127,130,236,
    137,32,233,211,156,193,115,127,36,101,232,209,177,73,70,215,
    131,103,12,41,196,22,174,124,76,86,78,129,113,209,130,177,
    13,26,47,8,51,13,160,124,70,45,46,39,50,6,18,183,
    160,248,251,60,133,116,19,80,217,232,206,56,116,11,143,250,
    51,67,176,223,37,198,15,24,10,234,56,46,178,151,41,43,
    156,250,236,52,125,212,201,215,51,173,167,98,23,7,158,103,
    167,110,24,164,105,166,220,32,138,220,64,169,60,62,58,85,
    178,112,85,230,238,21,93,135,44,188,85,161,169,166,55,155,
    86,232,33,75,35,122,244,75,20,135,10,95,182,249,133,245,
    95,72,133,72,56,206,162,2,199,137,196,72,42,143,152,84,
    215,176,249,180,58,142,33,215,181,43,128,20,50,25,170,54,
    99,45,40,10,159,143,163,113,134,21,237,126,17,36,167,82,
    209,250,66,5,10,79,165,174,62,104,185,192,186,67,162,85,
    146,145,182,252,52,75,163,25,50,22,135,123,116,230,29,134,
    215,58,16,192,110,34,184,86,176,181,161,131,96,219,52,66,
    146,193,42,161,197,176,186,69,18,3,155,90,148,209,1,33,
    118,129,49,164,107,112,16,96,97,216,205,92,234,209,102,143,
    16,236,221,167,102,135,154,7,149,188,75,19,186,179,40,244,
    67,58,200,96,73,67,179,148,169,118,149,131,57,87,185,123,
    233,42,24,228,250,4,121,131,28,227,18,242,38,73,157,63,
    41,241,77,206,132,38,198,233,6,170,89,23,30,133,62,198,
    8,3,210,35,148,53,161,54,106,64,205,35,51,48,206,188,
    187,111,211,219,238,21,234,109,164,245,246,136,14,90,47,17,
    210,97,100,180,69,72,230,53,74,45,178,6,159,98,103,118,
    155,52,216,212,221,109,204,83,135,105,135,19,14,39,45,78,
    227,58,40,104,149,234,142,69,88,26,154,112,171,76,36,5,
    249,240,52,207,126,152,185,217,208,85,80,241,240,120,175,216,
    223,43,62,70,47,119,159,112,220,208,126,174,61,57,151,211,
    28,61,214,225,23,237,133,62,123,164,95,166,2,212,49,37,
    101,54,13,107,150,131,78,161,114,138,53,203,85,107,187,86,
    43,113,249,49,157,210,102,157,154,112,27,159,182,96,86,252,
    140,55,112,45,192,179,248,252,142,180,75,2,74,160,202,205,
    235,107,70,89,6,146,198,251,197,28,38,150,37,129,247,30,
    146,124,90,249,144,13,53,2,232,49,137,71,130,245,95,129,
    203,35,1,127,1,178,54,26,181,116,4,118,57,122,200,104,
    219,180,252,59,224,0,242,134,236,100,104,135,50,202,16,131,
    254,86,124,196,75,117,178,250,2,254,214,136,62,23,38,8,
    74,44,102,89,0,53,19,139,85,187,32,195,228,39,37,15,
    107,222,87,201,42,199,65,65,203,180,87,154,181,87,94,6,
    178,186,114,193,80,179,52,4,173,106,250,62,177,242,249,37,
    126,40,106,223,23,219,70,3,21,239,83,243,65,13,8,81,
    141,45,131,171,221,197,48,219,200,45,190,14,109,127,160,163,
    45,102,118,195,102,239,172,41,212,64,111,85,64,127,88,3,
    93,114,176,125,197,53,48,181,6,25,248,194,16,120,25,193,
    18,130,238,1,22,200,22,12,108,114,9,174,241,68,233,49,
    162,138,73,20,203,230,34,57,235,226,64,107,169,182,177,54,
    31,53,63,44,55,6,144,5,31,39,193,228,40,10,158,60,
    163,51,232,160,176,242,33,163,226,122,179,201,53,225,95,188,
    141,113,126,253,176,226,254,197,114,253,255,151,72,178,230,154,
    209,30,101,33,59,253,159,142,165,59,145,147,35,60,237,56,
    158,186,195,36,24,177,45,204,82,170,175,42,169,20,27,115,
    49,71,22,20,89,14,50,55,204,82,12,197,167,33,50,233,
    70,18,107,126,25,185,31,184,28,199,221,184,112,131,35,156,
    13,240,226,192,120,158,247,69,46,180,130,124,84,112,77,117,
    242,146,186,203,183,165,143,247,184,24,107,199,231,149,86,244,
    5,163,14,202,92,46,106,231,192,84,134,181,188,154,233,96,
    244,27,106,222,165,102,15,174,36,118,247,144,228,33,209,38,
    245,216,24,47,28,161,54,154,142,248,53,237,41,94,119,199,
    167,63,197,29,245,87,129,210,41,109,144,43,116,115,164,75,
    127,171,188,244,163,131,218,255,171,131,50,206,151,143,112,255,
    255,234,151,222,195,171,101,218,251,21,148,137,248,109,62,105,
    64,163,234,253,72,251,164,214,61,166,235,217,141,70,97,198,
    2,138,67,204,173,88,188,157,113,89,231,27,186,126,187,52,
    20,103,75,190,35,211,161,169,124,233,47,64,74,215,103,100,
    253,96,58,149,105,116,89,123,241,204,114,117,67,126,22,192,
    101,170,196,66,235,6,62,175,227,144,196,104,72,197,120,107,
    213,200,187,119,37,70,28,214,81,100,109,46,138,120,100,37,
    29,55,234,144,161,35,8,235,157,110,99,145,76,164,146,139,
    170,215,159,93,116,252,137,36,6,207,108,134,245,48,151,153,
    248,158,248,254,21,4,158,223,34,201,239,42,11,80,224,177,
    133,99,57,130,35,247,194,7,48,205,200,59,80,149,82,179,
    194,99,72,111,212,162,242,135,154,42,144,50,118,169,152,56,
    192,251,181,254,250,227,210,202,159,81,243,243,74,91,140,60,
    93,84,115,1,171,47,7,136,83,78,43,156,69,188,125,26,
    167,58,102,242,104,191,146,101,95,203,242,89,146,133,39,50,
    210,242,240,247,162,201,35,245,224,237,75,159,102,147,0,199,
    239,191,113,69,63,46,21,163,182,22,230,163,156,118,221,92,
    24,69,67,196,104,135,31,245,87,139,106,152,29,237,77,220,
    81,44,157,27,225,168,207,248,168,77,194,96,200,229,40,46,
    144,24,83,154,219,81,186,44,25,77,237,192,107,233,97,110,
    247,242,193,163,235,37,125,115,123,66,62,81,124,130,13,125,
    163,112,54,28,97,27,244,249,203,20,109,209,17,150,88,239,
    56,166,99,59,45,19,1,70,35,219,162,109,58,237,117,81,
    253,239,34,232,218,198,174,227,136,255,2,57,11,15,152,
};

EmbeddedPython embedded_m5_internal_param_MemObject(
    "m5/internal/param_MemObject.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_MemObject.py",
    "m5.internal.param_MemObject",
    data_m5_internal_param_MemObject,
    2031,
    5919);

} // anonymous namespace
