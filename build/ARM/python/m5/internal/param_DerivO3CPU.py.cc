#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DerivO3CPU[] = {
    120,156,189,91,249,127,27,197,21,159,149,100,57,114,226,196,
    185,239,88,28,38,38,16,27,114,144,0,105,74,98,39,197,
    52,177,29,201,105,130,161,136,245,238,216,90,91,210,138,221,
    145,29,165,78,15,156,2,61,233,125,223,148,182,244,62,233,
    15,253,181,127,85,127,105,223,123,171,183,26,73,43,75,124,
    168,77,172,247,25,125,231,59,111,102,222,188,247,102,102,181,
    88,162,246,95,15,124,158,75,11,225,191,31,19,194,134,63,
    67,20,132,40,26,98,214,16,134,52,132,189,91,44,245,8,
    239,140,176,123,196,125,33,102,99,66,198,196,26,20,226,226,
    165,152,40,109,163,54,73,81,136,19,98,136,106,159,144,9,
    49,219,35,110,149,118,138,132,76,138,165,62,225,189,42,12,
    195,40,25,226,182,221,43,236,45,226,62,104,135,66,138,20,
    110,17,118,31,21,82,194,222,74,133,62,81,29,16,114,171,
    152,5,229,189,98,182,31,84,157,0,85,219,73,213,191,81,
    149,13,53,123,132,221,143,116,24,203,139,200,76,32,147,250,
    216,78,90,118,240,200,6,196,236,78,46,239,210,202,187,181,
    242,30,173,188,87,43,239,211,202,251,181,242,1,173,124,80,
    43,31,210,202,135,181,242,17,173,124,84,43,31,211,202,131,
    90,57,173,149,31,208,202,15,106,229,135,180,242,195,90,121,
    72,43,63,162,149,143,107,229,97,173,252,168,86,62,161,149,
    31,211,202,143,107,229,147,90,121,68,43,143,106,229,39,168,
    188,67,200,157,98,241,73,177,120,74,44,158,22,243,224,76,
    3,225,138,157,17,50,46,22,207,138,217,179,66,194,223,25,
    177,6,254,102,239,212,90,60,69,45,118,133,45,206,81,139,
    243,98,246,188,144,240,119,46,104,145,20,217,225,189,224,195,
    206,127,225,191,97,3,74,106,27,136,101,233,249,142,91,202,
    57,165,121,215,137,97,125,18,5,122,188,133,162,183,230,250,
    99,232,250,239,9,242,123,59,86,115,253,123,2,20,27,56,
    151,66,76,220,163,194,189,152,168,14,139,85,67,44,38,132,
    29,23,171,208,77,15,14,96,193,16,107,49,241,114,28,9,
    247,64,38,192,89,143,137,132,10,252,126,145,156,53,208,212,
    43,238,245,136,213,30,145,189,189,26,67,96,41,37,188,119,
    197,221,35,164,116,11,41,141,137,85,144,9,177,150,16,247,
    146,226,22,144,0,90,76,225,244,141,219,171,48,83,64,178,
    195,9,24,237,164,54,93,156,138,237,120,37,179,40,213,78,
    40,231,202,166,103,22,115,227,210,115,150,167,78,143,77,223,
    28,238,99,154,235,143,148,77,149,207,80,187,56,26,164,88,
    86,164,207,45,73,181,21,10,243,78,201,206,21,93,187,82,
    144,106,11,42,203,205,59,5,153,203,81,229,68,177,236,122,
    234,138,231,185,94,6,109,74,96,193,53,195,22,104,81,171,
    224,250,114,24,123,163,110,50,168,94,33,123,190,76,26,113,
    0,52,86,108,108,75,223,242,156,178,130,165,10,52,34,27,
    181,13,227,34,145,240,167,64,140,86,124,88,208,81,179,224,
    152,165,81,223,41,86,10,166,114,1,40,219,11,178,120,118,
    116,174,226,20,236,209,75,153,235,163,229,170,202,187,165,81,
    192,156,146,146,96,148,194,104,179,57,70,128,179,11,21,175,
    56,11,57,135,166,148,203,203,66,89,122,253,136,30,194,78,
    141,1,99,155,145,52,226,198,176,209,15,165,30,248,196,141,
    35,177,173,198,164,131,147,178,112,162,232,80,113,118,161,119,
    4,45,22,172,245,82,76,120,71,208,65,22,225,207,192,21,
    5,55,201,98,93,140,234,110,160,53,2,116,49,142,203,30,
    128,171,228,84,224,93,192,188,128,235,92,18,228,25,61,98,
    49,41,2,143,1,71,11,92,200,171,162,4,58,170,137,129,
    242,132,240,223,110,212,80,26,16,96,109,72,138,0,237,131,
    174,94,39,39,204,14,227,192,39,201,23,84,222,241,221,149,
    18,89,28,203,20,54,89,176,201,116,117,106,110,81,90,202,
    31,4,224,69,183,146,182,204,82,201,85,105,211,182,211,166,
    82,158,51,87,81,210,79,43,55,61,228,15,167,112,137,119,
    178,59,133,250,170,101,118,31,92,106,112,159,224,139,237,88,
    10,190,236,166,47,100,127,95,42,112,133,188,107,251,128,163,
    138,5,169,50,56,72,181,29,196,37,238,142,124,110,56,201,
    30,226,203,194,188,234,35,103,51,125,63,71,221,33,78,126,
    133,173,151,205,66,69,42,228,251,202,84,208,43,22,131,142,
    54,216,179,14,224,220,120,106,104,174,92,201,45,217,85,24,
    153,99,13,97,167,7,200,191,182,9,244,176,189,224,93,189,
    32,147,162,31,188,109,32,102,225,36,18,53,223,34,191,218,
    135,83,22,180,214,70,45,65,128,143,173,65,26,25,142,81,
    30,160,217,80,160,165,177,132,141,51,232,194,153,195,40,142,
    160,56,202,19,222,184,89,247,55,207,250,20,246,20,163,169,
    90,241,218,164,194,96,153,108,8,150,131,245,96,129,68,151,
    69,167,143,97,104,212,157,62,142,211,246,46,214,60,28,195,
    9,22,25,170,53,191,38,99,100,6,112,146,73,118,201,12,
    250,153,238,108,11,154,179,101,112,29,200,211,50,7,219,25,
    110,112,51,13,183,16,24,238,44,246,180,173,230,35,253,228,
    27,125,134,133,11,28,171,153,145,76,56,14,133,234,126,52,
    161,110,188,253,176,89,221,42,245,211,174,67,59,23,157,135,
    130,188,16,216,52,40,36,208,155,230,227,98,95,109,55,241,
    49,140,203,158,123,167,154,118,231,211,74,240,24,46,12,249,
    35,67,254,179,16,232,233,139,148,58,130,80,15,130,217,147,
    101,15,130,54,69,95,130,64,204,81,80,230,106,219,1,24,
    25,119,102,90,27,50,45,229,29,95,121,152,110,54,216,174,
    125,161,93,113,152,207,98,55,125,100,212,184,216,15,159,62,
    131,198,146,115,41,211,209,137,128,106,225,115,25,205,139,51,
    148,2,207,192,153,108,48,82,154,4,78,39,115,188,193,43,
    54,108,10,153,19,160,115,156,195,40,41,66,31,192,79,28,
    7,137,158,253,166,160,83,146,33,222,16,184,222,176,172,181,
    88,160,168,195,15,46,219,110,164,191,34,40,137,68,108,81,
    177,32,166,98,181,52,3,33,231,159,35,106,176,99,189,32,
    222,210,50,208,90,92,24,184,187,196,107,231,32,125,119,73,
    132,81,72,142,210,213,14,146,104,12,87,92,150,188,233,35,
    45,8,204,120,24,152,245,100,22,158,95,32,219,108,156,15,
    109,9,58,200,225,88,38,234,30,132,169,251,176,177,59,166,
    249,197,227,40,78,134,46,97,48,182,33,195,26,108,206,181,
    218,14,147,11,242,219,243,216,119,130,70,187,35,73,177,80,
    87,17,58,123,15,59,251,169,208,217,37,165,220,251,116,26,
    70,25,195,53,94,139,25,112,181,131,163,4,222,170,18,66,
    246,136,217,36,134,5,29,246,140,90,212,24,156,152,48,161,
    53,228,115,178,198,100,96,167,112,153,131,21,68,113,103,131,
    19,1,46,226,133,130,89,156,179,205,139,62,118,130,61,89,
    28,71,49,30,246,128,62,108,140,1,163,221,200,233,235,19,
    60,252,229,13,78,2,79,214,134,76,195,38,151,183,93,139,
    34,127,38,47,211,69,89,156,131,238,242,78,57,61,95,48,
    23,104,53,226,181,105,77,241,180,20,45,103,243,94,233,99,
    122,153,116,211,150,91,130,140,92,177,96,148,105,91,194,241,
    95,218,233,147,105,74,231,105,199,79,155,115,80,107,90,42,
    240,233,198,128,164,35,151,233,45,248,116,186,90,90,193,226,
    38,172,102,14,46,117,14,30,35,217,44,193,101,35,204,205,
    116,114,12,2,4,182,52,56,214,171,106,144,146,158,66,241,
    40,138,33,177,57,41,124,20,116,122,168,28,13,148,132,172,
    145,50,212,64,67,52,78,99,43,191,53,38,255,147,232,34,
    38,131,7,45,181,200,76,34,83,246,226,93,18,101,10,211,
    248,108,31,131,91,73,110,35,176,159,193,237,36,119,16,56,
    192,224,78,146,187,8,220,205,224,30,146,123,9,220,199,224,
    126,146,7,8,60,200,224,33,146,135,9,60,194,224,81,146,
    199,8,28,100,48,77,242,1,2,31,100,240,33,146,15,19,
    56,196,224,35,36,143,19,56,204,224,163,36,79,16,248,24,
    131,143,147,60,73,224,8,131,163,36,159,32,240,73,6,79,
    145,60,77,224,25,6,207,146,124,138,192,115,12,158,39,249,
    52,129,207,48,248,44,201,11,4,126,132,193,139,36,63,74,
    224,115,12,94,34,121,153,192,49,6,199,73,94,33,240,42,
    131,31,35,249,60,129,19,12,190,64,242,227,4,94,99,240,
    58,201,73,2,167,24,156,38,121,131,192,12,131,89,146,51,
    4,222,100,240,19,36,111,17,120,155,193,23,73,206,18,248,
    18,131,47,147,252,36,129,175,48,152,35,249,42,129,38,131,
    115,36,45,2,109,6,37,201,121,2,23,24,204,147,116,8,
    92,100,112,137,100,129,192,34,131,37,146,46,129,101,6,95,
    35,233,17,232,51,168,72,86,8,92,102,112,133,228,29,2,
    171,12,222,37,249,41,2,87,25,188,71,242,211,4,126,134,
    193,207,146,252,28,129,175,51,184,70,242,62,129,159,103,240,
    13,146,111,18,248,22,131,95,32,249,69,2,191,196,224,151,
    73,126,133,192,175,50,248,54,201,175,17,248,117,6,191,65,
    242,155,4,126,139,193,111,147,252,14,129,223,101,240,123,36,
    191,79,224,15,24,252,33,201,31,17,248,99,6,127,66,242,
    167,4,254,140,193,159,147,252,5,129,239,48,248,75,146,239,
    18,248,43,6,127,77,242,55,4,190,199,224,111,73,254,142,
    192,223,51,248,7,146,127,36,240,79,12,254,153,228,95,8,
    252,43,63,78,254,27,129,127,23,179,255,192,231,134,136,188,
    143,103,139,222,15,123,182,160,29,122,19,246,230,187,255,215,
    35,69,230,212,38,143,58,115,90,212,46,18,237,142,19,134,
    62,165,254,224,56,177,104,240,61,92,159,15,61,191,219,31,
    177,187,229,44,79,154,74,6,235,114,104,195,103,72,167,145,
    160,203,213,112,117,120,26,225,51,136,115,225,84,214,232,230,
    84,221,163,221,146,105,177,140,91,112,205,129,155,244,42,205,
    54,23,11,46,211,117,175,75,132,147,222,3,162,36,87,114,
    205,19,15,110,203,56,28,179,92,150,37,187,126,19,166,154,
    13,94,104,60,238,188,47,234,215,22,184,246,238,129,79,107,
    88,225,68,180,121,209,50,245,132,129,180,241,11,70,46,249,
    47,94,170,225,127,10,253,52,151,193,133,10,206,111,225,209,
    45,243,76,104,250,163,81,254,118,237,106,118,38,235,220,149,
    248,76,165,3,3,174,80,116,168,100,64,29,139,164,223,184,
    82,130,107,171,244,73,99,7,10,170,196,135,34,33,162,30,
    140,108,144,189,49,150,151,214,210,53,215,180,3,189,93,208,
    80,55,6,97,3,170,134,218,52,28,151,101,98,101,243,206,
    188,162,46,186,99,98,47,3,65,47,13,21,209,51,207,118,
    54,78,182,197,56,33,18,189,62,217,236,68,135,21,12,25,
    188,130,12,68,211,225,10,227,44,59,170,218,94,97,200,96,
    133,12,168,116,20,125,206,180,150,198,220,98,56,200,142,36,
    84,139,63,121,104,24,93,229,91,27,121,102,201,202,79,123,
    210,38,197,157,56,168,23,35,188,14,69,55,177,76,43,47,
    167,93,79,249,237,213,106,28,86,91,135,232,73,75,107,19,
    183,88,116,212,140,59,46,45,215,150,227,178,96,6,54,238,
    154,140,29,225,6,20,81,167,142,175,167,228,170,84,86,190,
    222,97,183,92,236,111,151,214,95,189,42,58,58,152,55,113,
    229,86,189,179,238,152,28,71,205,21,235,27,39,35,241,103,
    140,46,45,169,147,155,45,169,213,69,187,103,64,188,229,216,
    42,223,222,135,117,18,251,176,134,69,219,221,166,69,236,110,
    141,34,184,188,70,173,85,209,214,96,94,87,166,139,34,179,
    233,34,234,162,173,18,16,59,152,78,39,177,233,52,44,58,
    225,219,142,95,54,97,186,117,221,93,208,120,95,104,64,213,
    195,81,13,231,209,150,151,43,243,243,210,11,147,87,87,68,
    236,99,7,16,155,112,245,80,219,198,55,42,178,34,195,78,
    186,225,97,31,219,185,143,16,142,246,27,226,180,38,158,110,
    185,236,99,173,85,209,209,29,240,60,179,124,13,14,150,37,
    107,157,60,208,194,228,60,208,92,17,157,132,137,85,95,253,
    78,28,78,212,117,168,141,165,93,111,197,244,108,125,207,234,
    134,23,174,72,3,172,14,71,54,173,76,187,110,129,84,175,
    87,143,42,241,80,28,124,141,182,161,35,87,102,220,49,74,
    51,29,178,110,11,147,173,221,92,177,78,243,102,31,234,142,
    217,208,145,238,63,145,225,68,172,166,124,216,21,145,227,174,
    9,95,103,144,205,105,176,59,102,195,116,244,4,24,153,69,
    29,223,175,64,162,188,114,71,90,21,213,41,229,70,145,57,
    229,70,212,69,251,60,17,59,196,133,198,225,184,168,67,209,
    231,190,146,148,182,63,147,157,106,127,50,12,25,124,50,100,
    64,61,16,73,175,20,39,26,142,196,157,89,168,24,127,111,
    213,193,232,180,15,140,233,124,213,31,27,203,200,133,117,110,
    13,141,52,222,29,26,208,104,175,168,81,174,22,92,83,133,
    93,116,199,100,255,105,174,136,78,51,53,214,68,169,222,77,
    55,60,78,71,141,112,91,35,100,166,46,235,43,209,5,77,
    179,85,29,85,71,218,53,116,231,2,205,235,18,80,103,111,
    77,39,124,143,142,17,143,34,174,203,131,116,20,153,3,42,
    162,46,122,83,100,98,55,135,180,8,46,111,160,173,85,209,
    14,195,188,206,7,233,22,38,187,86,115,197,250,205,97,253,
    186,236,40,100,54,119,196,21,209,231,187,128,213,225,16,168,
    147,248,16,168,97,209,123,128,95,84,193,206,53,237,22,28,
    107,157,205,162,153,200,155,69,19,30,29,91,64,162,69,211,
    58,233,134,199,49,216,8,71,207,30,56,19,55,52,253,29,
    73,108,34,13,107,59,168,137,27,51,121,79,250,121,183,96,
    175,59,120,157,167,13,94,131,163,115,52,112,174,101,245,209,
    119,102,113,38,215,193,182,43,7,140,198,9,116,69,212,150,
    88,199,213,137,54,141,39,43,69,90,38,167,180,128,100,126,
    218,244,1,232,216,227,222,160,199,214,218,182,70,129,216,233,
    194,116,117,150,102,186,16,108,107,17,96,116,103,186,6,162,
    102,58,29,111,227,149,175,85,76,63,223,33,186,117,82,232,
    186,117,76,61,22,217,72,185,30,157,172,115,86,65,154,94,
    174,12,4,55,152,198,7,225,99,127,248,126,96,116,117,244,
    120,85,211,5,166,35,137,39,165,97,209,155,221,202,92,221,
    84,235,18,120,55,172,125,167,231,212,244,187,129,45,11,82,
    201,150,167,232,148,144,107,111,240,217,176,23,123,110,53,151,
    11,94,223,130,239,133,92,110,51,126,201,63,15,58,171,168,
    252,211,34,248,37,63,105,164,140,189,155,254,47,149,72,25,
    244,2,70,211,59,237,193,236,159,22,252,90,84,213,207,32,
    146,65,103,15,30,148,211,171,215,252,58,4,253,248,129,143,
    97,39,97,27,10,222,231,70,71,200,96,144,102,48,139,210,
    179,118,186,164,5,111,200,209,203,104,193,171,126,37,185,66,
    111,135,208,203,32,153,17,196,177,89,241,236,8,27,112,36,
    48,224,229,240,129,164,131,111,151,208,59,224,197,179,116,51,
    108,37,103,157,98,240,214,49,189,194,174,215,219,158,9,229,
    189,77,40,172,174,3,139,11,55,209,3,145,250,174,222,164,
    187,229,193,166,202,171,55,199,165,111,229,150,37,141,168,93,
    83,228,180,52,157,42,119,110,26,112,90,42,37,28,252,160,
    110,12,205,214,162,183,102,44,211,151,224,106,244,248,188,181,
    246,146,87,204,42,115,65,158,186,126,253,102,155,174,129,50,
    115,237,50,197,115,116,165,57,87,144,183,204,194,146,108,55,
    248,108,213,87,178,216,178,62,52,248,235,178,232,122,213,235,
    112,158,164,216,214,235,47,217,182,151,49,75,11,146,77,211,
    236,13,151,106,175,16,5,58,152,213,102,160,13,220,54,190,
    2,149,53,95,25,140,172,31,43,184,214,146,180,107,156,163,
    237,57,227,110,17,125,43,90,11,216,108,2,17,175,82,86,
    173,171,134,181,217,75,235,123,67,192,105,95,57,13,139,121,
    40,178,114,26,178,213,188,235,21,219,12,30,198,229,141,185,
    32,192,195,155,21,140,185,21,44,242,200,154,87,139,21,248,
    106,6,236,12,190,208,220,126,218,115,45,233,251,220,62,218,
    91,107,36,74,42,92,69,183,166,70,103,198,28,93,43,211,
    171,80,77,191,14,83,74,247,228,130,3,126,231,81,243,26,
    57,200,251,148,115,163,111,228,122,195,77,200,254,193,75,132,
    193,75,205,23,105,135,95,6,129,47,240,167,118,164,140,100,
    12,255,231,144,184,209,103,244,27,9,99,91,127,42,158,74,
    166,122,226,176,67,32,178,219,232,139,167,250,182,25,31,238,
    223,32,228,253,190,216,224,88,202,248,31,62,41,241,52,
};

EmbeddedPython embedded_m5_internal_param_DerivO3CPU(
    "m5/internal/param_DerivO3CPU.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_DerivO3CPU.py",
    "m5.internal.param_DerivO3CPU",
    data_m5_internal_param_DerivO3CPU,
    3823,
    14265);

} // anonymous namespace
