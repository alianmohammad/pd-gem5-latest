#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_code_formatter[] = {
    120,156,197,90,221,111,28,71,114,175,153,89,46,185,203,165,
    40,138,34,245,45,143,109,49,90,58,182,36,95,46,62,159,
    79,39,219,178,100,197,57,155,246,141,108,41,71,153,153,27,
    238,12,169,33,135,51,235,153,89,137,50,185,200,157,121,136,
    165,224,146,3,14,135,124,61,221,67,2,36,8,16,32,128,
    129,0,201,67,254,128,188,230,242,150,191,33,239,121,72,82,
    191,234,238,217,37,41,27,9,224,77,246,163,183,166,187,167,
    166,186,170,186,190,122,59,164,95,99,252,125,195,37,42,254,
    201,34,10,249,99,81,66,180,92,193,22,45,91,6,182,105,
    217,54,176,67,203,142,129,107,180,92,163,208,166,104,140,214,
    120,178,67,63,33,218,35,250,193,114,157,194,26,69,227,210,
    59,86,245,78,80,88,55,115,199,171,222,6,122,215,249,113,
    77,138,38,41,156,160,77,155,242,127,180,240,136,6,37,13,
    218,106,16,207,177,162,6,166,47,183,40,228,121,83,130,99,
    178,194,113,132,194,22,45,79,83,196,192,148,180,252,153,230,
    49,139,17,171,22,79,56,74,26,203,12,69,51,20,30,165,
    61,139,17,51,202,153,10,58,86,65,179,21,116,188,130,230,
    12,180,113,12,120,172,109,159,162,89,10,231,209,125,99,229,
    251,180,124,156,246,77,11,79,84,208,73,10,79,209,158,173,
    46,78,227,34,60,67,123,142,186,62,75,225,185,106,240,188,
    185,248,228,166,117,23,207,154,147,103,97,232,25,10,93,89,
    152,186,239,86,42,114,184,221,126,150,133,25,255,23,191,150,
    202,58,131,73,150,109,246,186,29,35,106,22,48,93,135,168,
    159,103,32,34,45,88,230,29,164,106,9,224,64,140,0,106,
    228,221,110,59,60,175,227,104,37,177,249,251,62,238,126,131,
    129,93,155,118,137,124,6,44,1,164,221,176,104,67,245,59,
    180,235,8,80,163,221,154,0,99,20,147,0,117,60,243,118,
    27,180,44,181,199,185,45,129,124,45,15,182,162,178,1,40,
    203,183,130,178,140,114,233,247,195,184,83,150,53,134,42,32,
    200,215,11,89,221,230,195,10,76,178,78,144,20,109,220,33,
    115,138,40,89,243,64,176,135,231,120,232,247,48,175,77,166,
    41,222,226,230,114,175,136,242,226,114,144,196,65,122,185,136,
    183,122,73,80,102,220,209,13,215,163,173,223,188,92,228,157,
    203,221,71,229,253,44,189,204,87,189,50,78,46,119,178,48,
    242,43,18,47,241,232,4,168,244,227,52,46,125,255,57,32,
    110,9,171,27,252,158,150,86,24,104,190,111,129,129,51,21,
    3,55,132,129,87,135,56,34,244,130,45,194,124,111,194,172,
    40,46,163,173,18,93,15,130,100,4,171,152,148,85,20,81,
    137,231,248,254,11,192,109,203,66,58,182,150,253,184,33,255,
    178,101,196,206,228,111,214,41,63,61,88,202,169,219,187,70,
    21,48,242,77,13,155,17,214,50,236,234,247,164,219,166,13,
    135,54,106,36,3,182,12,116,204,192,24,247,50,84,7,218,
    252,103,230,113,60,48,46,120,127,54,184,28,126,232,132,12,
    254,181,134,213,136,194,210,160,252,87,67,88,154,50,241,87,
    131,75,131,133,25,177,209,146,193,127,215,176,140,60,58,67,
    229,20,64,222,197,125,133,229,136,26,185,155,206,80,173,156,
    166,205,38,229,231,44,126,165,22,253,78,121,20,70,144,199,
    231,63,179,149,186,67,132,75,90,87,214,226,36,242,125,125,
    145,196,41,95,20,179,96,110,214,75,66,55,205,74,119,45,
    78,67,247,226,66,113,177,61,99,212,65,212,87,180,89,20,
    126,205,135,12,69,108,157,76,48,166,216,64,19,50,4,156,
    105,38,250,111,122,100,127,120,160,162,4,182,245,36,91,229,
    14,181,225,124,115,165,148,96,181,23,39,101,156,86,20,98,
    227,241,5,116,47,78,75,217,75,101,147,155,59,65,210,139,
    110,230,121,150,203,229,59,105,24,109,203,101,219,54,154,235,
    53,71,179,231,20,161,235,70,91,95,2,238,23,69,91,167,
    173,73,27,223,150,53,197,223,166,125,222,58,34,215,230,215,
    177,90,60,103,202,170,89,202,88,168,37,130,119,188,196,166,
    92,108,101,97,15,2,242,192,28,15,187,217,59,189,111,25,
    95,235,90,60,32,131,217,46,32,214,186,213,152,104,56,229,
    172,136,117,120,166,207,194,13,14,27,242,19,195,134,124,216,
    138,179,241,182,197,14,114,219,116,249,213,126,253,53,249,117,
    221,133,118,24,37,241,214,98,209,126,253,131,171,81,209,9,
    186,81,120,173,234,92,116,247,189,118,221,231,93,61,199,149,
    25,204,241,92,35,250,93,32,96,77,141,210,242,218,61,119,
    229,133,197,125,152,147,44,141,24,109,140,97,70,123,65,80,
    161,211,149,174,120,45,174,16,237,187,79,70,135,110,116,221,
    195,20,125,57,134,133,118,178,170,240,172,250,7,49,45,180,
    115,30,83,24,86,243,160,195,75,250,106,82,186,89,193,183,
    115,251,20,50,12,41,60,26,151,113,150,6,137,219,13,196,
    137,125,53,81,195,56,13,65,6,151,38,106,128,242,41,136,
    66,141,41,98,63,112,237,210,11,175,3,73,88,97,209,136,
    194,172,183,154,68,6,95,180,221,205,163,162,96,140,79,229,
    119,202,152,226,240,218,83,87,200,47,230,118,146,188,4,69,
    28,86,1,65,90,8,190,69,105,59,176,45,147,58,84,16,
    55,241,159,216,95,252,17,115,201,97,12,66,3,75,252,158,
    35,113,11,235,42,67,3,47,225,80,191,70,233,47,5,174,
    209,199,54,245,199,168,95,151,203,49,250,184,70,253,113,234,
    79,80,191,65,253,38,144,242,252,120,28,198,16,62,64,236,
    253,158,184,145,87,112,209,128,253,21,168,137,8,244,21,61,
    109,76,230,140,85,215,117,185,174,87,215,252,153,160,19,123,
    18,150,154,190,6,237,54,85,223,4,189,50,207,36,162,127,
    18,97,13,128,150,180,83,116,29,63,71,232,250,158,137,127,
    196,234,55,196,234,195,224,118,101,23,167,18,211,8,19,5,
    18,245,19,203,202,50,47,177,97,147,85,249,201,87,165,151,
    165,45,191,44,225,246,180,9,149,138,94,55,202,189,115,176,
    75,98,161,206,27,159,160,196,205,126,138,31,33,10,224,235,
    30,193,24,201,28,181,151,189,103,112,163,139,230,89,227,18,
    58,217,86,151,221,136,192,119,110,122,215,223,191,125,83,238,
    184,241,254,135,111,190,251,174,120,138,247,62,122,247,195,119,
    222,125,103,233,102,27,130,22,202,58,236,54,32,121,241,62,
    160,110,53,40,162,66,134,194,142,94,90,80,122,8,140,188,
    231,205,77,201,234,203,250,247,27,106,121,213,239,203,35,48,
    176,160,124,25,8,207,138,233,60,203,30,160,229,76,91,115,
    28,154,205,90,77,126,31,229,247,113,235,164,45,78,218,59,
    131,230,172,97,172,220,61,42,211,15,25,190,7,132,120,112,
    189,85,183,202,35,135,12,127,101,243,109,99,243,255,165,178,
    249,108,220,85,14,134,236,139,211,154,49,232,63,114,46,206,
    205,198,161,247,156,105,113,162,131,132,138,219,73,105,91,58,
    17,91,158,130,226,35,253,226,27,143,8,60,33,240,52,210,
    45,76,56,138,12,235,39,146,36,169,12,107,249,24,178,43,
    0,179,200,174,0,28,71,130,5,96,14,217,8,128,121,164,
    83,0,78,32,155,2,112,18,201,20,128,83,200,165,0,156,
    70,42,5,224,12,82,36,0,103,225,176,230,73,172,5,209,
    133,2,92,191,231,191,249,210,167,43,31,63,124,65,60,227,
    189,43,47,125,123,229,215,37,38,221,233,11,195,118,118,250,
    253,14,166,67,117,208,33,201,201,159,50,176,78,58,57,209,
    41,135,196,157,0,108,48,72,231,39,54,172,12,115,138,181,
    22,246,201,66,152,168,119,111,221,140,214,134,70,199,205,232,
    184,25,29,27,26,157,48,163,13,24,185,252,23,164,108,143,
    138,24,173,148,148,61,192,66,150,98,72,51,22,93,131,159,
    151,232,174,68,152,177,22,111,251,105,244,16,209,91,161,118,
    152,202,128,130,50,240,176,70,217,217,190,114,184,126,18,61,
    136,18,209,23,211,83,116,121,179,23,218,154,116,101,87,150,
    143,120,175,87,15,241,94,171,144,12,63,74,199,64,28,32,
    38,190,63,200,58,70,153,52,201,174,122,4,132,199,100,79,
    54,244,251,188,117,222,62,111,215,173,24,98,173,18,143,154,
    241,40,8,195,152,175,181,13,26,164,21,199,191,101,251,52,
    156,82,74,240,121,21,205,119,65,118,21,139,10,51,59,89,
    47,45,71,16,144,130,77,74,12,191,79,135,51,167,106,1,
    175,168,5,236,163,127,115,12,150,137,109,244,103,214,225,197,
    189,122,96,113,206,190,197,137,248,223,44,152,124,132,11,7,
    99,239,235,35,17,157,44,53,140,176,212,39,198,116,193,168,
    202,98,29,189,96,89,236,124,181,216,190,109,202,4,146,247,
    238,75,117,223,160,125,169,46,176,23,101,80,246,148,90,114,
    224,242,32,206,122,197,8,214,225,168,29,247,135,164,67,111,
    165,133,98,80,236,47,89,134,165,131,25,85,246,216,167,112,
    111,24,13,123,155,19,169,104,72,10,183,70,35,5,60,42,
    205,152,254,159,31,160,159,244,171,162,31,251,125,93,34,49,
    223,58,180,79,132,196,239,208,200,92,156,218,116,73,20,228,
    127,50,180,47,44,189,39,32,130,91,160,241,183,201,132,138,
    170,40,192,220,253,169,84,180,216,168,178,242,108,159,215,65,
    225,141,149,89,234,43,219,61,38,97,36,219,214,79,22,232,
    46,58,234,82,28,147,5,226,49,75,226,73,30,170,10,83,
    77,100,205,193,13,70,50,21,177,112,88,114,95,128,141,44,
    78,133,7,66,236,195,156,195,91,77,118,198,146,172,209,176,
    61,20,164,107,170,30,197,102,121,4,150,241,251,140,231,207,
    129,112,66,120,117,134,99,147,153,129,86,86,37,164,5,197,
    177,13,83,209,208,188,18,171,177,110,156,157,40,169,98,6,
    153,109,166,119,88,30,167,235,222,7,149,244,7,202,240,225,
    104,244,0,98,240,125,126,174,239,255,114,160,177,115,28,139,
    85,86,178,210,216,201,106,199,73,133,101,216,90,56,251,137,
    29,77,121,65,210,253,191,28,210,215,255,125,1,207,161,97,
    171,38,116,138,78,61,64,205,100,4,20,35,124,248,43,58,
    236,121,42,158,30,25,230,233,119,159,74,238,255,81,213,6,
    217,143,84,109,254,230,171,232,133,213,26,174,49,254,63,144,
    219,18,114,59,89,90,6,113,90,248,254,223,126,21,189,51,
    195,252,133,89,58,192,98,217,118,65,183,27,165,225,232,55,
    155,46,73,7,97,232,251,127,247,20,170,43,61,190,170,172,
    200,174,56,54,182,31,249,194,160,48,187,43,198,88,162,215,
    89,109,126,17,238,202,234,14,44,16,107,147,226,89,92,48,
    167,202,32,237,68,222,171,198,182,168,180,115,187,228,149,43,
    43,160,184,32,254,151,237,193,200,185,225,221,99,60,95,12,
    108,206,180,53,111,119,76,84,86,21,43,254,190,146,95,113,
    110,232,40,99,176,84,213,215,234,126,75,143,178,193,61,165,
    138,214,112,80,15,132,93,14,92,208,141,149,251,226,163,28,
    202,159,104,190,229,15,6,40,67,71,119,30,215,137,193,224,
    97,142,201,21,24,42,254,24,6,166,165,107,217,234,78,219,
    140,179,28,248,161,159,220,162,187,131,218,178,156,250,20,144,
    71,83,156,148,43,82,145,184,68,196,32,108,16,33,21,93,
    222,128,18,249,171,72,242,29,112,188,182,79,10,37,138,13,
    56,210,136,131,196,228,9,226,244,0,140,64,68,28,80,209,
    63,0,225,73,17,81,131,157,94,205,62,199,233,121,157,225,
    211,214,172,61,197,95,113,130,117,45,180,105,8,13,177,219,
    99,201,11,148,232,148,88,140,196,120,132,89,118,234,137,133,
    57,204,246,103,56,94,45,109,45,37,22,64,223,228,126,204,
    238,199,98,207,255,200,166,39,54,125,78,244,185,69,159,219,
    180,230,32,3,228,128,94,23,125,198,229,80,161,70,143,149,
    175,149,123,55,26,186,170,164,246,3,72,91,82,82,80,105,
    158,36,50,104,96,252,160,254,179,98,221,108,163,109,97,117,
    164,192,89,227,15,77,167,72,250,137,80,253,88,118,226,169,
    53,139,230,251,66,27,14,60,21,85,14,82,208,13,169,162,
    237,74,121,173,116,244,230,228,207,109,141,74,74,92,221,29,
    131,121,124,240,56,38,120,179,65,249,159,29,120,138,185,81,
    234,105,221,47,204,141,13,185,81,142,243,244,141,211,22,216,
    87,27,244,51,143,30,203,179,55,89,229,255,3,85,165,176,
    137,254,121,54,72,204,167,61,73,113,82,181,42,139,170,155,
    247,61,117,82,208,141,129,169,250,49,183,44,214,218,93,57,
    62,124,44,133,195,190,20,56,118,235,52,124,95,75,42,121,
    234,142,31,90,225,84,181,254,35,102,96,130,242,63,176,64,
    211,52,29,160,7,51,39,245,204,190,84,1,195,163,114,26,
    245,133,21,206,160,230,136,182,65,233,71,244,216,198,168,91,
    177,186,223,196,117,217,210,21,14,85,222,216,109,210,141,61,
    81,145,147,124,47,51,133,59,48,183,33,28,57,46,21,197,
    9,90,179,105,158,123,63,211,49,249,28,20,71,109,177,44,
    141,188,183,140,213,94,40,246,101,36,191,1,237,65,241,110,
    251,36,200,190,177,114,20,194,100,237,189,99,177,252,238,88,
    159,140,107,155,160,12,51,25,71,41,214,118,61,74,189,16,
    61,226,68,223,26,137,195,52,213,9,152,151,127,27,24,221,
    41,107,204,242,62,34,93,116,20,63,160,235,243,170,0,41,
    149,67,212,198,11,156,229,124,240,148,154,186,251,252,130,62,
    27,227,20,62,116,227,212,53,37,85,48,13,213,112,193,170,
    207,42,188,111,155,199,232,242,182,28,121,127,148,230,81,39,
    91,79,227,79,35,198,21,160,160,189,158,103,189,238,16,182,
    161,93,59,236,227,111,187,58,34,223,21,111,121,226,48,131,
    113,189,45,237,163,17,121,244,171,73,176,181,26,6,215,38,
    248,33,5,25,187,98,252,121,1,10,207,40,10,87,102,36,
    87,53,177,8,171,133,67,7,227,17,169,191,70,169,34,30,
    205,165,43,66,253,167,95,63,245,82,205,187,202,218,135,51,
    3,69,190,45,166,188,248,53,194,185,161,8,200,85,119,184,
    42,53,121,205,133,6,185,11,225,139,110,39,75,248,183,61,
    101,212,68,36,166,82,151,85,210,185,221,135,121,79,249,167,
    37,108,30,28,138,121,93,52,112,39,42,18,145,90,238,134,
    193,193,49,74,94,74,96,146,71,97,175,19,13,170,109,76,
    66,231,190,170,140,71,104,214,201,212,200,27,90,205,124,172,
    66,223,91,244,146,82,184,22,235,234,82,194,26,90,215,126,
    146,193,49,13,22,42,23,144,12,82,78,111,21,119,112,103,
    50,216,141,95,107,178,197,113,235,131,40,47,255,21,120,223,
    150,61,56,109,215,57,248,153,177,167,107,103,157,243,56,6,
    149,182,101,29,179,28,107,156,71,230,156,105,185,154,116,230,
    172,154,51,135,217,54,122,216,7,219,179,150,107,181,184,167,
    141,0,98,40,158,80,59,172,232,70,157,82,182,127,167,151,
    231,188,169,213,191,57,212,57,245,106,208,217,148,67,206,129,
    32,84,236,215,91,21,191,175,226,148,253,21,71,245,175,141,
    31,155,125,21,42,157,172,120,232,253,30,154,31,125,141,44,
    243,222,100,60,255,12,132,199,133,87,117,137,64,154,86,211,
    158,182,231,172,185,87,231,172,182,28,184,12,14,7,112,169,
    106,169,234,104,54,9,10,206,17,14,28,172,120,23,209,128,
    122,15,25,248,129,82,172,58,190,193,10,188,155,104,126,11,
    13,74,33,222,247,208,160,18,224,221,37,125,252,172,14,162,
    127,128,6,135,25,222,199,70,6,194,68,161,127,84,199,20,
    144,219,22,16,126,3,187,214,170,179,30,232,183,134,26,83,
    45,167,85,107,140,241,219,105,212,165,53,239,122,99,70,167,
    35,91,1,254,83,160,180,253,85,163,4,111,103,217,225,67,
    109,44,247,203,254,157,164,207,181,247,57,197,239,185,255,211,
    4,172,215,13,131,114,184,58,55,194,242,246,73,99,231,158,
    150,46,14,92,201,169,67,174,100,240,159,31,198,151,143,242,
    223,19,192,239,251,167,7,132,30,60,1,19,5,253,233,8,
    85,11,37,228,19,150,57,1,99,67,35,133,138,242,126,92,
    184,252,9,220,50,42,74,15,186,231,113,156,70,49,232,17,
    39,215,220,145,67,103,76,244,249,19,248,152,216,94,252,78,
    179,223,148,136,3,131,23,30,21,136,170,46,152,63,220,188,
    118,193,252,219,166,185,83,44,98,100,103,231,226,139,238,197,
    75,40,0,182,145,138,110,47,194,11,185,219,136,7,182,243,
    32,93,143,218,223,92,92,236,171,227,166,11,59,219,125,97,
    211,133,237,88,124,136,192,177,250,185,34,242,250,52,202,179,
    2,99,23,94,118,185,11,10,206,254,72,223,125,165,95,96,
    231,223,143,220,135,108,33,69,3,208,25,20,225,90,1,163,
    40,11,98,146,146,123,87,86,240,121,110,251,57,252,94,122,
    212,239,243,170,36,36,145,19,50,15,139,242,62,67,179,132,
    6,43,241,238,24,13,207,86,55,216,22,43,123,251,58,105,
    59,165,246,155,42,193,201,41,143,18,241,109,52,34,113,136,
    65,177,249,71,134,215,98,151,4,165,226,132,183,67,218,78,
    141,170,84,44,49,142,250,243,205,53,208,39,110,171,101,233,
    183,61,255,226,188,59,255,23,13,187,197,166,185,97,207,215,
    235,214,179,118,195,114,106,227,86,83,28,88,83,191,213,153,
    238,20,207,154,178,102,216,128,59,206,148,253,223,137,150,184,
    202,
};

EmbeddedPython embedded_m5_util_code_formatter(
    "m5/util/code_formatter.py",
    "/users/alian/simulators/pdgem5/src/python/m5/util/code_formatter.py",
    "m5.util.code_formatter",
    data_m5_util_code_formatter,
    3953,
    10989);

} // anonymous namespace