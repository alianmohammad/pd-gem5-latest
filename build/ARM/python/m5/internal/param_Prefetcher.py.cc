#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Prefetcher[] = {
    120,156,189,89,95,111,219,200,17,159,37,37,217,146,173,248,
    191,157,196,78,204,196,103,84,61,244,236,54,109,122,69,47,
    8,154,94,10,244,138,198,73,169,2,201,169,127,88,90,92,
    201,148,37,146,32,87,201,233,96,191,212,65,219,183,126,136,
    162,15,253,10,125,238,87,234,115,59,51,75,210,148,108,35,
    6,238,228,88,92,44,135,179,179,59,51,191,153,157,221,180,
    33,253,87,198,231,103,22,64,242,111,1,224,225,79,64,31,
    96,32,160,37,64,72,1,222,10,28,151,33,254,17,120,101,
    120,15,208,50,64,26,112,134,29,19,126,103,64,48,207,99,
    42,208,55,153,34,96,84,3,89,130,86,25,94,7,75,80,
    146,21,56,174,65,252,39,16,66,4,2,222,120,51,224,205,
    194,123,148,142,157,42,11,156,5,175,198,157,42,120,115,220,
    169,193,104,17,228,28,180,80,248,12,180,234,40,234,99,20,
    117,139,69,253,135,68,121,248,101,21,188,58,177,227,90,190,
    36,206,18,113,242,28,183,88,202,66,182,178,69,104,45,101,
    253,229,66,127,165,208,95,45,244,215,10,253,245,66,127,163,
    208,191,93,232,223,41,244,239,22,250,155,220,95,0,185,4,
    189,45,232,221,131,222,125,232,160,65,23,243,85,111,131,52,
    161,103,65,203,2,137,191,109,56,67,155,123,75,133,17,15,
    120,196,114,62,226,33,143,216,129,214,14,72,252,61,212,35,
    42,208,108,172,161,31,253,255,225,191,6,250,17,212,60,54,
    111,101,156,248,97,224,248,65,39,244,13,250,94,161,134,188,
    222,166,102,38,117,255,231,228,254,127,1,251,222,51,82,247,
    159,2,10,22,164,75,223,128,83,238,156,26,48,106,192,137,
    128,94,9,60,19,78,112,154,50,45,160,43,224,204,128,223,
    155,196,112,138,109,9,29,118,31,74,74,251,190,199,14,211,
    146,102,224,180,12,39,101,104,190,57,49,136,112,92,133,248,
    159,240,245,22,11,157,101,161,6,156,96,91,130,179,18,156,
    86,224,53,50,33,169,87,37,245,197,155,19,212,20,41,205,
    70,9,87,123,80,80,151,84,241,252,56,112,7,82,45,97,
    223,137,220,216,29,56,175,98,217,145,170,125,36,227,70,45,
    99,11,147,189,200,85,71,54,143,51,201,32,131,72,177,188,
    48,144,106,14,59,29,63,240,156,65,232,13,251,82,205,146,
    48,167,227,247,165,227,240,199,47,6,81,24,171,95,196,113,
    24,219,100,83,38,246,67,55,31,65,22,109,247,195,68,54,
    104,54,158,198,38,241,138,184,59,17,75,164,5,240,90,105,
    176,39,147,118,236,71,10,93,165,37,18,55,73,107,144,147,
    184,73,94,98,179,63,76,208,161,251,110,223,119,131,253,196,
    31,12,251,174,10,145,16,121,93,57,120,188,127,56,244,251,
    222,254,51,251,197,126,52,82,71,97,176,143,52,63,80,18,
    141,210,223,159,52,199,30,242,44,147,224,119,126,215,241,89,
    37,231,72,246,35,25,215,137,122,151,38,21,139,98,94,84,
    132,41,26,162,142,189,50,62,166,216,50,230,196,129,79,74,
    181,73,81,2,148,153,65,232,31,192,206,66,95,31,27,16,
    111,17,64,122,248,19,228,81,132,73,147,190,25,252,237,55,
    100,13,77,237,153,228,118,77,60,97,80,33,186,144,243,9,
    249,57,0,70,70,25,122,21,208,136,65,160,105,8,197,35,
    106,145,157,196,24,40,188,4,201,223,199,37,4,139,128,214,
    198,196,128,164,117,156,234,207,12,194,102,131,22,126,192,88,
    80,71,126,18,190,11,216,226,212,231,176,105,162,77,94,141,
    94,30,246,100,91,37,219,72,248,50,28,90,109,55,8,66,
    101,185,158,103,185,74,197,254,225,80,201,196,82,161,181,155,
    52,170,228,226,165,12,78,185,188,81,148,193,135,92,141,240,
    209,47,158,223,86,248,178,194,47,108,255,68,42,132,194,81,
    232,37,72,39,17,93,169,108,90,164,186,133,205,179,108,58,
    198,92,163,146,33,36,145,253,142,170,49,216,220,36,113,120,
    58,162,51,174,104,244,91,183,63,148,138,248,19,229,42,156,
    149,186,122,162,41,35,235,54,233,150,169,70,230,114,130,48,
    240,70,184,50,191,189,75,147,222,102,124,205,3,33,108,13,
    209,53,131,109,5,234,136,182,69,163,77,74,148,82,108,49,
    174,214,73,101,96,95,139,52,65,32,198,206,48,141,52,12,
    206,3,172,13,7,154,69,61,26,108,19,132,237,77,106,182,
    168,185,151,41,60,61,173,235,147,90,63,162,153,12,86,181,
    109,166,74,229,193,114,48,22,44,119,206,131,5,19,93,147,
    64,111,80,104,156,131,222,36,181,227,167,41,194,41,156,208,
    201,248,185,128,107,54,134,189,72,74,86,50,72,218,132,179,
    34,216,186,5,176,217,228,7,70,154,125,231,42,195,109,223,
    164,225,186,218,112,143,105,166,249,20,35,117,198,70,77,180,
    201,193,70,106,70,54,225,115,236,140,54,200,132,69,227,109,
    224,102,245,58,168,243,174,195,59,23,215,4,58,47,104,155,
    234,78,137,208,212,49,97,61,221,77,18,10,227,40,14,191,
    26,89,97,199,82,144,173,225,201,110,178,183,155,124,134,129,
    110,61,229,212,161,67,93,7,115,44,163,24,131,182,202,47,
    58,16,29,14,74,39,221,14,208,200,180,51,179,111,216,180,
    156,119,18,21,83,186,153,178,93,107,185,93,105,153,159,209,
    52,53,54,170,9,27,248,212,4,175,197,9,57,211,113,69,
    192,95,241,249,57,153,151,52,148,64,117,160,221,212,43,101,
    37,72,29,251,59,99,168,152,154,10,246,199,40,243,121,22,
    70,21,200,49,64,143,73,139,36,100,255,21,184,74,18,240,
    23,32,127,163,91,211,88,224,168,163,135,220,182,66,236,127,
    4,78,34,151,108,81,134,142,41,35,77,51,24,114,201,167,
    204,170,119,172,95,193,223,10,25,232,204,4,65,187,139,153,
    214,65,197,221,165,148,71,33,3,229,90,59,72,105,60,92,
    201,45,71,110,66,108,58,48,205,60,48,207,147,89,94,191,
    96,182,153,30,134,102,245,4,14,173,229,139,115,4,81,234,
    222,20,43,70,1,23,223,163,230,147,28,18,34,163,77,101,
    89,219,147,185,182,176,195,56,58,191,253,146,230,46,241,106,
    23,42,28,11,231,34,114,176,151,51,176,63,202,193,46,57,
    229,190,231,106,152,90,131,124,124,102,8,60,222,96,41,65,
    39,139,18,200,50,180,42,20,22,92,236,137,52,106,68,150,
    152,40,161,141,229,115,182,198,129,182,83,238,102,237,65,106,
    190,154,114,34,32,39,62,233,187,131,67,207,125,74,17,144,
    208,76,237,44,142,140,108,217,139,197,101,83,12,136,171,86,
    206,175,223,207,150,255,118,202,73,224,7,40,51,95,54,67,
    222,11,219,28,249,191,61,146,214,64,14,14,113,186,35,63,
    178,58,125,183,203,222,48,83,181,94,102,106,41,118,231,228,
    94,153,80,122,57,8,173,118,24,96,70,30,182,113,149,150,
    39,177,252,151,158,245,137,197,233,220,242,19,203,61,196,175,
    110,91,105,76,143,7,36,151,92,110,220,77,184,186,58,126,
    71,221,27,240,166,131,135,58,31,203,72,39,51,139,62,108,
    228,185,153,43,71,29,32,184,165,97,89,175,70,58,37,253,
    152,154,239,82,179,11,55,147,194,247,81,230,31,72,56,25,
    168,130,89,163,42,212,226,88,52,190,162,81,201,197,152,252,
    239,117,98,82,95,54,164,145,89,33,78,57,67,103,73,106,
    171,148,198,91,181,140,56,199,237,60,19,235,25,241,22,183,
    11,76,92,204,136,75,220,46,51,113,37,35,174,114,187,198,
    196,245,140,184,193,237,109,38,222,201,136,119,185,221,100,226,
    86,70,188,199,237,125,38,110,103,183,41,22,19,31,0,30,
    236,241,20,79,148,29,74,43,51,223,52,173,112,112,222,64,
    88,202,111,53,155,216,143,110,120,213,246,15,33,173,33,174,
    202,36,162,168,82,93,103,146,158,200,74,240,162,62,124,116,
    223,184,4,216,78,59,150,174,146,218,47,119,167,174,33,39,
    34,61,101,55,247,78,166,70,126,252,248,52,87,229,140,139,
    166,209,106,161,64,102,103,137,215,88,225,96,17,125,194,218,
    58,134,174,163,207,81,87,202,149,94,197,38,144,239,156,73,
    197,117,161,76,203,113,163,72,6,222,121,17,204,95,166,236,
    104,202,116,17,156,87,44,88,241,174,226,115,49,172,72,145,
    130,94,236,166,114,30,72,211,119,24,67,114,152,185,170,241,
    17,20,19,185,77,142,210,169,59,207,218,246,79,115,211,111,
    95,142,183,16,207,33,145,219,149,116,160,250,32,15,86,80,
    250,30,33,39,169,157,203,134,96,133,53,164,77,167,227,247,
    81,25,22,125,29,62,18,79,187,209,56,89,125,116,233,208,
    225,192,73,148,27,171,97,228,68,157,132,231,184,22,35,77,
    178,64,147,140,211,149,117,245,96,140,144,129,158,225,131,76,
    36,125,46,151,206,52,245,240,178,65,81,199,137,72,101,230,
    97,217,215,96,35,233,148,89,198,168,124,135,114,97,96,50,
    210,43,190,242,35,201,226,51,193,40,81,15,46,99,194,66,
    198,15,156,129,159,36,82,139,250,48,23,201,164,131,112,145,
    120,185,205,38,225,241,65,166,204,176,5,26,199,45,231,81,
    79,246,165,146,23,178,10,23,15,233,101,134,135,43,137,195,
    17,158,185,249,36,139,239,125,199,185,137,162,230,39,58,103,
    64,66,231,49,42,106,42,88,214,172,77,252,85,75,85,193,
    149,226,196,229,123,227,60,206,233,22,200,230,157,104,33,143,
    105,190,32,206,138,54,206,211,116,189,112,224,14,244,13,32,
    223,113,217,228,54,123,39,75,11,156,100,245,57,158,143,204,
    250,66,2,115,50,215,176,92,178,218,123,68,39,224,12,30,
    239,101,186,237,105,221,154,136,22,57,224,11,234,193,99,181,
    57,193,35,9,246,47,228,32,140,71,47,66,79,170,173,137,
    239,207,60,47,182,221,0,51,201,91,73,37,52,67,106,140,
    33,173,159,181,140,140,203,186,116,41,227,188,23,214,162,153,
    240,163,190,158,229,220,118,241,251,231,253,176,125,44,189,148,
    231,222,213,60,207,195,1,98,250,138,89,154,126,54,203,210,
    196,119,143,34,65,173,77,80,17,97,62,2,236,107,125,235,
    155,145,57,45,77,10,36,247,228,111,92,33,79,84,14,12,
    239,88,118,253,132,114,229,66,145,61,221,91,9,129,172,218,
    197,60,80,24,122,3,177,160,79,151,250,182,235,41,5,115,
    242,107,108,232,102,183,186,80,21,21,131,254,215,192,20,53,
    81,23,37,49,95,175,154,213,74,181,108,98,188,16,101,69,
    212,204,106,109,94,92,246,183,141,209,83,51,182,151,171,226,
    255,136,243,189,77,
};

EmbeddedPython embedded_m5_internal_param_Prefetcher(
    "m5/internal/param_Prefetcher.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_Prefetcher.py",
    "m5.internal.param_Prefetcher",
    data_m5_internal_param_Prefetcher,
    2389,
    7340);

} // anonymous namespace