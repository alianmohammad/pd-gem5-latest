#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_SimObject_vector[] = {
    120,156,197,91,123,115,220,86,21,63,210,62,236,221,216,177,
    29,191,242,112,146,237,35,237,182,208,24,74,3,67,155,201,
    180,165,64,219,1,183,200,29,146,186,165,170,188,186,182,229,
    236,74,91,73,118,178,193,134,82,135,182,48,64,121,14,195,
    240,39,195,31,124,15,190,9,31,4,206,239,92,105,31,182,
    204,180,93,175,108,123,207,92,95,105,239,185,191,243,186,247,
    28,93,53,40,249,41,241,231,197,26,81,244,170,65,228,242,
    159,65,77,162,150,65,107,6,25,202,32,119,150,238,150,40,
    124,142,220,18,61,36,90,51,73,153,116,192,141,2,189,99,
    146,63,33,223,41,83,179,32,61,6,117,170,164,138,180,86,
    162,219,254,12,21,85,153,238,86,41,124,159,12,195,240,13,
    186,227,142,145,59,78,15,121,116,110,84,100,192,113,114,171,
    210,168,144,123,70,26,85,234,76,147,58,67,107,60,248,24,
    173,77,242,80,79,243,80,103,101,168,127,99,40,151,175,204,
    145,59,137,219,121,46,111,227,206,34,238,20,30,103,101,148,
    41,114,167,48,202,6,99,152,238,222,200,3,23,104,123,134,
    214,102,72,241,223,52,29,48,204,4,194,57,90,155,77,225,
    204,245,181,231,165,61,147,14,118,174,59,216,130,12,182,72,
    107,139,164,248,111,65,15,86,166,213,250,60,75,213,251,47,
    255,212,89,170,20,79,48,217,85,97,228,5,190,237,249,27,
    129,103,226,122,25,4,58,104,128,140,37,202,248,14,148,241,
    47,18,77,184,102,162,140,125,226,129,13,76,168,105,210,190,
    52,246,77,234,212,105,207,160,237,34,185,5,218,99,54,37,
    76,96,211,160,3,147,222,45,224,134,125,166,69,22,223,21,
    42,198,90,19,219,34,62,61,210,24,237,151,104,175,68,171,
    119,246,76,116,220,173,80,248,79,122,176,36,131,142,203,160,
    38,237,49,45,210,65,145,246,203,116,155,111,226,174,237,10,
    224,27,119,246,24,41,247,172,214,139,60,219,149,62,184,128,
    226,122,161,239,180,84,60,195,109,123,213,107,189,177,190,173,
    26,177,189,203,36,8,235,213,244,182,32,186,222,118,226,45,
    75,190,87,128,64,90,237,88,198,11,124,21,159,225,198,134,
    231,187,118,43,112,119,154,42,30,199,96,246,134,215,84,182,
    45,23,95,107,181,131,48,254,110,24,6,161,5,153,74,103,
    51,112,186,223,128,68,27,205,32,82,117,112,19,54,22,134,
    143,113,247,70,91,70,196,4,100,174,248,178,171,162,70,232,
    181,99,86,149,30,17,119,99,180,58,148,36,36,122,131,201,
    242,78,196,10,93,118,154,158,227,47,71,94,107,167,233,48,
    176,104,185,237,110,170,214,141,229,245,29,175,233,46,191,100,
    253,112,185,221,137,183,2,127,153,251,60,63,86,44,148,230,
    242,97,113,92,231,123,206,97,224,123,222,166,237,9,36,123,
    75,53,219,42,156,68,239,69,48,53,166,141,9,163,108,20,
    140,186,49,201,173,18,127,10,198,146,121,198,88,241,0,170,
    1,160,48,168,66,106,66,255,32,81,22,235,250,174,73,225,
    18,12,100,155,255,12,104,148,205,100,21,215,76,185,246,35,
    72,67,247,110,23,160,118,221,185,39,70,197,214,197,119,222,
    132,158,125,18,203,40,209,118,153,180,197,176,161,105,19,10,
    59,160,124,59,134,49,121,240,34,69,159,13,142,224,79,19,
    75,155,221,148,187,22,152,213,71,98,132,171,117,76,124,69,
    108,33,222,242,162,224,158,47,18,71,91,220,102,149,101,242,
    102,71,139,43,186,202,29,111,7,59,181,134,227,251,65,92,
    115,92,183,230,196,113,232,173,239,196,42,170,197,65,237,90,
    84,175,64,197,51,169,57,117,199,235,180,83,243,129,170,217,
    124,244,63,174,199,90,176,227,89,249,71,228,31,169,152,77,
    97,43,112,35,238,199,16,155,42,182,48,201,248,44,147,151,
    82,118,98,115,245,114,106,33,145,106,110,196,85,49,54,39,
    138,108,97,135,126,177,43,124,123,215,105,238,168,24,247,71,
    177,19,51,87,52,53,163,17,91,214,121,96,75,161,65,92,
    182,31,248,110,135,103,230,53,174,129,233,121,177,175,9,130,
    133,205,179,117,141,49,45,211,36,91,219,180,217,0,136,98,
    98,91,98,87,11,128,76,162,107,35,9,16,108,99,7,28,
    70,234,166,196,1,65,35,142,86,67,11,95,182,96,194,214,
    37,144,37,144,203,41,224,209,161,158,60,140,250,89,112,50,
    5,106,163,144,128,234,58,203,202,128,179,92,232,57,11,7,
    186,85,24,189,9,215,232,25,125,1,176,195,91,137,133,195,
    157,88,201,124,185,207,174,69,24,214,52,64,150,83,147,180,
    96,103,253,198,182,217,103,108,22,244,32,150,102,93,56,78,
    112,87,243,20,220,166,22,220,13,112,154,72,108,100,82,108,
    163,106,52,160,96,51,17,163,136,240,21,110,116,22,33,194,
    126,225,45,242,98,117,219,159,148,85,71,86,46,89,161,117,
    92,208,50,213,141,34,172,105,163,64,11,201,106,18,193,141,
    219,97,112,191,83,11,54,106,49,165,115,184,121,45,186,126,
    45,122,129,29,189,118,75,66,135,118,117,237,204,161,106,135,
    236,180,21,249,71,59,162,45,78,105,39,203,1,11,25,43,
    179,232,70,68,43,113,39,138,67,132,155,17,203,181,218,149,
    43,166,249,2,216,84,69,168,5,90,228,79,213,144,185,216,
    129,124,79,118,4,114,149,63,47,67,188,64,168,8,187,50,
    107,85,207,84,64,0,142,245,228,128,85,140,12,130,245,52,
    143,249,74,234,70,101,234,218,0,62,5,76,18,150,253,9,
    201,46,201,160,143,9,250,102,181,38,190,32,94,135,15,212,
    54,139,219,223,35,9,34,25,75,148,169,125,202,76,194,12,
    187,92,244,45,185,85,175,88,175,211,167,125,17,232,160,64,
    6,86,151,66,178,15,234,95,93,138,93,47,20,67,249,92,
    43,72,113,208,93,161,150,45,39,194,109,218,49,11,93,199,
    236,5,179,238,254,133,163,205,232,108,104,92,51,176,49,151,
    215,122,22,132,208,125,201,152,53,251,236,226,171,32,207,116,
    77,194,72,251,70,50,173,171,135,99,109,223,10,99,235,248,
    246,42,120,23,101,182,83,101,89,73,245,194,254,26,15,11,
    230,93,131,47,165,6,255,159,174,193,43,9,187,15,101,71,
    12,106,66,207,7,166,193,9,7,111,39,176,215,47,146,42,
    209,90,153,212,24,54,174,200,36,74,73,38,193,187,113,52,
    206,80,47,243,144,172,2,201,135,129,140,33,73,62,206,166,
    201,7,167,13,19,210,152,78,242,11,206,20,146,140,226,28,
    50,10,52,102,147,140,98,109,14,105,1,26,243,73,90,192,
    41,1,39,76,104,44,34,67,65,227,60,185,243,210,184,64,
    238,130,52,46,146,187,40,141,75,240,101,68,125,241,164,244,
    35,209,20,81,120,96,17,18,21,174,104,229,118,109,83,155,
    29,200,253,17,71,47,88,222,205,166,211,90,119,157,91,171,
    96,2,78,141,212,249,205,116,218,211,253,211,134,227,26,199,
    205,92,254,253,90,58,253,221,17,71,174,175,195,224,210,105,
    139,159,186,65,67,194,213,91,91,170,214,82,173,117,102,183,
    229,181,107,27,77,103,83,180,81,72,96,189,145,194,138,197,
    254,14,47,240,17,98,226,74,80,107,4,62,47,35,59,224,
    87,115,21,231,44,202,173,61,83,147,53,168,230,69,53,103,
    157,175,58,141,88,59,226,96,20,145,125,162,19,110,70,178,
    37,188,123,15,205,28,180,105,115,38,234,241,222,247,173,174,
    54,143,24,33,38,230,246,108,79,230,94,234,134,147,139,52,
    242,5,7,106,187,125,100,126,93,107,155,212,106,217,54,210,
    77,88,191,169,73,242,54,119,36,208,216,178,17,207,13,1,
    22,135,59,41,2,157,169,117,87,204,126,167,233,194,208,171,
    221,81,36,179,71,145,120,126,35,236,219,202,224,27,254,136,
    13,7,22,1,182,111,31,9,1,67,163,113,85,63,26,235,
    219,35,215,141,128,1,215,181,1,11,75,193,124,63,11,204,
    111,178,140,108,49,3,12,103,175,142,223,80,125,128,158,27,
    61,32,184,117,202,249,157,33,65,101,120,142,250,96,199,105,
    230,139,8,209,70,216,190,59,76,20,200,176,182,70,208,238,
    228,21,4,196,208,192,240,39,39,12,194,87,247,227,92,65,
    128,225,123,195,128,200,112,21,91,96,216,118,110,64,146,42,
    144,48,181,79,24,76,59,84,187,94,176,19,229,10,38,101,
    250,254,144,46,191,112,20,143,227,238,230,31,198,144,112,37,
    140,157,33,33,205,103,217,155,250,128,173,45,87,68,101,49,
    57,240,93,31,5,32,95,157,14,32,240,109,12,9,40,51,
    34,120,156,151,231,13,41,217,19,11,103,119,36,160,162,157,
    245,83,2,37,156,213,201,135,7,219,62,5,69,73,153,76,
    51,222,24,5,164,83,80,147,134,36,140,55,233,240,138,52,
    144,142,237,245,210,49,153,82,190,139,166,199,119,216,246,86,
    58,197,186,212,191,186,37,72,41,235,232,58,80,59,12,218,
    42,140,59,186,242,246,77,144,167,64,174,13,4,50,87,53,
    85,172,236,65,13,196,211,212,45,143,187,138,211,230,160,99,
    219,137,132,248,11,182,45,57,149,245,60,200,77,144,91,32,
    47,130,188,12,130,2,165,245,61,16,212,156,172,215,65,126,
    0,130,26,191,245,38,136,5,130,188,215,250,49,200,237,1,
    241,141,46,23,92,6,51,12,142,66,92,217,184,100,84,140,
    50,127,240,59,193,191,149,99,127,69,36,122,156,222,163,212,
    163,21,51,215,248,28,21,51,253,112,62,169,155,149,211,66,
    217,88,90,40,27,71,113,44,121,26,63,158,214,208,42,105,
    13,77,215,202,38,210,90,217,100,90,43,59,155,214,202,166,
    210,90,217,116,90,43,155,73,107,101,231,210,90,217,108,90,
    43,155,75,107,101,243,105,173,108,33,173,149,45,166,181,178,
    243,105,173,236,2,185,231,211,234,217,133,164,122,230,94,148,
    198,18,185,151,164,113,153,220,37,105,92,33,247,178,52,174,
    146,123,69,26,53,114,175,74,227,17,114,107,210,120,148,220,
    71,164,241,24,185,143,74,227,113,114,31,147,198,53,114,31,
    151,198,19,164,158,164,237,58,173,61,69,238,53,233,121,26,
    37,187,39,50,221,243,11,148,236,164,240,149,67,237,164,221,
    13,38,39,81,169,179,158,205,121,214,214,55,40,121,168,112,
    92,149,238,11,238,216,47,100,248,145,4,53,76,58,215,88,
    154,50,13,233,216,112,95,237,106,232,224,80,13,238,61,202,
    47,242,91,105,253,237,75,167,73,75,89,66,183,241,136,224,
    129,10,131,28,19,63,28,239,232,227,27,15,3,42,211,146,
    120,123,31,4,205,220,83,89,205,116,103,24,56,231,179,225,
    52,149,159,35,26,189,198,11,207,221,97,192,204,101,129,105,
    7,237,220,128,96,19,202,252,238,13,128,248,226,187,211,203,
    217,74,217,84,113,212,244,26,185,231,124,19,162,158,30,247,
    251,163,129,23,157,42,188,30,247,206,104,224,241,22,246,20,
    225,245,184,63,24,18,222,49,81,157,25,240,210,214,202,27,
    221,153,20,157,102,254,211,209,128,99,219,63,61,112,93,230,
    123,163,1,23,157,38,184,46,243,253,33,193,45,102,129,115,
    218,109,229,187,249,87,200,52,223,159,209,16,107,217,66,22,
    30,213,106,199,249,61,189,144,103,48,224,248,243,97,128,204,
    103,1,137,188,7,185,61,138,213,199,52,153,225,135,39,174,
    143,70,83,57,249,165,15,250,72,51,115,252,197,144,190,146,
    173,146,123,78,59,95,79,17,189,48,215,143,134,209,203,149,
    44,44,155,56,42,213,108,6,141,92,211,59,76,118,128,243,
    193,137,27,220,186,218,244,252,92,13,78,56,62,28,6,72,
    230,174,28,97,57,207,93,57,243,251,229,48,32,50,151,151,
    48,95,117,96,101,209,44,63,30,6,74,166,247,135,121,42,
    4,142,15,134,159,12,3,35,51,17,231,228,203,94,119,26,
    119,243,125,12,155,48,253,148,134,11,203,217,75,126,232,68,
    57,63,134,149,117,31,108,127,53,0,168,208,15,232,249,30,
    32,70,163,95,74,154,235,59,220,45,231,120,141,219,254,52,
    14,128,239,201,113,94,219,212,103,192,123,53,173,226,64,140,
    240,213,61,251,48,124,93,141,68,193,166,239,240,45,68,32,
    23,70,92,0,195,211,139,95,19,165,135,109,167,140,2,205,
    241,231,75,106,247,98,166,189,238,68,91,218,96,115,213,176,
    156,177,79,89,255,110,24,47,204,180,217,141,48,240,243,59,
    159,2,115,21,142,159,157,120,84,204,53,148,192,27,192,240,
    247,67,134,145,236,76,40,138,188,77,255,20,50,33,225,251,
    135,81,64,10,149,100,17,185,67,210,124,255,56,10,72,158,
    207,211,141,243,135,164,249,254,105,72,72,153,181,100,150,150,
    10,119,79,225,32,81,194,248,207,195,4,133,204,61,70,195,
    105,59,13,47,199,60,28,123,140,148,233,95,142,192,25,56,
    37,112,234,135,182,255,154,206,175,254,21,234,63,34,96,225,
    44,180,62,20,208,59,15,128,199,89,242,152,201,122,31,100,
    29,4,39,112,44,28,239,176,112,218,192,218,6,105,130,248,
    32,120,66,104,225,209,153,236,9,44,60,45,176,80,142,182,
    80,213,180,80,32,179,80,117,177,62,4,65,94,105,33,117,
    177,176,95,182,176,61,179,176,158,235,99,9,191,5,193,146,
    97,33,58,89,48,126,11,210,181,0,193,250,27,200,223,7,
    188,53,57,180,112,100,139,130,83,196,214,59,3,226,29,157,
    140,113,28,54,192,224,56,222,128,163,4,229,255,115,124,224,
    152,223,226,209,62,217,93,29,122,57,93,35,129,83,235,247,
    155,58,17,206,48,144,53,213,149,138,62,131,152,28,248,128,
    130,101,99,177,226,180,244,75,178,242,26,168,245,8,200,99,
    169,226,37,220,232,87,221,228,173,50,253,206,30,111,253,228,
    141,9,121,65,194,186,14,130,51,19,49,222,127,60,116,76,
    7,199,67,66,206,129,34,238,144,235,173,27,215,83,137,93,
    111,59,161,211,234,169,70,222,245,110,221,144,87,209,251,111,
    115,67,135,219,243,135,122,89,81,30,235,233,129,18,33,103,
    151,241,251,185,231,160,110,253,246,141,126,133,241,22,10,166,
    17,14,190,224,117,221,202,84,197,40,155,120,21,188,96,84,
    141,73,163,104,76,76,86,10,149,114,165,84,96,147,64,207,
    172,81,45,84,170,11,139,21,163,106,78,200,57,147,133,167,
    42,198,255,0,232,137,25,148,
};

EmbeddedPython embedded_m5_internal_SimObject_vector(
    "m5/internal/SimObject_vector.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/SimObject_vector.py",
    "m5.internal.SimObject_vector",
    data_m5_internal_SimObject_vector,
    3240,
    16895);

} // anonymous namespace
