#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_debug[] = {
    120,156,205,92,107,108,28,73,94,255,247,204,216,241,140,237,
    196,142,19,231,157,76,54,155,100,146,221,196,251,202,158,184,
    91,162,219,36,119,75,78,183,217,165,29,93,118,231,142,155,
    109,79,151,237,182,103,186,39,221,109,39,94,28,16,151,229,
    238,208,173,56,1,66,136,151,196,235,16,135,0,1,2,1,
    66,8,16,32,248,192,7,62,241,129,15,124,0,9,9,196,
    251,253,62,254,191,127,119,245,76,123,28,54,73,119,39,137,
    61,149,114,117,205,191,126,85,245,127,86,85,87,155,226,127,
    35,252,249,104,157,40,184,94,38,178,249,215,160,14,81,215,
    160,166,65,134,50,200,126,150,86,71,200,127,137,236,17,122,
    143,168,89,34,85,162,187,156,41,211,167,75,228,78,200,119,
    70,169,83,150,18,131,54,106,164,42,212,28,161,27,238,52,
    85,212,40,173,214,200,127,135,12,195,112,13,122,203,222,65,
    246,24,189,199,212,57,83,21,130,99,100,215,36,83,37,123,
    92,50,53,218,152,34,53,78,77,38,190,131,154,147,76,234,
    44,147,218,41,164,126,23,164,108,126,114,142,236,73,84,103,
    44,111,163,102,5,53,165,141,157,66,101,23,217,187,64,101,
    145,251,48,149,84,100,194,101,90,153,166,230,52,41,254,157,
    162,187,220,77,123,90,190,177,91,158,237,70,198,222,173,191,
    58,147,124,117,70,30,239,161,230,30,82,252,59,19,125,85,
    114,168,184,55,169,184,87,42,206,82,115,150,20,255,238,141,
    42,74,14,21,247,37,21,247,73,197,253,212,220,79,138,127,
    247,69,21,247,11,152,3,242,236,0,50,246,1,41,57,40,
    37,7,145,177,15,74,201,33,41,57,132,140,125,72,74,14,
    75,201,97,100,236,195,82,114,68,74,142,32,99,31,145,146,
    163,82,114,20,25,251,168,238,230,177,4,212,49,121,92,167,
    102,157,20,255,30,19,80,40,58,78,205,227,164,142,211,202,
    83,212,124,74,50,39,168,121,130,236,186,80,125,90,190,246,
    52,50,246,113,41,57,41,37,39,145,177,159,146,146,83,82,
    114,74,103,78,83,243,180,100,26,212,108,144,125,66,234,156,
    145,146,51,200,216,79,75,201,89,41,57,139,140,125,82,74,
    158,145,146,103,144,177,79,73,201,179,82,242,44,50,246,105,
    41,57,39,37,231,144,177,27,186,151,103,146,94,158,151,199,
    115,212,156,35,197,191,231,163,94,114,159,158,163,230,115,210,
    185,231,169,249,188,100,94,160,230,11,146,121,145,154,47,74,
    230,37,106,178,60,156,149,118,46,8,161,11,200,216,207,72,
    201,203,82,242,50,50,44,24,243,141,243,44,97,206,215,248,
    95,195,224,92,56,193,201,186,242,3,199,115,91,142,187,232,
    57,37,60,31,69,2,121,108,35,217,17,11,230,101,8,230,
    87,73,164,210,46,197,130,121,135,152,73,12,200,93,167,68,
    119,36,115,167,68,27,13,218,52,104,165,66,118,153,54,185,
    153,17,244,104,201,160,187,37,250,76,25,21,238,112,90,97,
    81,58,74,149,48,146,202,21,17,165,136,210,14,186,51,66,
    155,35,52,255,214,102,9,5,171,85,242,191,66,239,30,22,
    162,99,66,180,68,155,156,86,232,110,133,238,140,210,13,174,
    196,69,43,85,140,167,241,214,38,247,148,75,230,27,21,70,
    123,109,160,187,232,138,237,248,174,213,85,33,58,217,178,213,
    194,218,82,163,166,159,121,193,249,158,21,46,155,82,185,140,
    81,232,246,66,33,226,185,42,28,231,204,162,227,218,173,174,
    103,175,117,84,56,6,10,173,69,167,163,90,45,121,120,181,
    219,243,252,240,99,190,239,249,38,6,82,10,59,158,149,124,
    3,195,216,238,120,129,106,160,53,105,198,4,249,16,181,23,
    123,66,17,0,4,32,190,108,171,160,237,59,189,144,231,39,
    162,136,218,160,214,192,204,72,18,124,61,39,115,107,1,207,
    226,156,213,113,44,119,46,112,186,107,29,43,244,184,160,103,
    47,169,238,133,185,133,53,167,99,207,189,106,190,62,215,219,
    8,151,61,174,114,203,89,154,147,206,159,231,146,221,32,195,
    37,45,71,58,208,90,86,157,158,242,39,81,122,16,77,24,
    83,198,132,49,106,148,141,134,49,201,185,17,254,148,141,195,
    165,113,227,154,131,46,180,209,45,12,103,89,115,201,143,147,
    204,7,79,231,106,137,252,195,224,129,21,254,53,48,105,204,
    9,243,120,86,146,103,223,136,190,71,165,43,101,204,108,84,
    184,41,124,195,12,196,53,95,193,84,186,36,147,63,66,43,
    163,20,49,5,243,82,196,37,254,6,82,174,14,50,37,38,
    94,161,224,203,105,10,238,20,241,216,178,86,230,162,89,110,
    234,115,194,103,243,13,0,191,38,51,31,46,59,129,119,203,
    149,241,69,94,36,99,158,199,228,205,141,55,22,86,84,59,
    12,142,113,193,219,222,90,189,109,185,174,23,214,45,219,174,
    91,97,232,59,11,107,161,10,234,161,87,63,25,52,170,152,
    208,105,205,60,9,189,141,158,102,22,76,44,51,75,244,135,
    237,180,67,254,99,70,254,144,241,15,84,200,19,191,236,217,
    1,151,131,196,146,10,77,128,12,119,114,242,170,110,78,56,
    172,49,170,249,33,80,157,197,176,38,172,101,5,65,75,154,
    67,185,112,17,190,189,110,117,214,34,134,15,66,43,228,86,
    145,141,26,202,149,143,246,163,39,186,35,24,156,150,235,185,
    246,6,227,112,218,39,209,196,126,225,166,9,2,63,237,101,
    94,218,193,233,40,77,50,111,77,149,218,128,92,137,57,73,
    184,104,22,29,36,153,89,35,150,120,230,168,187,172,23,26,
    37,17,108,193,46,66,84,71,14,95,54,193,176,230,33,36,
    135,145,28,209,221,203,171,143,147,91,251,248,2,232,150,164,
    99,237,114,220,133,68,16,174,165,4,225,64,95,16,88,79,
    205,131,161,75,96,251,62,67,151,209,73,255,98,204,189,16,
    21,158,64,126,60,192,179,210,117,115,10,93,26,213,236,102,
    130,135,6,25,105,105,128,145,76,140,186,112,145,121,224,94,
    195,116,172,184,97,90,138,134,233,2,232,78,196,243,63,41,
    243,94,51,218,152,188,82,60,104,50,96,87,56,179,177,15,
    3,54,56,84,251,216,178,220,112,39,197,68,136,153,17,215,
    42,146,240,104,4,163,76,5,156,178,88,166,217,88,245,7,
    16,200,158,239,221,222,168,123,139,245,144,52,134,87,78,6,
    231,79,6,31,97,145,173,95,20,37,16,9,109,36,150,190,
    234,249,44,126,85,249,35,18,169,150,136,87,43,86,227,60,
    164,123,49,84,37,61,144,162,65,130,208,135,226,200,117,20,
    107,201,40,2,212,71,64,180,38,67,88,166,125,252,169,25,
    210,114,203,19,13,37,198,90,158,242,231,18,6,19,253,81,
    4,231,217,156,143,112,9,100,128,55,79,167,102,60,39,192,
    230,89,166,112,69,11,196,40,37,243,139,79,25,144,192,163,
    95,32,241,127,12,250,60,97,46,121,202,98,174,22,249,193,
    7,83,50,131,234,159,37,17,254,109,12,73,41,146,142,82,
    172,30,88,120,130,15,73,213,200,174,124,130,190,56,160,57,
    238,150,201,128,13,40,199,14,201,160,13,168,36,242,36,76,
    112,95,122,190,146,22,60,76,194,178,21,160,90,36,98,229,
    68,196,250,74,40,241,41,88,111,228,197,31,99,17,185,22,
    90,190,218,231,14,40,216,67,198,76,105,96,206,159,69,114,
    46,153,110,67,151,229,0,226,216,86,141,56,160,245,91,145,
    22,250,6,180,84,17,108,187,70,197,150,69,166,245,106,168,
    124,52,149,176,238,136,102,221,63,79,88,87,137,114,124,79,
    220,78,164,37,204,225,221,146,193,17,30,27,116,248,184,21,
    82,35,212,28,37,181,3,222,33,66,183,145,56,116,99,151,
    23,153,113,234,135,122,18,198,33,218,51,16,162,197,209,222,
    78,29,237,113,156,54,33,153,169,56,160,227,208,44,14,225,
    118,35,132,67,102,38,14,225,56,244,138,99,181,189,8,209,
    144,153,141,67,52,14,166,56,22,67,102,127,28,139,33,114,
    154,141,35,167,40,232,226,56,137,165,18,186,89,164,68,127,
    68,11,66,123,166,76,133,76,216,181,104,42,19,190,139,88,
    10,201,237,92,181,14,184,234,149,142,213,93,176,173,139,243,
    32,9,186,109,45,198,37,13,114,106,16,36,68,208,184,23,
    78,249,243,57,13,118,61,87,141,243,60,152,73,131,20,249,
    178,189,182,168,153,235,203,170,222,85,221,5,38,190,236,244,
    234,139,29,107,73,70,186,28,119,226,13,221,137,80,120,107,
    171,137,13,160,203,174,121,245,182,231,178,106,95,107,51,166,
    186,173,216,255,87,118,253,92,93,236,66,221,9,234,214,2,
    63,181,218,97,36,82,105,233,23,47,204,242,151,2,113,184,
    86,111,33,155,251,76,181,56,112,115,216,143,188,158,204,212,
    16,59,1,134,221,231,34,65,58,146,168,129,131,148,179,17,
    192,148,220,24,66,147,240,205,100,52,228,43,134,118,113,6,
    153,70,130,156,61,67,10,162,37,46,108,65,120,161,158,223,
    210,120,163,136,38,177,89,131,204,158,128,142,236,205,48,238,
    153,97,220,142,219,246,7,28,5,124,195,205,149,5,48,183,
    104,228,237,33,65,205,140,221,86,131,216,205,175,203,121,220,
    5,58,218,104,166,120,69,67,127,109,59,232,239,111,199,46,
    251,182,129,206,17,156,229,182,213,0,252,151,242,134,15,225,
    211,237,124,58,99,23,182,225,120,117,115,205,234,20,137,31,
    26,64,26,249,76,22,89,221,134,111,218,94,111,163,24,81,
    21,150,1,249,111,202,25,178,171,110,135,5,66,6,249,207,
    102,129,188,13,139,183,4,116,171,85,16,236,120,189,66,154,
    104,229,12,189,231,171,117,199,91,11,10,132,174,155,120,39,
    163,96,206,14,163,183,236,245,162,85,11,2,138,184,25,43,
    99,7,246,110,199,57,234,38,243,77,129,248,101,109,85,90,
    89,40,2,190,171,30,5,124,180,210,206,8,127,91,185,117,
    56,166,44,182,3,177,95,40,237,216,133,116,33,88,91,120,
    36,93,144,118,84,254,66,220,106,21,62,9,178,52,19,53,
    179,88,68,7,10,159,130,168,3,210,204,18,109,181,0,169,
    224,98,179,31,92,8,128,34,77,146,195,35,208,106,45,107,
    64,13,89,97,73,150,180,100,113,33,90,141,232,249,94,79,
    249,225,70,180,182,243,50,146,51,72,78,166,148,139,173,58,
    42,84,173,244,232,134,83,148,44,165,218,138,3,60,111,163,
    213,138,199,131,191,208,106,73,204,96,126,24,201,43,72,46,
    34,249,40,146,75,72,176,4,102,126,28,9,86,62,204,79,
    32,249,36,18,172,7,155,111,34,49,145,32,102,51,63,133,
    228,70,106,176,242,138,108,230,64,26,164,176,212,51,106,28,
    50,170,198,40,127,240,51,193,63,213,123,254,164,214,18,101,
    154,107,9,159,110,93,143,144,161,196,227,5,95,89,171,61,
    207,113,195,252,123,2,31,181,75,201,74,187,120,85,31,71,
    68,175,129,38,43,71,55,41,239,149,35,100,38,100,253,136,
    100,205,168,170,215,140,106,241,154,145,57,223,24,223,86,54,
    30,96,29,71,214,71,114,15,195,111,38,114,155,199,242,141,
    249,66,161,24,205,23,41,94,33,126,252,75,55,162,77,205,
    11,121,247,23,90,200,167,255,87,151,62,226,133,154,181,33,
    52,15,224,219,87,99,41,148,125,205,130,64,66,191,175,231,
    2,18,155,233,5,6,121,32,127,43,23,160,171,142,93,84,
    108,4,160,32,127,59,11,208,113,13,84,185,214,66,167,160,
    137,23,47,60,106,96,35,11,216,137,100,250,157,160,64,180,
    209,209,18,105,225,93,13,183,33,158,71,226,155,152,88,100,
    188,183,55,18,157,247,16,111,4,120,77,44,139,153,88,88,
    138,54,145,222,65,130,112,202,132,71,111,46,82,17,14,3,
    214,85,122,32,133,5,169,180,195,16,253,136,161,159,119,186,
    189,142,218,222,252,186,116,31,230,55,58,148,23,27,225,81,
    109,117,119,104,171,59,70,42,178,198,59,180,53,30,139,173,
    177,154,160,149,73,177,189,213,190,237,173,209,19,105,123,191,
    149,158,124,219,155,96,188,63,219,155,68,45,31,238,139,29,
    135,44,209,153,175,61,3,219,241,178,59,107,220,112,167,176,
    101,191,41,155,180,173,82,180,107,223,159,137,74,194,250,112,
    218,93,117,171,213,103,172,104,67,30,42,192,234,245,148,107,
    111,181,204,211,121,143,6,36,242,219,40,217,66,221,101,148,
    105,15,127,30,70,227,76,167,68,164,133,51,55,133,173,117,
    233,67,61,107,193,183,83,6,37,57,155,134,220,194,22,238,
    187,202,247,10,91,94,132,178,27,104,229,243,148,184,246,57,
    140,120,145,102,73,180,239,151,178,140,245,238,52,216,66,205,
    146,152,137,247,135,208,62,78,135,243,59,233,3,173,99,223,
    48,138,157,236,32,129,93,137,87,0,22,60,15,33,120,98,
    6,251,60,160,131,249,190,26,73,140,104,254,182,18,75,16,
    223,66,3,182,146,45,101,133,109,100,105,180,28,219,74,184,
    30,151,189,110,207,91,115,237,237,173,37,98,255,28,172,101,
    149,86,106,169,96,149,173,226,216,182,19,254,216,173,226,247,
    208,147,111,21,19,140,143,215,42,98,60,96,21,7,89,40,
    26,132,21,26,142,85,11,177,136,223,75,185,88,196,153,45,
    130,80,188,134,254,126,202,160,161,247,108,133,91,188,142,254,
    129,33,188,143,83,71,255,144,70,211,192,96,221,143,142,222,
    162,140,49,225,177,50,78,113,111,129,234,24,120,191,27,164,
    224,76,14,168,227,135,89,205,132,238,180,58,29,64,14,242,
    71,138,216,251,71,169,239,240,104,100,248,243,181,33,14,125,
    255,94,0,241,42,2,16,70,124,144,247,234,191,137,160,251,
    43,217,80,74,96,182,108,185,75,170,64,156,136,182,191,154,
    13,39,236,116,160,194,43,32,89,32,210,111,102,10,63,155,
    13,41,120,187,221,81,150,95,52,86,6,64,191,176,5,235,
    131,72,16,128,218,107,221,94,130,179,0,57,186,195,20,126,
    185,143,81,98,161,203,27,60,60,193,176,163,133,29,153,7,
    117,180,134,119,5,216,173,66,35,79,160,91,245,107,244,228,
    187,85,9,198,199,235,86,129,115,197,173,18,86,121,196,14,
    213,175,211,189,29,170,199,105,241,127,75,207,141,236,100,221,
    143,197,151,177,4,223,107,59,31,13,103,129,22,30,193,214,
    175,234,241,235,91,248,135,181,76,190,215,125,221,105,251,222,
    155,151,11,210,161,88,78,250,3,202,164,239,81,195,245,252,
    174,213,41,22,234,231,152,194,31,102,131,10,35,234,4,102,
    209,131,202,202,149,254,40,27,82,76,126,208,94,86,246,37,
    108,88,23,132,147,13,6,253,113,54,156,176,161,161,181,170,
    46,47,171,118,188,175,94,12,86,44,29,254,201,22,172,26,
    239,253,24,123,60,86,235,202,13,111,94,97,147,159,191,224,
    99,117,240,79,51,224,131,250,194,155,148,170,235,133,234,181,
    43,151,222,244,252,2,142,40,124,129,41,252,89,182,25,7,
    208,96,43,208,98,230,252,139,76,225,47,250,104,37,162,120,
    53,14,121,134,221,39,246,149,114,88,167,138,151,167,170,122,
    63,167,166,183,113,198,245,89,138,9,253,34,206,164,126,17,
    103,167,126,17,103,151,126,17,103,74,191,136,51,173,95,196,
    217,173,95,196,153,209,47,226,236,209,47,226,236,213,47,226,
    204,234,23,113,246,233,23,113,246,235,23,113,14,80,124,205,
    193,65,125,187,193,33,125,169,193,97,125,151,193,17,125,133,
    193,81,125,115,193,49,92,88,128,76,61,190,176,160,121,92,
    95,63,240,148,190,117,224,132,190,108,224,105,125,163,192,73,
    125,145,192,41,82,167,229,178,129,51,250,34,129,179,112,47,
    79,209,19,233,94,254,21,61,249,238,101,130,241,131,221,203,
    135,216,94,208,178,33,231,207,0,173,192,67,110,186,137,191,
    78,70,125,136,35,106,201,168,223,221,226,40,126,137,10,115,
    20,113,72,237,111,134,48,61,224,194,90,50,144,133,111,50,
    201,158,193,223,102,193,59,157,198,27,109,60,20,4,22,199,
    160,254,46,11,216,169,52,216,142,114,11,219,189,139,78,66,
    74,11,127,159,5,242,196,32,228,158,215,43,8,46,2,59,
    166,254,15,41,168,0,240,224,103,209,7,6,152,61,138,160,
    227,180,11,62,139,62,33,67,221,111,235,31,243,237,68,240,
    8,59,209,111,235,159,242,237,4,71,160,143,172,19,253,182,
    254,57,99,39,246,12,117,130,245,126,183,216,62,140,235,62,
    68,77,253,75,190,93,96,46,125,84,93,72,154,250,215,124,
    187,16,60,186,46,36,77,253,91,198,46,236,26,236,66,124,
    92,166,56,244,178,86,246,239,148,65,235,239,28,196,171,186,
    189,176,168,183,5,229,13,71,208,255,143,44,112,39,7,225,
    6,206,187,69,157,32,196,170,31,200,255,103,110,99,43,59,
    5,5,142,173,208,255,175,140,220,155,30,222,91,86,175,72,
    201,147,49,230,54,254,59,203,24,207,14,34,94,194,245,27,
    157,142,215,46,48,38,0,164,84,59,255,147,27,139,44,168,
    37,199,45,144,69,132,254,255,102,129,155,242,17,161,218,138,
    243,17,153,250,215,178,64,77,41,98,191,200,161,197,46,84,
    212,0,48,230,163,218,252,226,6,23,98,7,242,70,22,176,
    169,96,140,221,249,214,130,213,94,45,242,21,226,184,137,146,
    145,77,193,165,205,157,111,5,133,190,58,44,54,15,141,148,
    83,176,139,220,80,131,132,98,67,77,119,242,17,111,169,85,
    140,237,183,212,30,124,166,118,167,56,108,45,88,142,88,172,
    192,217,146,251,201,116,67,99,89,164,35,197,101,139,190,231,
    22,117,159,1,24,76,232,87,115,211,60,5,10,50,184,20,
    228,107,25,133,56,237,99,7,129,179,228,22,253,6,122,212,
    202,120,158,192,125,37,254,107,193,192,163,86,38,242,4,238,
    184,12,42,44,26,120,212,202,100,70,224,169,117,56,30,11,
    229,175,23,126,89,68,220,204,206,220,236,107,219,234,89,109,
    167,176,200,12,246,85,55,177,107,8,116,178,202,253,24,14,
    66,76,107,52,141,103,232,3,15,66,96,173,93,86,197,101,
    169,89,150,112,205,47,35,249,46,36,56,70,108,226,4,173,
    249,125,72,112,36,213,252,65,36,63,76,177,125,52,127,4,
    201,143,33,249,9,36,63,137,228,167,144,252,52,146,159,65,
    242,115,72,126,30,201,47,34,249,37,36,114,0,227,87,144,
    224,76,141,137,67,37,230,111,32,249,77,36,191,141,228,119,
    144,252,94,74,154,226,131,26,137,153,46,240,168,198,119,48,
    133,191,4,41,188,250,30,31,213,120,208,159,74,14,175,165,
    195,162,115,228,164,187,252,169,232,170,235,252,251,251,251,76,
    225,144,241,240,59,212,227,105,156,249,3,196,57,148,99,125,
    128,226,152,109,185,236,59,106,239,67,128,35,215,84,110,4,
    184,58,128,204,93,9,74,241,138,245,173,10,144,7,241,95,
    174,89,221,232,70,98,185,133,215,60,142,228,132,150,19,209,
    171,209,253,164,114,57,104,116,173,42,123,139,242,22,182,188,
    116,109,226,78,114,185,170,32,196,133,180,91,238,185,64,55,
    124,14,116,2,46,144,91,0,228,29,69,81,86,209,219,85,
    131,207,151,241,72,46,44,25,120,253,106,176,2,36,59,68,
    163,169,227,221,169,42,56,157,43,135,95,229,100,169,28,218,
    148,211,144,114,220,80,206,32,69,199,217,229,184,83,234,171,
    209,237,84,235,150,47,227,199,115,41,170,249,117,235,246,117,
    167,189,42,167,129,228,156,141,28,97,17,206,188,228,44,125,
    204,181,121,62,47,109,132,234,13,223,102,18,208,55,159,116,
    194,176,163,182,60,145,3,37,114,82,67,142,67,200,105,3,
    217,196,23,89,75,175,136,167,64,65,241,199,71,114,76,175,
    123,137,105,199,168,94,181,109,95,244,194,85,119,157,185,202,
    190,190,236,43,203,190,122,69,12,88,92,118,153,253,60,117,
    59,228,194,201,126,33,78,37,92,189,34,60,47,124,149,59,
    183,70,55,80,70,151,237,94,132,104,4,80,140,184,52,186,
    186,171,106,140,150,112,253,120,217,168,25,147,70,197,152,152,
    172,150,171,163,213,145,50,171,24,148,204,24,181,114,181,54,
    187,175,138,255,75,85,99,118,156,115,165,217,105,73,199,227,
    210,237,126,140,217,42,63,141,20,205,96,29,252,189,125,253,
    51,73,253,129,239,252,31,78,201,171,239,
};

EmbeddedPython embedded_m5_internal_debug(
    "m5/internal/debug.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/swig/debug.py",
    "m5.internal.debug",
    data_m5_internal_debug,
    4571,
    25292);

} // anonymous namespace