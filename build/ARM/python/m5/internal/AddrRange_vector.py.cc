#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_AddrRange_vector[] = {
    120,156,197,91,123,115,219,198,17,95,128,20,37,210,146,37,
    89,150,228,135,108,51,15,37,76,218,88,109,154,180,211,196,
    227,73,210,244,145,76,171,164,80,166,118,148,52,8,68,156,
    40,200,36,192,0,144,108,186,82,155,70,206,99,218,180,233,
    115,58,157,254,217,233,31,253,30,253,38,253,32,237,254,246,
    0,62,36,168,19,151,34,36,138,59,71,240,120,123,191,125,
    221,237,226,80,167,228,111,140,223,47,85,137,162,199,13,34,
    151,255,13,106,18,181,12,90,55,200,80,6,185,115,116,103,
    140,194,231,200,29,163,7,68,235,38,41,147,14,184,81,160,
    119,76,242,39,229,55,37,106,22,228,138,65,157,10,169,34,
    173,143,209,45,127,150,138,170,68,119,42,20,190,79,134,97,
    248,6,221,118,199,201,157,160,7,60,58,55,202,50,224,4,
    185,21,105,148,201,61,35,141,10,117,102,72,157,161,117,30,
    124,156,214,167,120,168,167,121,168,179,50,212,191,48,148,203,
    223,156,39,119,10,221,121,46,111,163,103,17,61,133,199,89,
    25,101,154,220,105,140,178,201,24,102,186,29,121,224,2,109,
    207,210,250,44,41,254,159,161,3,134,233,206,166,29,207,117,
    59,158,147,142,115,180,62,71,138,255,207,233,142,37,90,171,
    205,179,196,188,255,240,95,141,37,70,241,36,147,93,21,70,
    94,224,219,158,191,25,120,38,190,47,129,64,190,117,144,241,
    68,208,223,129,160,255,73,34,101,215,76,4,189,79,60,176,
    1,57,54,77,218,151,198,190,73,157,26,237,25,180,93,36,
    183,64,123,204,102,12,19,104,24,116,96,210,187,5,116,216,
    103,90,100,209,92,165,98,172,165,188,45,162,209,35,141,211,
    254,24,237,141,209,218,237,61,19,23,238,148,41,252,7,221,
    95,146,65,39,100,80,147,246,152,22,233,160,72,251,37,186,
    197,157,248,210,118,25,240,141,219,123,140,148,175,172,213,138,
    60,219,213,62,184,128,226,122,161,239,180,84,60,203,109,251,
    101,215,13,45,199,111,40,123,87,213,227,32,172,85,210,110,
    65,116,189,237,196,91,150,252,174,0,129,180,218,177,140,23,
    248,42,62,195,141,77,207,119,237,86,224,238,52,85,60,129,
    193,236,77,175,169,108,91,190,124,173,213,14,194,248,187,97,
    24,132,22,100,42,23,155,129,211,253,5,36,90,111,6,145,
    170,129,155,176,177,48,124,140,222,155,109,25,17,19,144,185,
    226,199,174,138,234,161,215,142,89,85,122,68,244,198,104,53,
    40,73,72,244,6,147,149,157,136,21,186,226,52,61,199,95,
    137,188,214,78,211,97,96,209,74,219,109,168,214,243,43,27,
    59,94,211,93,121,217,250,209,74,187,19,111,5,254,10,95,
    243,252,88,177,80,154,43,135,197,113,157,251,156,195,192,119,
    189,134,237,9,36,123,75,53,219,42,156,194,213,75,96,106,
    204,24,147,70,201,40,24,53,99,138,91,99,252,46,24,75,
    230,25,99,213,3,168,58,128,194,160,10,169,9,253,157,68,
    89,172,235,59,38,133,75,48,144,109,254,55,160,81,54,147,
    53,124,103,202,119,63,134,52,244,213,237,2,212,174,47,238,
    137,81,177,117,113,207,27,208,179,79,98,25,99,180,93,34,
    109,49,108,104,218,132,194,14,40,119,199,48,38,15,94,164,
    232,139,193,17,252,25,98,105,179,11,242,165,5,102,245,145,
    24,225,90,13,19,95,21,91,136,183,188,40,184,235,139,196,
    209,22,183,89,99,153,188,217,121,99,99,155,37,21,93,227,
    11,111,7,59,213,186,227,251,65,92,117,92,183,234,196,113,
    232,109,236,196,42,170,198,65,117,57,170,149,161,226,217,212,
    156,186,227,117,218,169,249,64,213,108,62,250,131,235,213,99,
    254,48,39,31,68,254,145,138,217,20,182,2,55,226,235,24,
    162,161,98,11,147,140,207,50,121,57,101,39,54,87,43,165,
    22,18,169,230,102,92,17,99,115,162,200,22,118,184,46,118,
    133,95,239,58,205,29,21,163,127,20,59,49,115,69,83,51,
    26,177,101,93,0,182,20,26,196,101,251,129,239,118,120,102,
    94,125,25,76,47,136,125,77,18,44,108,158,173,107,156,105,
    137,166,216,218,102,204,58,64,20,19,219,18,187,90,0,100,
    18,93,27,73,128,96,27,59,224,48,82,51,37,14,8,26,
    113,180,42,90,248,177,5,19,182,46,131,44,129,92,73,1,
    143,14,245,212,97,212,207,130,147,41,80,235,133,4,84,215,
    89,86,7,156,229,98,207,89,56,208,173,193,232,77,184,70,
    207,232,11,128,29,222,76,44,28,238,196,74,230,175,251,236,
    90,132,97,205,0,100,41,53,73,11,118,214,111,108,141,62,
    99,179,160,7,177,52,235,226,113,130,187,150,167,224,26,90,
    112,207,131,211,100,98,35,83,98,27,21,163,14,5,155,137,
    24,69,132,175,114,163,179,8,17,246,11,111,145,23,171,91,
    254,148,172,58,178,114,201,234,171,227,130,150,169,110,20,97,
    77,155,5,90,72,86,147,8,110,220,14,131,123,157,106,176,
    89,141,41,157,195,141,229,232,250,114,244,34,59,122,245,166,
    132,14,237,234,218,153,67,213,14,217,105,203,242,65,59,162,
    45,78,105,39,203,1,11,25,43,179,232,70,68,43,113,39,
    138,67,132,155,17,203,181,210,149,43,166,249,34,216,84,68,
    168,5,90,228,119,197,144,185,216,129,68,58,217,17,200,183,
    252,126,5,226,5,66,69,216,113,89,107,122,166,2,2,112,
    172,39,7,172,98,100,16,172,167,121,204,87,83,55,42,81,
    215,6,240,46,96,146,176,236,79,73,118,73,6,125,66,208,
    55,171,53,241,5,241,58,188,161,182,57,116,127,143,36,136,
    100,44,81,166,246,41,51,9,51,236,114,209,183,164,171,94,
    177,94,167,207,250,34,208,65,129,12,172,46,133,100,31,212,
    191,186,20,187,94,40,134,242,165,86,144,226,160,187,66,45,
    91,78,132,110,218,49,11,93,199,236,5,179,238,254,133,163,
    205,232,108,104,66,51,176,49,151,215,122,22,132,208,125,217,
    152,51,251,236,226,171,32,207,116,77,194,72,175,141,100,90,
    215,14,199,218,190,21,198,214,241,237,7,224,93,148,217,78,
    151,100,37,213,11,251,107,60,44,152,119,13,126,44,53,248,
    127,119,13,94,73,216,125,32,59,98,80,19,122,62,48,13,
    78,38,120,59,129,125,124,145,212,24,173,151,72,141,99,227,
    138,44,97,44,201,18,120,55,142,198,25,234,101,21,146,49,
    32,177,48,144,13,36,137,197,217,52,177,224,148,96,82,26,
    51,73,238,192,89,64,146,45,156,67,182,128,198,92,146,45,
    172,115,126,49,43,141,249,36,45,88,95,64,50,132,198,34,
    178,15,52,46,144,59,47,141,139,228,46,72,227,18,185,139,
    210,184,12,95,70,212,23,79,74,223,18,77,17,133,7,22,
    33,81,225,170,86,110,215,54,181,217,129,220,27,113,244,130,
    229,221,104,58,173,13,215,185,185,6,38,224,84,79,157,223,
    76,167,61,211,63,109,56,174,113,220,204,229,227,215,210,233,
    239,142,56,114,125,29,6,151,78,91,252,212,13,234,18,174,
    222,218,82,213,150,106,109,48,187,45,175,93,221,108,58,13,
    209,70,33,129,245,70,10,43,22,251,59,188,192,71,136,137,
    171,65,181,30,248,188,140,236,128,95,213,85,156,179,40,183,
    250,76,85,214,160,170,23,85,157,13,254,214,169,199,218,17,
    7,163,136,236,19,157,176,17,201,150,240,206,93,52,115,208,
    166,205,153,168,199,123,223,183,186,218,60,98,132,152,152,219,
    179,61,153,251,88,55,156,92,162,145,47,56,80,219,173,35,
    243,235,90,219,148,86,203,182,145,110,194,250,77,77,146,183,
    243,71,2,141,45,27,241,220,16,96,113,184,157,34,208,153,
    90,119,197,236,119,154,46,12,189,218,29,69,50,119,20,137,
    231,215,195,190,173,12,126,225,143,216,112,96,17,96,251,246,
    145,16,48,52,26,87,245,163,177,190,61,114,221,8,24,112,
    93,31,176,176,20,204,247,179,192,124,158,101,100,139,25,96,
    56,123,117,252,186,234,3,244,220,232,1,193,173,83,206,239,
    12,9,42,195,115,212,7,59,78,51,95,68,136,54,194,246,
    221,97,162,64,134,181,213,131,118,39,175,32,32,134,6,134,
    63,61,97,16,190,186,23,231,10,2,12,223,27,6,68,134,
    171,216,2,195,182,115,3,146,84,129,132,169,125,194,96,218,
    161,218,245,130,157,40,87,48,41,211,247,135,116,249,133,163,
    120,28,119,55,255,48,134,132,43,97,236,12,9,105,62,203,
    222,212,7,108,109,185,34,42,137,201,129,239,198,40,0,249,
    234,116,0,129,111,125,72,64,153,17,193,227,188,60,111,72,
    201,158,88,56,187,35,1,21,237,108,156,18,40,225,172,78,
    62,60,216,246,41,40,74,202,100,154,241,230,40,32,157,130,
    154,52,36,97,220,160,195,43,210,64,58,182,215,75,199,100,
    74,249,46,154,30,247,176,237,173,116,138,53,169,127,117,75,
    144,82,214,209,117,160,118,24,180,85,24,119,116,229,237,155,
    32,79,129,44,15,4,50,87,53,85,172,236,65,13,196,51,
    212,45,143,187,138,211,230,160,99,219,137,132,248,7,182,45,
    57,149,245,2,200,13,144,155,32,47,129,188,2,130,2,165,
    245,61,16,212,156,172,215,65,126,8,130,26,191,245,38,136,
    5,130,188,215,250,9,200,173,1,241,141,46,23,92,1,51,
    12,142,66,92,201,184,108,148,141,18,191,241,154,228,87,249,
    216,151,136,68,143,211,187,149,122,180,98,230,26,95,162,98,
    166,111,188,39,117,179,82,90,40,27,79,11,101,19,40,142,
    37,119,218,39,210,26,90,57,173,161,233,90,217,100,90,43,
    155,74,107,101,103,211,90,217,116,90,43,155,73,107,101,179,
    105,173,236,92,90,43,155,75,107,101,231,211,90,217,124,90,
    43,91,72,107,101,139,105,173,236,66,90,43,187,72,238,133,
    180,122,118,49,169,158,185,151,164,177,68,238,101,105,92,33,
    119,73,26,87,201,189,34,141,107,228,94,149,70,149,220,107,
    210,120,132,220,170,52,30,37,247,17,105,60,70,238,163,210,
    120,156,220,199,164,177,76,238,227,210,120,130,212,147,180,93,
    163,245,167,200,93,150,43,79,163,100,247,68,166,123,62,68,
    201,78,10,95,57,212,78,90,221,96,114,18,149,58,235,217,
    156,103,109,125,131,146,155,10,199,85,233,30,114,199,126,49,
    195,143,36,168,97,210,185,198,210,148,105,64,199,134,251,74,
    87,67,7,135,106,112,239,81,126,145,95,162,99,251,200,44,
    31,66,232,75,89,66,183,113,139,224,190,10,131,28,19,63,
    28,239,232,227,251,193,48,160,50,45,137,183,247,65,208,204,
    61,149,213,76,195,97,224,92,200,134,211,84,126,142,104,244,
    26,47,60,163,97,192,156,207,2,211,14,218,185,1,193,38,
    148,249,197,3,32,30,126,119,122,37,91,41,13,21,71,77,
    175,158,123,206,55,41,234,233,113,223,25,13,188,232,84,225,
    245,184,239,142,6,30,111,97,79,17,94,143,251,221,33,225,
    29,19,213,153,1,47,109,173,188,209,157,73,209,105,230,247,
    70,3,142,109,255,244,192,117,153,119,70,3,46,58,77,112,
    93,230,247,135,4,183,152,5,206,105,183,149,239,230,95,33,
    211,124,127,70,67,172,101,11,89,120,84,171,29,231,119,247,
    66,238,193,128,227,222,48,64,230,179,128,68,222,253,220,110,
    197,234,99,154,204,112,255,196,245,81,111,42,39,191,244,65,
    31,105,102,142,63,31,210,87,178,85,114,215,105,231,235,41,
    162,23,230,250,139,97,244,114,53,11,75,3,71,165,154,205,
    160,158,107,122,135,201,14,112,254,240,196,13,110,67,53,60,
    63,87,131,19,142,191,28,6,72,230,174,28,97,57,207,93,
    57,243,251,104,24,16,153,203,75,152,175,58,176,178,104,150,
    7,195,64,201,244,254,48,79,133,192,241,193,240,193,48,48,
    50,19,113,78,190,236,13,167,126,39,223,219,176,9,211,143,
    105,184,176,156,189,228,135,78,148,243,109,88,89,247,193,246,
    147,1,64,133,126,64,47,244,0,49,26,253,80,210,249,190,
    195,221,114,142,215,184,229,207,224,0,248,158,28,231,181,77,
    125,6,188,87,211,42,14,196,8,95,221,181,15,195,215,213,
    72,228,211,125,135,111,33,2,249,98,196,5,48,220,189,248,
    148,40,61,108,59,109,20,232,60,191,255,79,237,94,202,180,
    215,157,104,75,27,108,174,26,150,51,246,41,235,95,15,227,
    133,153,54,187,25,6,126,126,231,83,96,174,194,241,243,19,
    143,138,185,134,18,120,3,24,254,102,200,48,146,157,9,69,
    145,215,240,79,33,19,18,190,191,29,5,164,80,73,22,145,
    59,36,205,247,139,81,64,242,124,158,110,156,63,36,205,247,
    119,67,66,202,172,37,179,180,84,184,123,10,7,137,18,198,
    191,31,38,40,100,238,49,234,78,219,169,123,57,230,225,216,
    99,164,76,255,112,4,206,192,41,129,83,63,180,253,167,116,
    126,181,175,80,255,17,1,11,103,161,245,161,128,222,121,0,
    220,206,146,219,76,214,251,32,27,32,56,129,99,225,120,135,
    133,211,6,214,54,72,19,196,7,193,253,40,11,55,60,100,
    79,96,161,84,107,161,230,103,161,124,100,161,78,97,33,57,
    182,62,4,193,134,223,194,30,211,194,70,198,250,12,228,87,
    32,114,44,1,97,214,130,23,91,48,17,235,143,32,127,6,
    249,11,200,95,65,254,54,224,173,201,161,133,35,91,20,156,
    34,182,222,25,16,239,232,100,140,227,176,16,71,132,227,13,
    56,74,80,250,31,199,7,142,121,21,143,94,147,221,213,161,
    135,211,53,18,236,204,244,243,77,157,8,103,24,200,154,238,
    74,69,159,65,76,14,124,64,193,178,177,88,117,90,250,33,
    89,121,12,212,122,4,228,177,84,241,18,110,244,163,110,242,
    84,153,126,102,143,183,126,242,196,132,60,32,97,93,7,193,
    153,137,24,207,63,30,58,166,131,227,33,33,231,64,17,95,
    16,105,100,215,219,251,187,229,160,23,253,152,140,126,214,240,
    38,42,155,17,108,12,207,213,150,167,203,70,201,196,51,219,
    5,163,98,76,25,69,99,114,170,92,40,151,202,99,5,214,
    29,174,204,25,149,66,185,178,176,88,54,42,230,194,83,101,
    227,191,85,77,238,49,
};

EmbeddedPython embedded_m5_internal_AddrRange_vector(
    "m5/internal/AddrRange_vector.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/AddrRange_vector.py",
    "m5.internal.AddrRange_vector",
    data_m5_internal_AddrRange_vector,
    3190,
    16766);

} // anonymous namespace