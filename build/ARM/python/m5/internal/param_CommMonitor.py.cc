#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CommMonitor[] = {
    120,156,189,25,219,118,19,201,177,122,116,49,146,45,108,99,
    140,185,24,44,96,189,104,217,197,2,150,203,102,33,100,89,
    216,36,155,19,188,68,206,57,176,206,101,50,214,180,229,145,
    165,25,157,153,22,70,123,236,135,196,123,146,188,229,35,114,
    242,144,95,200,115,126,40,95,144,84,85,79,143,71,23,27,
    145,196,6,171,78,79,117,117,221,171,166,187,167,14,241,191,
    28,254,190,40,3,68,255,16,0,46,254,9,104,1,180,5,
    172,11,16,82,128,59,7,219,57,8,239,129,155,131,239,1,
    214,45,144,22,236,227,32,3,191,178,192,159,226,53,121,104,
    101,24,35,160,87,4,153,133,245,28,188,242,103,33,43,243,
    176,93,132,240,119,32,132,240,5,188,118,39,192,61,5,223,
    35,119,28,20,152,225,41,112,139,60,40,128,59,201,131,34,
    244,102,64,78,194,58,50,159,128,245,18,178,186,137,172,78,
    51,171,127,18,43,23,103,206,130,91,34,114,212,229,91,162,
    204,18,37,203,56,205,92,166,141,102,51,176,62,107,198,103,
    82,227,185,212,248,108,106,60,159,26,159,75,141,23,82,227,
    243,169,241,133,212,248,98,106,124,137,199,211,32,103,161,185,
    8,205,203,208,188,2,155,232,208,153,68,235,37,144,25,104,
    150,97,189,12,18,255,150,96,31,125,238,206,166,86,92,229,
    21,103,146,21,215,120,197,117,88,191,14,18,255,174,233,21,
    121,88,171,204,99,28,189,127,227,191,10,198,17,212,20,130,
    55,50,140,188,192,183,61,127,51,240,44,154,207,19,160,168,
    215,9,76,196,225,127,70,225,255,59,112,236,93,43,14,255,
    30,32,99,65,182,180,44,216,227,193,158,5,189,10,236,10,
    104,102,193,205,192,46,138,201,145,2,13,1,251,22,252,58,
    67,4,123,8,179,24,176,43,144,85,58,246,77,14,152,230,
    52,1,123,57,216,205,193,218,235,93,139,16,219,5,8,255,
    6,223,45,50,211,83,204,212,130,93,132,89,216,207,194,94,
    30,94,33,17,162,154,5,50,95,188,222,69,75,17,179,86,
    201,162,182,171,41,115,201,20,215,11,125,167,45,213,25,28,
    219,29,39,116,218,246,179,160,221,126,17,248,158,10,194,74,
    209,208,5,209,74,199,81,91,53,94,152,33,143,180,59,138,
    25,6,190,84,147,56,216,244,124,215,110,7,110,183,37,213,
    41,226,102,111,122,45,105,219,60,249,117,187,19,132,234,171,
    48,12,194,26,57,149,145,173,192,73,86,144,75,235,173,32,
    146,21,146,198,98,106,196,94,17,245,102,135,57,146,2,172,
    44,45,118,101,84,15,189,142,194,88,105,142,68,77,220,42,
    20,37,6,209,75,4,213,110,132,17,173,58,45,207,241,171,
    145,215,238,182,28,52,44,170,118,220,134,108,223,175,110,116,
    189,150,91,125,90,123,81,237,244,212,86,224,87,17,231,249,
    74,162,87,90,213,33,127,172,32,17,121,42,218,241,26,182,
    199,54,217,91,178,213,145,97,137,176,23,73,170,152,17,83,
    34,47,50,162,34,74,56,202,225,47,35,22,173,73,177,234,
    145,85,117,178,148,82,42,99,146,232,175,192,225,194,104,111,
    91,16,46,82,138,52,241,79,80,76,49,81,214,104,206,226,
    185,95,144,59,52,182,153,161,192,107,228,46,167,21,230,23,
    82,62,166,72,251,192,185,145,131,102,30,116,206,96,170,233,
    36,10,123,4,145,156,216,88,200,60,11,209,95,250,57,248,
    51,128,238,198,214,128,168,115,40,234,15,156,134,107,21,82,
    124,149,147,65,109,121,81,176,227,179,203,105,204,133,179,134,
    62,121,217,251,102,163,41,235,42,90,66,196,183,65,183,92,
    119,124,63,80,101,199,117,203,142,82,161,183,209,85,50,42,
    171,160,188,28,85,10,20,227,89,147,79,9,191,94,199,228,
    15,197,26,243,71,63,184,94,93,225,195,28,63,176,255,35,
    169,48,23,182,2,55,66,60,177,104,72,85,35,37,213,105,
    4,79,141,56,78,186,74,222,164,72,36,91,155,170,200,217,
    230,68,145,205,226,8,207,137,69,171,223,56,173,174,84,68,
    31,41,71,161,84,26,106,65,199,157,90,231,201,56,99,27,
    249,203,246,3,223,237,161,106,94,125,153,164,158,231,4,155,
    2,74,177,121,76,175,9,132,121,40,97,186,205,88,117,178,
    34,27,39,23,39,214,57,178,25,56,216,34,238,17,152,100,
    251,216,73,42,22,183,2,54,135,75,173,76,35,90,92,163,
    28,174,93,34,176,72,224,178,177,248,24,205,46,13,154,125,
    151,68,89,108,107,61,19,91,149,148,203,106,95,185,92,56,
    40,23,108,118,107,148,246,22,21,199,65,218,103,200,238,240,
    73,156,227,84,80,24,102,156,78,101,54,123,163,54,67,86,
    230,77,82,214,40,211,210,233,214,72,165,91,141,2,193,185,
    86,187,112,152,231,150,78,212,115,13,237,185,251,36,106,42,
    206,146,18,103,71,81,212,41,196,86,236,71,246,225,115,28,
    244,22,200,135,105,239,45,224,27,235,149,95,226,87,15,191,
    190,120,99,160,91,131,118,170,30,100,41,159,54,51,112,46,
    126,165,68,84,201,157,48,120,219,43,7,155,101,5,70,135,
    199,203,209,202,114,244,8,107,189,252,132,187,135,174,118,93,
    207,161,236,132,88,183,5,126,208,181,104,115,93,218,241,43,
    1,189,76,175,103,14,14,251,150,91,79,164,66,234,56,199,
    237,216,98,226,88,210,243,17,201,41,178,87,51,176,128,191,
    162,96,101,236,128,187,29,239,11,120,22,127,95,146,127,201,
    68,9,180,27,172,173,105,85,217,10,178,167,118,163,47,47,
    142,207,134,218,77,100,250,220,84,82,30,146,44,160,95,134,
    180,164,228,254,19,240,102,73,192,31,129,34,142,129,141,203,
    129,11,143,126,20,184,57,34,255,45,112,35,25,241,158,178,
    116,89,89,113,171,193,170,139,30,50,169,126,109,253,12,254,
    156,234,66,251,25,16,244,138,201,196,219,161,244,43,38,155,
    20,34,167,202,88,175,145,108,127,197,82,92,182,156,136,200,
    116,109,102,146,218,60,104,104,201,46,6,27,206,49,102,209,
    41,45,193,38,101,190,62,200,33,234,223,151,196,156,149,202,
    140,79,8,220,74,146,66,24,220,241,232,181,52,216,112,83,
    239,25,91,55,185,159,146,240,44,171,59,157,231,13,87,138,
    71,146,240,57,147,240,119,147,132,151,220,120,191,231,125,49,
    65,139,194,188,111,9,60,232,224,150,130,206,24,89,144,57,
    88,207,83,105,240,174,79,196,149,35,76,119,162,174,214,215,
    213,217,31,171,218,83,73,164,117,16,9,188,61,238,110,64,
    113,124,220,114,218,27,174,243,132,170,32,34,81,117,83,75,
    150,209,123,38,173,55,213,129,56,76,117,126,188,109,244,127,
    115,220,157,224,14,50,77,244,230,188,119,131,58,151,255,47,
    183,100,185,45,219,27,40,111,203,235,148,55,91,78,131,227,
    145,137,237,250,198,216,165,56,160,131,239,204,136,122,204,106,
    80,174,7,62,54,230,110,29,229,149,93,137,39,1,233,150,
    111,149,185,171,151,189,168,236,108,224,172,83,87,58,175,251,
    171,146,55,95,78,216,136,120,159,181,189,67,195,147,136,167,
    141,39,60,15,119,148,182,241,139,62,120,36,45,154,55,145,
    186,72,240,213,134,59,124,213,211,141,233,1,129,143,8,44,
    195,9,117,242,42,50,253,13,113,39,23,229,177,119,20,132,
    154,237,47,201,151,180,46,26,46,204,127,137,49,10,83,223,
    61,196,229,153,39,74,57,65,71,75,130,5,106,231,235,69,
    131,156,100,56,197,200,146,65,158,102,56,205,200,25,131,156,
    101,120,134,145,115,6,121,150,225,60,35,207,25,228,2,195,
    243,140,188,96,144,23,25,94,98,228,162,65,94,102,120,133,
    145,75,6,89,102,120,149,145,215,12,242,58,195,15,24,185,
    108,144,31,50,188,193,200,138,65,126,196,240,38,35,63,54,
    200,79,24,222,98,228,138,65,86,25,222,102,228,29,131,188,
    203,240,83,70,222,51,200,251,12,31,48,242,161,65,126,198,
    240,7,140,252,220,32,31,49,124,204,200,31,26,228,19,134,
    63,98,228,23,6,249,148,225,151,140,124,102,46,150,158,51,
    242,43,88,255,49,221,158,16,230,39,212,87,39,254,215,190,
    202,205,233,36,218,146,252,191,182,211,218,221,147,86,187,246,
    41,196,59,169,195,90,169,72,219,84,210,173,180,41,204,89,
    36,109,16,95,99,156,31,85,215,118,61,148,142,146,58,52,
    23,143,223,70,238,197,90,102,35,9,144,49,36,57,137,61,
    76,140,217,231,205,99,239,108,234,168,192,241,18,175,112,167,
    135,199,137,93,182,215,182,244,137,226,32,243,178,137,217,212,
    119,125,185,99,15,153,174,207,12,164,143,211,233,72,223,61,
    56,15,240,204,113,7,251,129,78,194,100,235,134,155,255,179,
    248,27,46,46,50,37,101,25,71,42,151,148,211,9,196,140,
    243,242,247,38,90,21,218,192,29,188,205,106,20,43,253,254,
    74,94,93,181,207,19,239,127,48,50,233,54,28,223,221,241,
    92,181,101,111,120,126,68,71,204,241,8,113,83,201,111,207,
    126,180,186,49,122,109,55,140,148,221,146,126,35,45,103,92,
    90,18,69,105,48,52,195,219,250,97,14,174,23,57,27,120,
    182,196,147,68,72,15,74,139,27,155,152,228,209,5,224,240,
    148,186,117,36,143,3,95,108,37,82,223,111,5,137,94,72,
    137,30,152,87,183,143,230,150,118,208,129,10,239,189,136,180,
    184,152,214,98,136,228,144,216,153,5,158,82,41,199,143,75,
    107,226,60,52,163,62,62,146,3,214,148,244,235,189,148,197,
    239,67,79,82,231,83,82,251,102,85,245,72,78,65,23,73,
    48,68,158,223,72,73,127,223,53,164,193,133,148,6,67,20,
    239,224,136,219,110,63,194,157,55,125,209,24,87,139,225,53,
    131,90,12,81,168,43,35,57,82,148,146,146,126,7,9,201,
    160,125,185,65,168,171,135,210,183,157,183,68,194,92,223,77,
    69,140,39,99,198,49,78,93,27,185,202,132,55,81,121,12,
    50,226,78,119,93,105,164,250,112,228,186,116,236,18,17,99,
    146,146,24,234,222,131,19,135,52,100,124,115,187,186,55,181,
    157,104,251,136,206,61,64,104,58,119,63,90,93,31,185,54,
    114,218,29,76,6,60,26,121,129,203,50,198,161,35,17,252,
    177,36,141,85,139,163,87,246,34,37,219,204,250,72,2,226,
    201,23,246,252,120,136,79,211,73,251,14,247,15,145,26,247,
    15,78,168,229,145,235,119,66,79,201,1,255,143,71,73,130,
    166,145,114,0,175,238,140,92,205,223,159,162,150,243,70,218,
    120,2,247,165,86,172,30,116,125,197,50,223,127,21,201,167,
    43,236,35,104,212,221,195,185,162,174,184,67,25,173,204,127,
    177,44,138,3,127,20,17,239,208,120,215,236,202,150,68,167,
    13,201,224,200,197,151,248,174,140,84,24,244,108,91,223,223,
    226,115,203,182,79,228,12,255,153,222,31,66,116,15,244,25,
    62,143,167,248,249,49,255,23,178,5,193,87,38,3,95,164,
    181,210,84,218,250,54,179,23,213,8,83,155,78,118,118,252,
    221,212,220,95,240,134,157,110,220,87,157,182,254,46,198,31,
    126,106,212,68,107,215,205,230,144,75,73,223,108,243,29,178,
    190,163,199,205,57,223,231,240,245,77,109,197,56,189,125,127,
    197,216,189,162,237,94,211,69,104,241,36,39,83,154,70,250,
    221,182,253,66,182,131,176,247,34,112,37,135,55,61,255,20,
    83,190,230,248,13,105,191,145,116,157,196,13,190,143,32,190,
    75,210,60,12,85,121,164,42,253,180,67,186,104,34,156,212,
    31,45,249,90,116,120,254,89,43,168,111,75,55,166,185,124,
    56,205,243,160,237,32,126,180,148,53,207,72,153,29,152,119,
    67,90,53,63,128,197,236,243,48,249,190,211,223,66,13,154,
    123,195,160,218,20,158,228,137,239,138,6,15,145,156,251,161,
    108,120,84,65,204,35,161,143,15,89,148,157,135,188,161,211,
    107,79,162,82,244,109,171,254,6,244,132,94,220,209,207,17,
    208,23,207,194,116,65,228,45,250,156,158,17,69,81,18,89,
    49,85,42,100,10,249,66,46,131,213,68,152,57,81,204,20,
    138,83,98,212,255,37,172,161,162,181,116,165,32,254,3,30,
    242,44,248,
};

EmbeddedPython embedded_m5_internal_param_CommMonitor(
    "m5/internal/param_CommMonitor.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_CommMonitor.py",
    "m5.internal.param_CommMonitor",
    data_m5_internal_param_CommMonitor,
    2739,
    9159);

} // anonymous namespace
