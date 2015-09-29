#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubySystem[] = {
    120,156,189,89,95,115,219,198,17,223,3,72,74,164,68,75,
    178,254,217,150,100,33,73,149,50,153,70,106,221,186,233,52,
    30,79,221,184,157,166,51,145,83,168,51,118,152,76,81,16,
    56,137,160,64,128,5,142,118,232,145,94,42,79,219,183,190,
    245,11,116,250,208,239,209,239,213,238,238,1,16,68,81,137,
    50,41,37,137,55,199,189,189,189,253,243,219,189,5,228,65,
    246,83,197,207,47,44,128,244,31,2,192,199,63,1,33,64,
    95,64,91,128,144,2,252,101,56,174,66,242,19,240,171,240,
    6,160,109,128,52,224,12,39,38,124,97,64,52,207,123,106,
    16,154,76,17,48,106,128,172,64,187,10,207,163,37,168,200,
    26,28,55,32,249,35,8,33,34,1,47,252,25,240,103,225,
    13,74,199,73,157,5,206,130,223,224,73,29,252,57,158,52,
    96,180,8,114,14,218,40,124,6,218,77,20,245,62,138,186,
    197,162,254,67,162,124,92,89,1,191,73,236,168,203,231,196,
    89,33,78,62,227,22,75,89,200,53,91,132,246,82,62,191,
    93,154,47,151,230,43,165,249,106,105,190,86,154,175,151,230,
    119,120,190,0,114,9,122,119,161,119,15,122,27,112,136,206,
    90,44,52,218,4,105,66,111,11,218,91,32,241,111,19,206,
    208,159,254,82,105,199,125,222,113,187,216,177,205,59,44,104,
    91,32,241,111,91,239,168,193,65,107,21,99,20,252,23,127,
    90,24,35,80,243,56,188,148,73,26,196,145,19,68,135,113,
    96,208,122,141,6,138,168,71,195,76,22,218,143,41,180,255,
    6,142,171,111,100,161,61,5,20,44,200,150,208,128,83,158,
    156,26,48,106,193,137,128,94,5,124,19,78,240,152,42,41,
    112,36,224,204,128,47,77,98,56,197,177,130,193,184,15,21,
    165,227,218,227,96,104,73,51,112,90,133,147,42,28,188,56,
    49,136,112,92,135,228,95,240,122,147,133,206,178,80,3,78,
    112,172,192,89,5,78,107,240,28,153,144,212,171,147,249,226,
    197,9,90,138,148,131,86,5,181,221,47,153,75,166,248,65,
    18,185,125,169,150,112,238,12,220,196,237,59,246,176,51,58,
    24,165,74,246,91,141,156,45,78,119,7,174,234,218,188,207,
    36,135,244,7,138,229,197,145,84,115,56,57,12,34,223,233,
    199,254,48,148,106,150,132,57,135,65,40,29,135,23,63,233,
    15,226,68,253,42,73,226,196,38,159,50,49,140,221,98,7,
    121,212,11,227,84,182,232,52,62,198,38,241,138,184,15,7,
    44,145,20,96,93,105,179,47,83,47,9,6,10,67,165,37,
    18,55,73,107,81,144,120,72,159,225,176,55,76,49,160,123,
    110,24,184,209,94,26,244,135,161,171,98,36,12,252,35,217,
    127,184,215,25,6,161,191,247,196,254,116,111,48,82,221,56,
    218,67,90,16,41,137,78,9,247,198,221,177,139,60,183,73,
    240,171,224,200,9,216,36,167,43,195,129,76,154,68,189,71,
    135,138,69,49,47,106,194,20,45,209,196,89,21,63,166,216,
    52,230,196,126,64,70,121,100,40,1,202,204,33,244,79,224,
    96,97,172,143,13,72,54,9,32,61,252,19,20,81,132,201,
    1,173,25,188,246,59,242,134,166,246,76,10,187,38,158,48,
    168,16,93,200,249,136,226,28,1,35,163,10,189,26,104,196,
    32,208,52,132,146,17,141,200,78,98,12,20,94,129,244,239,
    23,37,68,139,128,222,198,164,71,210,26,30,245,103,6,225,
    65,139,20,223,103,44,168,110,144,198,175,34,246,56,205,57,
    109,14,208,39,159,141,158,117,122,210,83,233,54,18,62,143,
    135,150,231,70,81,172,44,215,247,45,87,169,36,232,12,149,
    76,45,21,91,59,105,171,78,33,94,202,225,84,200,27,13,
    114,248,80,168,17,62,250,139,31,120,10,191,44,243,23,246,
    127,42,21,66,161,27,251,41,210,73,196,145,84,54,41,169,
    110,225,240,36,63,142,49,215,170,229,8,73,101,120,168,26,
    12,54,55,77,29,62,142,232,140,43,218,253,210,13,135,82,
    17,127,170,92,133,167,210,84,31,52,101,100,221,33,219,114,
    211,200,93,78,20,71,254,8,53,11,188,29,58,244,14,227,
    107,30,8,97,171,136,174,25,28,107,208,68,180,45,26,30,
    25,81,201,176,197,184,90,35,147,129,99,45,178,2,129,24,
    59,195,50,210,50,184,14,176,53,156,104,22,205,104,179,77,
    16,182,55,104,216,164,97,43,55,120,122,86,55,199,173,126,
    64,39,25,108,170,103,102,70,21,201,178,127,33,89,238,158,
    39,11,22,186,3,2,189,65,169,113,14,122,147,204,78,30,
    103,8,167,116,194,32,227,114,9,215,236,12,123,145,140,172,
    229,144,180,9,103,101,176,29,149,192,102,83,28,24,105,246,
    221,171,28,183,125,147,142,59,210,142,123,72,39,205,103,24,
    105,50,54,26,194,163,0,27,153,27,217,133,79,113,50,90,
    39,23,150,157,183,142,151,213,243,168,201,183,14,223,92,124,
    223,235,186,160,125,170,39,21,66,211,161,9,107,217,109,146,
    82,26,15,146,248,171,145,21,31,90,10,114,29,30,237,164,
    187,59,233,71,152,232,214,99,46,29,58,213,117,50,39,114,
    144,96,210,214,249,139,78,68,135,147,210,201,174,3,116,50,
    221,204,28,27,118,45,215,157,84,37,84,110,166,236,215,70,
    225,87,82,243,35,58,166,193,78,53,97,29,63,13,193,186,
    56,49,87,58,238,8,120,21,63,191,36,247,146,133,18,168,
    199,179,15,180,166,108,4,153,99,127,255,2,42,166,102,130,
    253,62,202,124,154,167,81,13,10,12,208,199,36,37,9,217,
    127,5,238,146,4,252,5,40,222,24,214,44,23,56,235,232,
    67,97,91,38,246,63,0,23,145,9,87,148,161,115,202,200,
    202,12,166,92,250,33,179,234,27,235,183,240,183,82,5,58,
    51,65,208,237,98,102,125,80,249,118,169,20,89,200,64,185,
    214,13,82,185,152,174,20,150,174,155,18,155,78,76,179,72,
    204,243,98,86,244,47,88,109,166,135,161,89,125,128,67,186,
    124,114,142,32,42,221,27,98,217,40,225,226,7,52,124,80,
    64,66,228,180,169,168,181,61,94,107,75,55,140,163,235,219,
    111,232,236,10,107,187,80,227,92,56,23,81,128,189,154,131,
    253,65,1,118,201,37,247,13,119,195,52,26,20,227,51,67,
    224,163,11,182,18,244,212,80,1,89,133,118,141,210,130,155,
    61,145,101,141,200,11,19,21,180,11,245,156,189,177,175,253,
    84,132,89,71,144,134,175,166,92,8,40,136,143,66,183,223,
    241,221,199,95,208,33,116,146,151,231,145,145,171,189,88,86,
    155,114,64,92,165,57,127,253,97,174,254,203,41,23,129,31,
    161,204,66,109,134,188,31,123,156,249,191,239,74,171,47,251,
    29,60,174,27,12,172,195,208,61,226,104,152,153,89,207,114,
    179,20,135,115,252,174,76,169,188,236,199,150,23,71,88,145,
    135,30,106,105,249,18,219,127,233,91,31,88,92,206,173,32,
    181,220,14,174,186,158,210,152,190,152,144,220,114,185,201,81,
    202,221,213,241,43,154,222,64,52,29,124,168,11,176,141,252,
    50,119,139,126,216,40,106,51,119,142,58,65,240,74,195,182,
    94,141,116,73,250,41,13,239,209,176,3,55,83,194,247,80,
    102,155,132,147,131,106,88,53,234,66,45,94,200,198,207,104,
    87,122,57,39,27,226,26,57,169,95,36,100,153,89,35,78,
    57,67,207,146,52,214,169,140,183,27,57,113,142,199,121,38,
    54,115,226,45,30,23,152,184,152,19,151,120,188,205,196,229,
    156,184,194,227,42,19,215,114,226,58,143,119,152,120,55,39,
    222,227,113,131,137,155,57,113,139,199,251,76,220,206,137,22,
    143,111,49,241,237,252,245,201,59,76,252,30,180,119,232,61,
    2,81,222,165,90,51,243,93,107,13,103,236,13,228,106,231,
    255,90,98,236,7,55,172,181,253,99,200,26,139,171,202,139,
    40,155,212,212,229,165,39,242,190,188,108,15,63,207,175,79,
    64,187,227,37,210,85,82,199,229,222,212,45,228,234,164,143,
    244,139,232,228,102,20,207,36,31,22,166,156,113,39,53,90,
    41,117,205,28,44,241,28,219,30,236,172,79,216,90,199,208,
    205,245,57,234,42,133,209,43,56,68,242,149,51,110,184,238,
    158,73,29,119,48,144,145,127,222,25,243,202,148,3,77,229,
    47,130,243,54,6,219,224,21,252,92,78,43,50,164,100,23,
    135,169,90,36,210,244,3,198,144,76,243,80,181,168,166,159,
    87,119,155,2,165,235,121,81,202,237,159,23,174,127,111,18,
    222,92,207,147,248,116,210,113,189,227,32,194,182,9,149,147,
    244,188,245,45,184,177,213,226,176,78,90,84,59,19,197,132,
    33,94,84,250,110,13,240,146,229,3,175,199,73,135,145,133,
    227,11,147,183,119,194,216,59,118,210,224,181,116,58,35,236,
    171,175,62,232,18,103,126,208,248,130,186,63,105,123,55,86,
    78,136,13,130,62,225,27,88,72,52,61,26,22,148,201,42,
    97,137,137,147,81,118,116,160,190,70,249,75,156,185,242,227,
    11,234,221,73,219,163,97,223,137,15,113,211,159,134,50,242,
    16,174,124,210,53,89,233,40,202,208,75,43,106,107,146,128,
    65,119,196,250,242,17,95,207,65,146,249,173,104,70,80,214,
    36,246,196,141,252,152,152,165,207,50,191,145,137,196,210,251,
    213,18,77,189,125,245,166,224,181,75,0,99,217,215,96,35,
    233,205,66,122,70,229,250,194,245,222,151,161,84,242,82,245,
    227,96,101,111,98,124,196,67,18,143,28,71,63,134,227,247,
    208,113,110,162,35,251,25,165,21,9,39,248,82,71,86,195,
    158,108,245,210,111,189,82,23,220,232,142,253,239,64,107,247,
    22,228,143,159,163,212,230,107,115,161,40,64,28,204,188,237,
    228,75,133,178,96,223,237,235,119,152,252,150,206,38,1,246,
    59,121,13,227,27,65,191,137,224,135,126,253,74,5,47,16,
    238,194,185,233,182,119,137,78,58,247,31,238,230,6,238,106,
    3,15,130,254,32,148,159,114,22,240,139,246,254,67,6,200,
    101,206,39,89,51,159,241,110,76,100,194,69,253,254,151,31,
    52,47,175,127,76,181,66,250,25,207,214,213,60,79,227,190,
    139,244,201,167,160,210,153,132,165,177,117,63,161,93,171,99,
    84,68,65,128,32,120,173,95,43,231,100,126,185,55,73,45,
    66,231,5,10,183,226,99,221,8,67,49,145,71,1,126,73,
    88,212,133,45,217,157,77,136,153,156,196,229,237,55,128,93,
    253,40,171,95,173,61,166,228,78,127,141,3,189,70,174,47,
    212,69,205,160,127,81,152,162,33,154,162,34,230,155,117,179,
    94,171,87,77,196,55,81,150,69,195,172,55,230,197,197,223,
    109,68,121,195,216,94,174,139,255,1,160,210,227,215,
};

EmbeddedPython embedded_m5_internal_param_RubySystem(
    "m5/internal/param_RubySystem.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_RubySystem.py",
    "m5.internal.param_RubySystem",
    data_m5_internal_param_RubySystem,
    2398,
    7407);

} // anonymous namespace
