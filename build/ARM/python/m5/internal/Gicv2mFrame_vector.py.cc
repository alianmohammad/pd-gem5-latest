#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_Gicv2mFrame_vector[] = {
    120,156,205,91,123,115,219,198,17,95,128,15,137,180,100,73,
    214,211,182,98,51,15,37,76,218,88,109,26,183,211,196,227,
    73,210,52,105,50,173,146,64,153,218,81,210,32,16,113,146,
    32,147,0,3,64,178,233,74,109,26,185,73,250,154,244,253,
    152,254,217,233,31,253,30,253,38,253,32,237,254,246,0,138,
    148,200,78,92,154,96,37,113,231,116,0,111,239,183,175,187,
    93,28,106,148,252,20,248,243,66,133,40,122,219,32,114,249,
    207,160,58,81,195,160,13,131,12,101,144,59,75,183,10,20,
    62,75,110,129,238,17,109,152,164,76,58,226,70,142,222,53,
    201,159,144,239,20,169,158,147,30,131,90,101,82,121,218,40,
    208,13,127,134,242,170,72,183,202,20,126,64,134,97,248,6,
    221,116,199,200,29,167,123,60,58,55,74,50,224,56,185,101,
    105,148,200,61,35,141,50,181,166,73,157,161,13,30,124,140,
    54,38,121,168,167,120,168,179,50,212,63,49,148,203,87,230,
    200,157,196,237,60,151,119,112,103,30,119,10,143,179,50,202,
    20,185,83,24,101,139,49,76,183,111,228,129,115,180,59,67,
    27,51,164,248,111,154,142,24,102,2,225,28,109,204,166,112,
    230,58,218,243,29,237,5,105,207,164,3,159,107,15,188,40,
    3,47,209,198,18,41,254,91,212,3,23,105,189,58,207,18,
    246,254,205,63,85,150,48,197,19,76,246,85,24,121,129,111,
    123,254,86,224,153,184,94,4,129,62,106,32,99,137,98,190,
    5,197,252,131,68,43,174,153,40,230,144,120,96,3,19,170,
    155,116,40,141,67,147,90,85,58,48,104,55,79,110,142,14,
    152,77,1,19,216,54,232,200,164,247,114,184,225,144,105,158,
    69,121,137,242,177,214,202,174,136,82,143,52,70,135,5,58,
    40,208,250,205,3,19,29,183,74,20,254,157,238,46,203,160,
    227,50,168,73,7,76,243,116,148,167,195,34,221,224,155,184,
    107,183,4,248,198,205,3,70,202,61,235,213,60,207,118,173,
    3,46,160,184,94,232,59,13,21,207,114,219,126,213,171,237,
    63,211,120,37,228,14,123,95,213,226,32,172,150,211,27,131,
    232,74,211,137,119,44,249,102,14,34,105,52,99,25,49,240,
    85,124,134,27,91,158,239,218,141,192,221,171,171,120,28,195,
    217,91,94,93,217,182,92,124,173,209,12,194,248,219,97,24,
    132,22,164,42,157,245,192,105,127,3,50,173,213,131,72,85,
    193,77,216,88,24,62,198,221,91,77,25,17,19,144,217,226,
    203,174,138,106,161,215,140,89,89,122,68,220,141,209,170,80,
    147,144,232,45,38,171,123,17,171,116,213,169,123,142,191,26,
    121,141,189,186,195,192,162,213,166,187,173,26,87,87,55,247,
    188,186,187,250,162,245,189,213,102,43,222,9,252,85,238,243,
    252,88,177,88,234,171,167,5,114,133,239,58,135,161,111,123,
    219,182,39,160,236,29,85,111,170,112,18,189,23,192,214,152,
    54,38,140,162,145,51,170,198,36,183,10,252,201,25,203,230,
    25,99,205,3,172,26,160,194,168,114,169,25,253,141,68,97,
    172,239,91,38,133,203,48,146,93,254,51,160,85,54,149,117,
    92,51,229,218,91,144,135,238,221,205,65,245,186,243,64,12,
    139,45,140,239,188,6,93,251,36,214,81,160,221,34,105,171,
    97,99,211,102,20,182,64,249,118,12,99,242,224,121,138,62,
    239,30,193,159,38,150,55,187,45,119,45,48,171,143,197,16,
    215,171,152,248,154,88,67,188,227,69,193,109,95,100,142,182,
    184,206,58,203,228,205,214,27,155,187,44,169,232,50,119,188,
    19,236,85,106,142,239,7,113,197,113,221,138,19,199,161,183,
    185,23,171,168,18,7,149,149,168,90,130,146,103,82,131,106,
    143,215,106,166,6,4,101,179,1,233,127,92,175,22,243,63,
    98,169,182,200,63,82,49,27,195,78,224,70,220,143,33,182,
    85,108,97,146,241,89,38,47,166,236,196,234,170,197,212,70,
    34,85,223,138,203,98,110,78,20,217,194,14,253,98,89,248,
    246,190,83,223,83,49,238,143,98,39,102,174,104,106,70,67,
    183,173,37,160,75,193,65,96,182,31,248,110,139,231,230,213,
    86,192,118,73,44,108,130,96,99,243,108,95,99,76,139,52,
    201,246,54,109,214,0,35,159,88,151,88,214,2,64,147,104,
    219,72,194,4,91,217,17,7,147,170,41,209,64,240,136,179,
    85,208,194,151,45,24,177,117,17,100,25,228,161,20,242,48,
    113,79,158,196,253,12,120,153,2,182,150,75,96,181,29,102,
    173,203,97,206,31,59,12,7,188,117,24,190,9,247,56,54,
    252,28,128,135,215,19,43,135,75,177,162,249,114,135,109,139,
    56,172,105,192,44,166,102,105,193,214,58,13,110,187,195,224,
    44,104,66,172,205,58,223,79,116,151,179,21,221,182,22,221,
    85,240,154,72,236,100,82,236,163,108,212,160,100,51,17,164,
    8,241,101,110,180,22,33,196,78,241,45,242,178,117,195,159,
    148,245,71,214,48,89,183,117,116,208,82,213,141,60,44,106,
    43,71,11,201,186,18,193,153,155,97,112,167,85,9,182,42,
    49,165,115,184,182,18,93,89,137,158,103,119,175,92,151,0,
    162,29,94,187,116,168,154,33,187,110,73,254,209,238,104,139,
    107,218,201,178,192,98,198,26,45,218,17,225,74,244,137,226,
    16,65,103,232,146,45,183,37,139,137,62,15,70,101,17,107,
    142,22,249,83,54,100,54,118,32,17,79,118,7,114,149,63,
    47,65,192,192,168,8,187,53,107,93,207,85,96,0,144,245,
    68,151,101,12,17,132,245,20,143,250,114,234,76,69,106,219,
    1,62,57,76,19,246,253,41,201,158,201,160,79,8,58,103,
    213,38,30,33,190,135,15,84,55,139,219,223,39,9,38,61,
    22,43,83,123,150,153,132,27,118,188,232,27,114,171,94,187,
    94,167,207,58,34,209,81,142,12,172,51,185,100,87,212,185,
    206,228,219,190,40,198,242,133,214,146,124,183,211,66,49,59,
    78,132,219,180,123,230,218,238,121,28,212,218,123,25,142,57,
    195,180,163,113,205,194,198,108,94,59,182,34,4,241,139,198,
    172,217,97,27,95,6,121,186,109,22,70,218,55,164,137,93,
    62,25,117,59,86,27,91,71,186,239,128,123,94,230,59,85,
    148,117,85,47,243,175,241,192,96,223,54,251,66,106,246,255,
    106,155,189,146,0,124,79,246,200,160,38,116,125,100,26,156,
    142,240,230,2,153,64,158,84,129,54,138,164,198,176,149,69,
    158,81,72,242,12,222,159,163,113,134,142,243,18,201,57,144,
    154,24,200,39,146,212,228,108,154,154,112,82,49,33,141,233,
    36,251,224,60,34,201,55,206,33,223,64,99,54,201,55,54,
    230,144,40,160,49,159,36,10,27,11,72,167,208,88,68,254,
    130,198,18,185,243,210,56,79,238,130,52,46,144,187,40,141,
    139,240,104,196,127,241,166,244,35,81,21,209,184,107,57,18,
    37,174,105,245,182,237,83,155,30,200,157,161,71,49,88,223,
    181,186,211,216,116,157,235,235,96,3,94,181,52,4,152,233,
    196,167,59,39,14,247,53,250,205,93,254,253,74,10,96,127,
    232,17,236,171,48,186,116,226,226,175,110,80,147,176,245,246,
    142,170,52,84,99,147,25,238,120,205,202,86,221,217,22,141,
    228,18,96,111,164,192,98,177,193,147,203,125,132,216,184,22,
    84,106,129,207,75,202,30,248,85,92,197,121,140,114,43,79,
    87,100,61,170,120,81,197,217,228,171,78,45,214,238,216,29,
    77,100,231,232,132,219,145,108,18,111,221,70,51,19,141,218,
    156,161,122,188,31,126,187,173,209,83,166,136,169,185,199,22,
    40,179,47,180,195,202,5,202,96,241,129,234,110,156,154,97,
    219,230,38,181,106,118,141,116,91,214,105,112,146,212,205,157,
    10,56,182,108,207,51,196,128,165,226,102,138,65,103,112,237,
    245,179,211,121,218,64,244,218,119,26,203,236,105,44,158,95,
    11,59,54,55,248,134,63,116,243,129,93,128,241,59,167,130,
    193,192,120,92,213,137,199,250,102,6,250,17,56,224,187,209,
    101,103,41,156,87,123,193,249,101,47,83,91,236,1,135,51,
    91,199,175,169,14,72,207,102,1,9,14,158,242,126,119,64,
    88,61,60,72,125,184,231,212,179,198,132,200,35,140,223,27,
    36,30,244,176,185,90,208,108,101,23,14,196,220,192,242,7,
    15,24,134,175,238,196,25,195,0,203,247,7,129,209,195,101,
    108,1,98,219,25,66,73,106,69,194,214,126,192,112,154,161,
    218,247,130,189,40,99,56,41,219,15,6,116,254,133,211,136,
    28,119,127,20,33,13,9,89,194,218,25,16,212,124,47,171,
    83,31,178,205,101,140,169,40,134,7,206,155,195,128,228,171,
    81,65,2,231,218,128,144,122,198,6,143,115,247,236,65,37,
    251,101,225,237,14,5,86,180,183,57,50,88,194,91,61,248,
    64,97,219,35,81,150,148,212,52,235,173,97,128,26,137,170,
    52,40,97,189,77,39,87,168,174,132,237,224,56,97,147,73,
    101,189,140,122,124,143,109,239,164,147,172,74,181,172,93,178,
    148,2,144,174,24,53,195,160,169,194,184,165,235,116,95,7,
    121,18,100,165,43,168,185,170,174,98,101,119,107,33,158,166,
    118,73,221,85,156,92,7,45,219,78,100,196,95,176,109,201,
    185,172,231,64,174,129,92,7,121,1,228,37,16,148,51,173,
    87,64,80,157,178,94,7,249,46,8,158,11,88,111,130,88,
    32,200,141,173,239,131,220,232,18,224,48,179,197,85,176,195,
    240,40,219,21,141,139,70,201,40,242,7,191,19,252,91,234,
    251,43,143,21,245,56,157,15,98,79,215,215,92,227,11,212,
    215,244,131,254,164,202,86,76,203,106,99,105,89,109,28,165,
    180,228,201,254,120,90,113,43,165,21,55,93,89,155,72,43,
    107,147,105,101,237,108,90,89,155,74,43,107,211,105,101,109,
    38,173,172,157,75,43,107,179,105,101,109,46,173,172,205,167,
    149,181,133,180,178,182,152,86,214,150,210,202,218,121,114,151,
    210,90,219,249,164,214,230,94,144,198,50,185,23,165,241,16,
    185,203,210,184,68,238,67,210,184,76,238,37,105,84,200,189,
    44,141,135,201,173,72,227,17,114,31,150,198,163,228,62,34,
    141,199,200,125,84,26,43,228,62,38,141,199,73,61,65,187,
    85,218,120,146,220,21,233,121,10,5,190,199,123,58,233,125,
    20,248,164,72,150,73,141,229,195,118,80,121,16,117,61,235,
    153,204,231,109,125,141,146,71,17,253,106,122,247,185,151,191,
    216,211,155,36,188,97,226,25,199,213,148,109,68,125,131,127,
    185,173,167,163,19,53,187,247,41,203,117,64,98,101,124,106,
    158,247,33,250,75,189,69,111,227,225,194,93,21,6,153,38,
    135,56,42,210,193,121,111,16,96,125,108,138,183,255,65,80,
    31,65,202,171,217,238,15,2,233,66,63,72,117,229,103,138,
    72,175,254,194,245,246,32,128,22,122,3,106,6,205,12,193,
    96,155,202,28,239,116,1,185,255,253,235,229,126,202,217,86,
    113,84,247,106,35,200,15,39,68,77,199,252,91,195,130,24,
    141,24,226,49,255,187,195,130,200,91,221,145,66,60,230,255,
    195,1,33,246,141,248,204,130,151,190,70,246,8,207,164,8,
    53,251,131,97,1,100,79,24,37,192,54,251,195,97,1,140,
    70,11,176,205,254,71,3,2,60,223,27,160,211,108,42,223,
    29,69,149,77,115,254,49,13,176,214,45,245,198,164,26,205,
    56,203,39,34,242,100,7,60,63,26,4,204,98,111,48,145,
    119,55,195,135,189,250,128,40,179,252,201,16,244,82,171,43,
    39,203,196,67,31,169,102,158,31,15,232,59,253,84,115,219,
    105,102,237,57,162,31,230,123,52,136,126,42,189,241,108,227,
    136,86,189,30,212,50,78,16,49,225,46,222,247,134,96,124,
    155,106,219,243,51,54,62,225,249,211,65,192,244,217,205,35,
    100,103,187,155,103,142,159,12,2,164,207,242,19,102,173,22,
    172,60,154,233,167,131,192,233,19,17,194,108,21,131,96,0,
    150,159,13,2,165,79,82,207,233,155,189,233,212,110,101,253,
    224,55,97,251,51,26,44,100,247,219,26,132,78,148,249,163,
    95,217,31,128,241,207,187,64,229,58,65,61,119,12,138,17,
    233,215,166,230,58,14,157,203,217,98,227,134,63,141,131,233,
    7,114,196,216,54,245,217,244,227,106,89,190,43,110,248,234,
    182,125,90,4,186,222,137,250,86,199,145,96,136,65,46,12,
    189,184,134,231,36,191,32,74,143,0,79,25,57,154,227,207,
    255,168,229,229,62,182,187,23,237,104,227,205,88,211,242,14,
    64,202,252,243,65,188,178,143,253,110,133,129,159,229,41,25,
    152,174,240,252,245,16,162,101,198,225,5,222,1,150,191,25,
    48,180,244,203,164,162,200,219,246,71,146,73,9,231,223,14,
    7,86,168,36,3,25,1,44,205,249,119,195,129,229,249,60,
    229,120,20,176,52,231,223,15,8,171,79,221,154,101,166,194,
    253,145,28,110,74,88,255,97,144,64,209,103,47,82,115,154,
    78,205,203,52,167,199,94,36,101,251,199,83,144,186,78,44,
    252,31,28,49,255,115,58,195,234,151,168,243,184,130,133,115,
    219,250,128,194,241,217,4,60,78,147,135,92,214,7,32,155,
    32,56,21,100,225,184,137,133,147,15,214,46,72,29,196,7,
    105,130,132,148,236,27,44,60,112,177,80,219,183,80,26,182,
    80,91,180,80,158,178,62,2,65,178,109,33,131,179,144,48,
    88,216,155,90,216,248,232,35,18,191,2,193,202,104,33,12,
    91,240,110,11,38,99,253,9,228,47,32,127,237,242,221,228,
    0,69,143,141,12,206,59,91,239,118,137,120,152,114,198,177,
    93,8,34,194,113,11,28,108,40,254,151,195,12,125,126,243,
    167,251,100,23,118,226,69,123,141,5,232,245,219,89,173,8,
    39,42,200,154,106,75,70,159,145,76,14,160,64,201,178,245,
    88,227,25,235,87,204,43,184,243,97,144,71,83,229,75,240,
    209,175,234,201,59,113,250,173,67,222,36,202,123,30,242,90,
    135,117,5,100,53,245,196,19,71,135,112,92,37,228,204,41,
    226,142,24,7,84,26,87,175,164,50,187,210,116,88,92,157,
    234,145,247,214,27,87,101,160,211,55,174,123,13,253,158,116,
    60,115,226,186,27,58,220,158,63,209,203,202,244,88,151,119,
    149,168,161,223,35,133,206,25,102,98,20,250,221,34,253,170,
    230,117,20,108,35,156,212,193,171,201,165,169,146,81,52,241,
    226,123,206,40,27,147,70,222,152,152,44,229,74,197,82,33,
    199,134,131,158,89,163,156,43,149,23,22,75,70,217,156,48,
    244,239,194,147,37,227,63,130,222,99,142,
};

EmbeddedPython embedded_m5_internal_Gicv2mFrame_vector(
    "m5/internal/Gicv2mFrame_vector.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/Gicv2mFrame_vector.py",
    "m5.internal.Gicv2mFrame_vector",
    data_m5_internal_Gicv2mFrame_vector,
    3259,
    17151);

} // anonymous namespace