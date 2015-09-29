#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Uart8250[] = {
    120,156,189,88,109,115,219,198,17,222,3,64,74,164,68,75,
    178,44,191,202,17,156,84,9,157,105,164,212,173,154,76,227,
    241,212,177,59,83,119,70,138,11,166,99,135,237,20,133,128,
    163,4,10,4,56,192,73,14,51,210,151,202,211,246,91,127,
    68,167,31,250,63,250,191,218,221,61,0,4,41,105,154,153,
    148,150,136,155,197,189,236,237,203,179,123,123,240,33,255,171,
    225,243,75,27,32,51,12,128,0,127,2,34,128,129,128,174,
    0,33,5,4,171,112,84,131,244,103,16,212,224,45,64,215,
    0,105,192,57,18,38,252,222,128,120,145,215,212,33,50,185,
    71,192,168,9,210,130,110,13,94,197,43,96,201,58,28,53,
    33,253,19,8,33,98,1,175,131,57,8,230,225,45,114,71,
    162,193,12,231,33,104,50,209,128,96,129,137,38,140,150,65,
    46,64,23,153,207,65,183,133,172,62,70,86,215,152,213,191,
    137,85,128,35,55,32,104,209,116,148,229,27,154,105,209,76,
    222,227,26,115,89,42,36,91,134,238,74,65,95,175,208,171,
    21,250,70,133,94,171,208,55,43,244,173,10,125,187,66,223,
    169,208,119,43,244,189,10,189,94,161,239,87,232,247,42,244,
    70,133,182,43,244,3,166,151,64,174,64,255,125,232,127,0,
    253,31,65,15,29,179,92,106,191,9,210,132,254,135,208,253,
    16,36,254,54,225,28,125,23,172,84,86,124,196,43,174,151,
    43,218,188,226,33,116,31,130,196,95,91,175,168,67,167,189,
    134,120,8,255,131,127,109,129,148,90,196,230,68,166,89,152,
    196,110,24,247,146,208,160,241,58,53,132,30,159,154,185,28,
    70,207,8,70,255,2,198,80,96,228,48,58,3,100,44,72,
    151,200,128,51,38,206,12,24,181,225,84,64,223,130,192,132,
    83,220,166,70,2,28,8,56,55,224,15,38,77,56,195,214,
    66,199,191,7,150,210,24,234,179,227,53,167,57,56,171,193,
    105,13,58,175,79,13,234,56,106,64,250,79,248,110,157,153,
    206,51,83,3,78,177,181,224,220,130,179,58,188,194,73,216,
    213,111,144,250,226,245,41,106,138,61,157,182,133,210,238,85,
    212,37,85,130,48,141,189,129,84,75,72,187,67,47,245,6,
    238,239,188,84,125,254,104,231,211,118,179,152,148,100,91,67,
    79,29,58,188,202,36,115,12,134,138,185,37,177,84,11,72,
    244,194,56,112,7,73,112,28,73,53,79,172,220,94,24,73,
    215,229,193,23,131,97,146,170,95,165,105,146,58,100,81,238,
    140,18,175,92,65,246,244,163,36,147,109,218,141,183,113,136,
    189,162,217,189,33,115,36,1,88,82,90,28,200,204,79,195,
    161,66,71,105,142,52,155,184,181,201,69,220,100,187,216,108,
    31,103,232,206,109,47,10,189,120,59,11,7,199,145,167,18,
    236,24,6,7,114,176,179,189,127,28,70,193,246,83,103,119,
    123,56,82,135,73,188,141,125,97,172,36,154,36,218,158,52,
    198,22,206,184,78,108,223,132,7,110,200,10,185,135,50,26,
    202,180,69,189,119,105,75,177,44,22,69,93,152,162,45,90,
    72,213,240,49,197,186,177,32,246,66,82,201,39,53,9,76,
    102,1,159,127,0,59,10,253,124,100,64,186,78,224,232,227,
    79,144,55,17,34,29,26,51,120,236,183,100,11,221,219,55,
    201,229,186,243,148,1,133,200,194,153,143,201,199,49,48,42,
    106,208,175,131,70,11,130,76,195,39,29,81,139,211,137,141,
    129,204,45,200,254,62,201,33,94,6,180,53,38,23,236,186,
    137,91,253,153,1,216,105,147,224,123,140,4,117,24,102,201,
    155,152,237,77,52,135,76,7,109,242,114,244,213,126,95,250,
    42,219,192,142,111,146,99,219,247,226,56,81,182,23,4,182,
    167,84,26,238,31,43,153,217,42,177,55,179,118,131,28,188,
    82,128,169,228,55,26,22,224,33,71,35,120,244,75,16,250,
    10,95,86,249,133,237,159,73,133,64,56,76,130,12,251,137,
    197,129,84,14,9,169,174,97,243,180,216,142,17,215,174,23,
    248,200,100,212,83,77,134,154,151,101,46,111,71,253,140,42,
    90,125,226,69,199,82,209,252,76,121,10,119,37,82,111,52,
    83,92,221,38,205,10,197,200,88,110,156,196,193,8,229,10,
    253,77,218,242,54,163,107,17,8,95,107,136,173,57,108,235,
    208,66,172,45,27,62,169,96,229,200,98,84,221,36,133,129,
    61,45,242,212,128,8,59,199,4,210,54,56,3,176,46,28,
    100,54,81,180,216,33,0,59,247,168,89,167,230,126,161,238,
    172,116,110,77,235,252,136,246,49,88,81,223,204,85,42,3,
    101,111,34,80,238,140,3,5,19,92,135,0,111,80,88,140,
    1,111,146,210,233,147,28,221,20,74,232,96,28,174,96,154,
    77,225,44,147,138,245,2,142,14,97,172,10,180,131,10,208,
    28,242,2,163,204,185,115,149,217,54,222,157,217,14,180,217,
    118,104,159,197,28,31,45,198,69,83,248,228,92,35,55,34,
    27,240,57,18,163,91,100,192,170,233,110,225,17,245,42,110,
    241,89,195,231,21,87,20,58,35,104,139,106,194,34,36,245,
    76,184,153,159,33,25,5,240,48,77,190,29,217,73,207,86,
    80,200,240,120,51,219,218,204,190,192,16,183,159,112,210,208,
    65,174,195,56,149,195,20,195,181,193,47,58,4,93,14,71,
    55,63,6,208,196,116,30,179,103,216,176,156,113,50,149,82,
    162,153,169,85,155,165,85,73,200,47,104,147,38,155,212,132,
    91,248,52,5,75,226,38,156,225,184,10,224,81,124,190,36,
    227,146,126,18,168,134,116,58,90,78,86,129,148,113,62,154,
    64,196,140,20,112,62,70,142,207,139,0,170,67,233,127,122,
    76,18,145,48,253,87,224,186,72,192,95,128,124,141,46,205,
    163,128,227,141,30,114,217,42,77,255,35,112,242,184,228,96,
    50,116,52,25,121,122,193,96,203,62,227,169,250,156,250,13,
    252,173,146,121,206,77,16,116,166,152,121,229,83,61,83,172,
    50,254,24,36,223,235,220,176,38,3,149,156,114,232,101,52,
    77,135,164,89,134,228,56,137,149,53,11,230,153,89,225,103,
    94,179,119,73,146,23,99,244,80,194,190,39,86,141,10,38,
    126,76,205,39,37,28,68,209,55,3,161,54,166,51,108,229,
    84,113,117,86,251,53,237,108,177,172,75,117,214,162,96,80,
    130,188,86,128,252,81,9,114,201,105,246,45,87,190,212,26,
    228,221,115,67,224,149,8,75,7,186,141,88,32,107,208,173,
    83,56,112,105,39,242,104,17,69,58,162,52,54,145,195,217,
    18,123,218,70,165,131,181,239,168,249,118,166,225,79,138,63,
    142,188,193,126,224,61,9,104,11,218,199,47,226,199,40,132,
    94,174,10,77,216,23,87,201,205,175,159,22,194,159,204,52,
    244,127,2,124,147,213,66,51,208,131,196,231,120,255,250,80,
    218,3,57,216,199,205,14,195,161,221,139,188,3,246,132,153,
    43,245,85,161,148,98,87,78,159,141,25,37,149,189,196,246,
    147,24,115,240,177,143,50,218,129,196,66,95,6,246,39,54,
    39,112,59,204,108,111,31,71,61,95,105,44,79,134,33,151,
    87,94,122,144,113,37,117,244,134,200,153,123,210,197,171,91,
    136,5,163,44,140,162,47,21,101,54,230,26,81,7,6,30,
    97,88,192,171,145,78,67,63,167,230,33,53,155,240,46,146,
    246,54,232,43,101,70,198,169,99,166,104,8,150,173,152,243,
    146,86,100,23,35,113,247,251,68,162,254,44,145,199,99,189,
    248,158,49,7,114,158,238,133,221,38,93,182,169,103,129,130,
    116,238,135,6,41,131,125,230,48,63,250,191,198,166,243,232,
    157,202,236,252,20,242,115,248,170,184,20,85,133,90,58,46,
    251,162,40,96,171,218,240,149,119,237,2,84,92,63,149,158,
    146,218,35,119,103,172,29,135,180,222,112,80,250,165,80,161,
    44,220,63,43,213,56,231,162,99,116,163,82,92,178,155,196,
    43,172,16,176,0,61,101,77,93,67,215,160,99,180,89,165,
    194,116,253,142,229,27,119,82,105,93,98,146,48,222,112,40,
    227,96,92,62,242,200,76,29,76,25,35,134,241,121,143,181,
    226,13,124,46,134,18,41,81,209,137,29,84,43,131,103,214,
    174,98,32,102,133,147,218,84,169,143,211,161,67,46,210,9,
    176,204,125,206,47,160,200,135,37,212,2,25,73,37,167,140,
    175,104,93,126,87,10,36,30,4,201,8,139,122,46,150,241,
    61,114,221,217,103,209,207,129,195,94,95,64,40,139,214,49,
    143,54,172,134,224,99,104,234,11,158,150,132,14,54,93,18,
    142,50,135,99,115,169,84,149,63,53,21,199,2,163,151,46,
    44,123,222,64,127,77,224,27,179,243,128,154,15,10,147,49,
    248,244,221,128,11,113,125,197,65,164,242,25,201,71,162,179,
    69,253,116,49,31,236,108,21,202,108,141,149,225,15,93,131,
    29,117,247,210,25,47,209,64,189,36,29,168,251,151,14,191,
    136,85,250,44,193,38,137,248,83,194,197,25,157,81,134,81,
    170,238,77,13,202,248,120,224,238,202,65,146,142,118,147,64,
    170,245,169,241,167,65,144,58,94,124,32,221,19,73,199,191,
    122,48,61,33,63,251,53,143,98,150,125,169,12,147,115,47,
    200,162,39,225,160,254,140,196,213,235,197,241,103,81,226,31,
    201,32,159,115,185,57,120,206,243,100,224,97,255,229,187,116,
    194,98,151,149,169,241,32,165,85,107,83,189,8,215,16,209,
    250,157,188,194,63,95,203,116,16,226,235,21,154,127,233,101,
    161,255,50,76,158,203,147,208,151,87,200,52,30,39,4,22,
    131,124,51,173,192,196,202,115,62,215,14,19,39,0,199,96,
    42,15,66,244,116,202,203,104,36,79,145,20,35,188,239,212,
    121,81,93,51,243,72,213,101,182,190,234,63,161,143,184,217,
    107,108,232,147,86,99,169,33,234,6,125,44,53,69,83,180,
    132,37,22,91,13,179,81,111,212,76,140,102,234,89,21,77,
    179,209,92,20,255,235,127,3,227,190,105,108,52,27,226,191,
    91,237,184,194,
};

EmbeddedPython embedded_m5_internal_param_Uart8250(
    "m5/internal/param_Uart8250.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_Uart8250.py",
    "m5.internal.param_Uart8250",
    data_m5_internal_param_Uart8250,
    2228,
    6643);

} // anonymous namespace