#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DMASequencer[] = {
    120,156,189,88,239,114,220,72,17,239,145,180,107,239,218,27,
    219,241,191,56,113,98,37,119,134,229,138,179,33,16,142,226,
    82,41,194,133,42,142,170,248,114,90,170,146,91,40,116,178,
    52,187,214,90,43,45,210,108,114,123,101,127,193,41,224,27,
    15,65,241,129,23,224,9,120,2,94,8,186,123,36,89,182,
    215,71,10,176,237,213,212,168,213,211,51,221,253,235,158,158,
    241,33,255,171,225,243,83,27,32,251,167,0,8,240,39,32,
    2,24,10,232,10,16,82,64,176,12,135,53,72,127,8,65,
    13,222,2,116,13,144,6,156,96,199,132,95,27,16,207,243,
    152,58,68,38,83,4,76,154,32,45,232,214,224,101,188,4,
    150,172,195,97,19,210,47,65,8,17,11,120,21,204,64,48,
    11,111,81,58,118,26,44,112,22,130,38,119,26,16,204,113,
    167,9,147,69,144,115,208,69,225,51,208,109,161,168,15,80,
    212,13,22,245,15,18,21,224,151,21,8,90,196,142,107,249,
    130,56,45,226,228,57,110,176,148,133,98,101,139,208,93,42,
    250,55,43,253,229,74,127,165,210,95,173,244,215,42,253,245,
    74,255,86,165,191,81,233,223,174,244,239,84,250,155,149,254,
    93,238,47,128,92,130,193,61,24,108,193,192,134,30,26,122,
    177,212,230,62,72,19,6,15,160,251,0,36,254,238,195,9,
    250,34,88,170,140,120,143,71,220,44,71,188,207,35,182,161,
    187,13,18,127,239,235,17,117,232,180,87,209,191,225,191,240,
    175,141,254,5,53,143,205,107,153,102,97,18,187,97,220,75,
    66,131,190,215,169,33,52,248,212,204,228,176,248,132,96,241,
    55,96,76,4,70,14,139,99,64,193,130,116,137,12,56,230,
    206,177,1,147,54,28,9,24,88,16,152,112,132,211,212,104,
    1,125,1,39,6,252,198,36,134,99,108,45,116,228,61,176,
    148,198,196,128,29,169,37,205,192,113,13,142,106,208,121,117,
    100,16,225,176,1,233,95,225,235,77,22,58,203,66,13,56,
    194,214,130,19,11,142,235,240,18,153,144,52,104,144,250,226,
    213,17,106,138,148,78,219,194,213,238,85,212,37,85,130,48,
    141,189,161,84,203,216,119,71,94,234,13,221,103,207,159,118,
    228,239,198,50,246,101,218,110,22,140,73,182,51,242,212,129,
    195,35,77,50,201,112,164,88,98,18,75,53,135,157,94,24,
    7,238,48,9,198,145,84,179,36,206,237,133,145,116,93,254,
    248,233,112,148,164,234,231,105,154,164,14,89,149,137,81,226,
    149,35,200,166,126,148,100,178,77,179,241,52,14,137,87,196,
    221,27,177,68,90,0,175,150,6,7,50,243,211,112,164,208,
    89,90,34,113,147,180,54,185,137,155,236,115,108,118,199,25,
    186,116,215,139,66,47,222,205,194,225,56,242,84,130,132,81,
    208,151,195,71,187,251,227,48,10,118,159,58,207,119,71,19,
    117,144,196,187,72,11,99,37,209,44,209,238,69,131,236,32,
    215,77,18,253,38,236,187,33,43,229,30,200,104,36,211,22,
    81,111,211,180,98,81,204,139,186,48,69,91,180,176,87,195,
    199,20,155,198,156,216,11,73,45,159,84,37,80,153,5,140,
    254,2,236,48,244,247,161,1,233,38,129,100,128,63,65,94,
    69,168,116,232,155,193,223,62,39,123,104,234,192,36,215,107,
    226,17,3,11,17,134,156,143,201,215,49,48,58,106,48,168,
    131,70,13,130,77,195,40,157,80,139,236,36,198,64,225,22,
    100,127,62,43,33,94,4,180,55,38,13,36,173,225,84,191,
    103,32,118,218,180,240,61,70,131,58,8,179,228,77,204,54,
    167,62,135,78,7,109,242,98,242,217,254,64,250,42,219,66,
    194,23,201,216,246,189,56,78,148,237,5,129,237,41,149,134,
    251,99,37,51,91,37,246,118,214,110,144,147,151,10,64,149,
    242,38,163,2,64,228,108,4,144,126,9,66,95,225,11,35,
    213,101,251,103,82,33,24,14,146,32,67,58,137,232,75,229,
    208,34,213,13,108,158,22,211,49,234,218,245,2,35,153,140,
    122,170,201,112,243,178,204,229,233,136,206,200,162,209,175,189,
    104,44,21,241,103,202,83,56,43,117,245,68,87,142,173,91,
    164,93,161,28,25,204,141,147,56,152,224,218,66,127,155,166,
    189,197,8,155,7,194,216,42,226,107,6,219,58,180,16,111,
    139,134,79,106,88,57,186,24,89,107,164,52,176,183,69,158,
    38,16,101,39,152,76,218,6,103,3,214,135,131,205,166,30,
    13,118,8,196,206,29,106,54,169,185,91,168,124,149,122,183,
    206,235,253,144,230,50,88,89,223,204,213,42,3,102,239,76,
    192,108,156,6,12,38,188,14,1,223,160,240,56,5,190,73,
    138,167,79,114,148,83,72,161,163,241,115,5,219,108,14,103,
    145,212,172,23,176,116,8,107,85,192,245,43,128,115,200,19,
    140,54,103,227,50,211,109,93,175,233,250,218,116,143,104,174,
    249,28,39,45,198,71,83,248,228,100,35,55,36,27,241,25,
    118,38,235,100,196,170,249,214,113,219,122,25,183,120,255,225,
    61,140,171,6,157,29,180,85,117,199,34,68,245,76,88,203,
    247,149,140,130,121,148,38,95,77,236,164,103,43,40,214,240,
    120,59,219,217,206,62,198,112,183,159,112,2,209,1,175,67,
    58,149,163,20,67,183,193,47,58,28,93,14,77,55,223,22,
    208,204,180,71,179,119,216,184,156,125,50,149,82,210,185,114,
    203,54,75,203,210,66,63,166,137,154,108,86,19,214,241,105,
    10,94,141,155,112,198,227,234,128,191,226,243,51,50,48,233,
    40,129,106,69,167,163,215,202,106,144,66,206,183,207,32,227,
    10,149,112,62,64,169,207,138,96,170,67,137,3,122,76,90,
    38,225,251,143,192,53,147,128,63,0,249,28,93,155,71,4,
    199,30,61,228,186,101,98,255,45,112,50,153,178,89,25,58,
    178,140,60,221,96,224,101,31,49,171,222,187,126,9,127,170,
    100,162,19,19,4,237,51,102,94,21,85,247,25,171,140,69,
    6,203,59,237,37,214,217,160,37,199,28,120,25,177,233,240,
    52,203,240,60,77,106,101,45,131,57,231,42,113,52,171,167,
    112,105,53,159,158,162,136,146,248,29,177,108,84,176,241,93,
    106,62,44,97,33,10,218,21,45,108,235,124,214,173,236,54,
    174,206,116,191,160,217,45,94,239,66,157,183,249,170,144,18,
    244,181,2,244,15,75,208,75,78,191,111,185,66,166,214,32,
    79,159,24,2,143,66,88,90,208,41,196,2,89,131,110,157,
    194,131,203,63,145,71,143,40,82,20,165,182,51,185,157,45,
    178,167,109,85,58,91,251,145,154,175,174,60,37,144,43,31,
    71,222,112,63,240,158,124,73,211,208,92,126,17,79,70,177,
    240,197,234,194,41,22,196,101,107,231,215,239,21,10,188,190,
    242,116,240,125,148,90,46,156,193,31,36,62,231,128,95,29,
    72,123,40,135,251,56,225,65,56,178,123,145,215,103,143,152,
    185,98,159,21,138,41,118,233,249,189,51,163,68,179,151,216,
    126,18,99,126,30,251,184,78,59,144,120,40,144,129,253,161,
    205,201,221,14,51,219,219,199,175,158,175,52,182,207,134,38,
    151,97,94,218,207,184,226,58,124,67,221,107,241,168,139,199,
    189,16,139,75,175,48,140,62,132,148,153,154,235,73,29,40,
    184,197,97,177,175,38,58,61,253,136,154,239,80,179,13,215,
    149,208,119,105,45,36,158,140,84,199,12,210,16,124,36,169,
    242,189,160,145,217,197,232,252,251,187,68,167,190,162,200,99,
    180,78,156,114,134,78,154,212,54,40,173,119,155,5,113,142,
    219,121,38,182,10,226,13,110,23,152,184,88,16,151,184,189,
    201,196,229,130,184,194,237,42,19,215,138,75,148,117,38,222,
    130,238,6,221,8,16,229,54,101,136,153,255,53,67,112,148,
    93,75,124,245,255,175,137,193,121,120,237,235,118,126,0,121,
    97,112,89,82,16,85,165,90,58,41,12,68,81,93,87,53,
    226,179,249,198,84,124,186,126,42,61,37,181,119,110,95,131,
    150,156,87,244,164,97,233,163,66,149,242,116,241,81,169,206,
    9,87,67,147,149,74,245,203,46,19,47,177,116,193,10,249,
    136,53,118,13,93,36,159,162,207,42,21,167,3,88,44,223,
    184,23,149,215,117,48,45,200,27,141,100,28,156,214,184,252,
    229,202,29,78,169,43,129,211,98,4,11,218,21,124,46,134,
    24,41,83,209,141,157,85,43,131,234,58,220,198,224,84,133,
    195,218,124,190,42,115,179,67,238,210,217,184,76,196,206,79,
    74,7,60,152,142,188,116,188,63,113,179,73,166,228,144,142,
    77,239,194,134,37,18,95,60,85,104,234,238,244,97,21,193,
    223,204,65,50,249,162,65,139,107,79,103,30,103,97,220,215,
    107,193,130,23,45,197,146,223,153,153,38,33,72,93,248,162,
    238,77,23,81,220,129,210,44,255,129,133,100,83,102,206,223,
    213,195,233,236,124,79,150,69,222,107,233,98,125,16,227,113,
    137,6,251,201,56,86,60,203,127,49,140,102,38,36,124,3,
    15,99,156,115,79,32,35,169,228,148,40,84,4,156,252,116,
    31,160,81,210,100,130,71,80,62,214,225,123,228,186,215,179,
    167,255,24,165,246,32,191,176,161,61,189,142,187,250,106,249,
    223,176,26,130,203,164,115,55,210,122,93,223,130,226,24,51,
    201,28,78,223,11,37,252,249,218,180,40,89,56,177,209,97,
    123,207,27,234,91,49,190,245,113,238,83,243,94,17,65,12,
    72,125,166,229,195,163,62,158,99,18,227,26,142,75,54,103,
    135,232,116,144,26,62,218,41,84,219,209,170,57,136,175,142,
    134,179,193,12,12,161,139,124,157,112,56,138,228,115,57,76,
    210,137,178,167,178,60,205,107,197,156,233,206,84,38,252,168,
    175,28,249,52,115,241,251,39,81,226,31,202,32,231,185,123,
    57,207,179,100,232,33,125,250,44,184,218,92,194,210,185,239,
    65,74,163,86,207,81,17,32,33,226,227,107,201,55,122,83,
    228,105,11,157,159,76,198,99,214,8,213,125,158,4,242,130,
    137,159,6,65,234,120,113,95,98,0,82,133,173,238,159,103,
    56,99,178,130,139,80,80,176,40,2,199,121,211,145,139,203,
    55,174,48,47,108,217,28,35,169,236,135,156,57,22,170,3,
    242,13,141,64,204,78,152,150,239,42,131,175,37,164,244,73,
    77,223,34,61,161,180,157,189,192,134,110,77,27,11,13,81,
    55,232,78,222,20,77,209,18,150,152,111,53,204,70,189,81,
    51,49,236,136,178,44,154,102,163,57,47,46,251,223,194,112,
    108,26,91,40,231,223,251,120,143,96,
};

EmbeddedPython embedded_m5_internal_param_DMASequencer(
    "m5/internal/param_DMASequencer.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_DMASequencer.py",
    "m5.internal.param_DMASequencer",
    data_m5_internal_param_DMASequencer,
    2346,
    7210);

} // anonymous namespace
