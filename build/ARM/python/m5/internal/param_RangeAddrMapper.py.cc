#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RangeAddrMapper[] = {
    120,156,197,88,95,111,227,198,17,159,37,41,217,146,173,179,
    124,62,223,95,95,204,166,48,162,4,141,213,94,123,77,209,
    28,14,189,230,90,36,1,206,73,169,0,119,81,130,176,52,
    185,146,41,83,164,64,174,207,81,96,191,212,135,182,111,125,
    235,23,40,250,208,239,209,239,213,206,204,146,20,45,219,197,
    5,237,169,182,184,88,14,119,103,231,207,111,102,103,215,135,
    252,175,134,207,175,108,128,236,175,2,32,192,159,128,8,96,
    44,160,47,64,72,1,193,6,28,214,32,253,25,4,53,120,
    5,208,55,64,26,112,134,29,19,190,50,32,94,229,57,117,
    136,76,166,8,152,54,65,90,208,175,193,243,120,29,44,89,
    135,195,38,164,191,7,33,68,44,224,69,176,4,193,50,188,
    66,238,216,105,48,195,101,8,154,220,105,64,176,194,157,38,
    76,219,32,87,160,143,204,151,160,223,66,86,239,33,171,107,
    204,234,159,196,42,192,47,55,32,104,209,112,148,229,75,26,
    105,209,72,94,227,26,115,89,43,36,107,67,127,189,232,95,
    175,244,55,42,253,27,149,254,102,165,127,179,210,191,85,233,
    223,230,254,26,200,117,24,221,129,209,93,24,221,131,1,26,
    171,93,74,180,5,210,132,209,125,232,223,7,137,191,45,56,
    67,123,6,235,149,25,111,241,140,235,229,140,109,158,97,67,
    223,6,137,191,109,61,163,14,189,206,38,250,40,252,23,254,
    117,208,71,160,86,177,121,41,211,44,76,98,55,140,7,73,
    104,208,247,58,53,228,81,159,154,165,220,181,31,145,107,255,
    1,236,215,192,200,93,123,10,200,88,144,46,145,1,167,220,
    57,53,96,218,129,19,1,35,11,2,19,78,112,153,26,9,
    48,20,112,102,192,215,38,13,56,197,214,66,103,188,5,150,
    210,126,29,177,51,52,167,37,56,173,193,73,13,122,47,78,
    12,34,28,54,32,253,59,124,183,197,76,151,153,169,1,39,
    216,90,112,102,193,105,29,158,227,32,36,141,26,164,190,120,
    113,130,154,34,165,215,177,80,218,189,138,186,164,74,16,166,
    177,55,150,234,38,246,221,137,151,122,99,215,241,226,161,124,
    18,4,233,51,111,50,145,105,167,89,140,77,178,221,137,167,
    14,28,158,108,146,85,198,19,197,76,147,88,170,21,236,12,
    194,56,112,199,73,112,20,73,181,76,28,221,65,24,73,215,
    229,143,159,140,39,73,170,126,147,166,73,234,144,97,153,24,
    37,94,57,131,204,234,71,73,38,59,180,26,47,227,16,123,
    69,163,7,19,230,72,2,176,192,52,57,144,153,159,134,19,
    133,254,210,28,105,52,113,235,144,167,184,201,190,192,166,123,
    148,161,87,187,94,20,122,113,55,11,199,71,145,167,18,36,
    76,130,161,28,63,236,238,31,133,81,208,125,226,60,235,78,
    166,234,32,137,187,72,11,99,37,209,50,81,247,82,155,236,
    226,192,235,196,253,56,28,186,33,235,229,30,200,8,191,180,
    136,122,151,86,22,109,177,42,234,194,20,29,209,194,94,13,
    31,83,108,25,43,98,47,36,205,124,210,150,160,101,22,96,
    250,27,176,219,208,235,135,6,164,91,4,149,17,254,4,249,
    22,1,211,163,111,6,127,251,29,153,68,83,71,38,1,64,
    19,79,24,94,136,51,28,249,136,60,30,3,99,164,6,163,
    58,104,236,32,228,52,152,210,41,181,56,156,216,24,200,220,
    130,236,47,231,57,196,109,64,147,99,248,35,233,38,46,245,
    7,134,99,175,67,130,239,49,32,212,65,152,37,199,49,155,
    157,250,28,64,61,180,201,231,211,207,246,71,210,87,217,54,
    18,190,76,142,108,223,139,227,68,217,94,16,216,158,82,105,
    184,127,164,100,102,171,196,222,201,58,13,242,243,122,129,169,
    146,223,116,82,96,136,252,141,24,210,47,65,232,43,124,217,
    224,23,182,127,38,21,226,225,32,9,50,164,19,139,161,84,
    14,9,169,174,97,243,164,88,142,129,215,169,23,48,201,100,
    52,80,77,70,156,151,101,46,47,71,116,6,23,205,126,233,
    69,71,82,209,248,76,121,10,87,165,174,94,104,17,240,186,
    77,10,22,250,145,205,220,56,137,131,41,138,23,250,59,180,
    242,109,6,217,42,16,204,54,17,98,75,216,214,161,133,144,
    107,27,62,105,98,229,0,99,112,81,124,43,96,135,139,60,
    95,32,208,206,48,171,116,12,78,11,172,18,135,156,77,61,
    154,236,16,142,157,123,212,108,81,115,191,208,250,13,171,222,
    154,87,253,1,45,103,176,190,190,153,107,86,134,205,222,185,
    176,185,51,11,27,76,126,61,130,191,65,65,50,131,191,73,
    186,167,143,115,172,83,96,161,187,241,115,5,225,108,17,167,
    77,154,214,11,112,58,132,184,42,236,134,21,216,57,228,12,
    198,156,115,231,42,235,109,47,220,122,67,109,189,135,180,220,
    106,142,150,22,163,164,41,124,114,181,145,219,146,237,248,20,
    59,211,91,100,199,170,5,111,225,46,246,60,110,241,118,196,
    91,26,23,2,58,77,104,195,234,142,69,184,26,152,112,51,
    223,102,50,138,234,73,154,124,59,181,147,129,173,160,144,225,
    209,78,182,187,147,125,136,113,111,63,230,76,162,35,95,199,
    118,42,39,41,198,112,131,95,116,92,186,28,163,110,190,69,
    160,165,105,203,102,7,177,125,57,13,101,42,165,236,179,8,
    227,54,75,227,146,172,31,210,90,77,182,172,9,183,240,105,
    10,22,200,77,56,251,113,189,192,95,241,249,53,217,152,212,
    148,64,21,160,211,211,226,178,38,164,147,243,206,57,124,188,
    89,61,156,247,144,241,211,34,170,234,80,162,129,30,147,36,
    37,160,255,9,184,144,18,240,71,32,207,163,131,243,208,224,
    32,164,135,28,184,65,195,191,1,78,44,151,236,93,134,14,
    49,35,79,61,24,129,217,7,60,84,111,101,159,194,159,43,
    89,233,204,4,65,219,142,153,151,74,213,109,199,42,131,146,
    33,243,90,91,139,117,62,122,201,55,7,94,70,195,116,156,
    154,101,156,206,18,92,89,221,96,242,121,195,104,90,214,171,
    184,36,208,39,51,44,81,78,191,39,54,140,10,66,126,68,
    205,251,37,56,68,65,123,115,178,109,207,39,225,202,254,227,
    234,196,247,49,9,96,177,200,107,117,181,70,50,157,231,83,
    6,64,173,8,128,7,101,0,72,78,200,175,184,126,166,214,
    32,151,159,25,2,15,59,88,114,208,57,195,2,89,131,126,
    157,66,133,43,67,145,71,146,40,50,22,101,186,115,217,158,
    237,178,167,45,86,122,93,59,148,154,111,23,145,33,200,167,
    143,34,111,188,31,120,143,191,162,149,104,57,191,136,45,163,
    144,189,93,149,157,226,66,92,37,62,191,254,184,208,225,229,
    34,178,195,79,144,113,41,59,199,66,144,248,156,18,190,56,
    144,246,88,142,247,113,205,131,112,98,15,34,111,200,126,49,
    115,221,62,43,116,83,236,216,249,61,53,163,188,179,151,216,
    126,18,99,210,62,242,81,84,59,144,120,106,144,129,253,190,
    205,25,223,14,51,219,219,199,175,158,175,52,206,207,71,42,
    23,105,94,58,204,184,30,59,60,166,238,162,252,234,226,169,
    48,196,234,243,235,194,54,250,160,82,166,111,46,56,117,208,
    224,214,135,19,213,84,39,172,159,83,243,46,53,59,176,192,
    44,223,69,198,125,90,129,76,85,199,156,210,16,106,243,98,
    152,126,78,243,179,139,193,122,252,58,193,170,239,36,242,144,
    173,211,72,185,68,199,82,106,27,148,238,251,205,130,184,194,
    237,42,19,91,197,181,199,53,38,174,65,191,77,231,127,162,
    172,83,196,47,253,183,17,207,33,179,168,96,217,255,159,6,
    186,243,224,255,33,186,243,83,200,247,253,171,130,92,84,245,
    106,233,32,31,137,162,138,174,42,197,135,241,173,171,144,230,
    250,169,244,148,212,110,186,187,24,93,57,91,232,117,131,210,
    89,133,66,229,89,226,131,82,169,51,46,121,166,55,42,133,
    46,251,78,60,199,250,4,139,225,19,214,219,53,116,61,60,
    67,162,85,170,79,105,43,150,199,243,178,104,19,232,170,151,
    100,34,98,28,204,42,90,254,178,8,231,83,78,26,194,172,
    232,192,242,245,6,62,23,131,142,84,170,104,200,94,171,149,
    97,182,32,255,49,86,163,194,115,29,186,124,153,229,93,135,
    252,166,51,109,153,100,157,95,150,158,120,247,74,32,38,105,
    56,12,113,89,55,165,207,25,157,152,190,199,104,44,140,184,
    234,153,163,255,7,14,169,28,211,107,240,122,235,205,143,46,
    214,155,163,179,39,57,218,2,25,73,37,47,71,156,34,243,
    228,71,215,0,133,76,147,41,30,174,248,180,130,239,145,235,
    46,108,87,250,5,161,30,242,212,72,187,82,29,247,165,77,
    252,111,88,13,193,27,253,220,189,171,22,234,7,80,212,229,
    211,204,225,132,181,86,122,152,111,6,139,29,151,131,152,206,
    144,123,222,88,223,250,240,149,134,67,12,156,31,22,32,225,
    224,211,231,52,62,13,233,83,39,6,44,87,33,92,116,56,
    187,133,97,199,15,119,11,189,118,73,25,214,202,125,41,169,
    128,225,219,201,241,195,11,227,180,254,51,213,213,189,75,7,
    60,147,99,125,87,198,21,247,197,239,31,69,137,127,40,131,
    124,204,253,171,199,60,77,198,30,210,47,95,165,23,22,171,
    172,207,125,15,82,154,181,57,71,69,183,135,232,245,239,244,
    21,92,65,102,12,93,208,139,242,199,236,149,139,142,203,114,
    63,67,47,149,195,48,67,102,204,233,66,82,36,100,168,183,
    175,140,135,42,131,69,161,85,215,243,250,246,225,49,221,57,
    103,191,197,134,238,220,26,107,13,81,55,232,82,215,20,77,
    209,18,150,88,109,53,204,70,189,81,51,17,209,68,217,16,
    77,179,209,92,21,231,255,183,17,229,77,99,123,181,33,254,
    13,232,22,253,75,
};

EmbeddedPython embedded_m5_internal_param_RangeAddrMapper(
    "m5/internal/param_RangeAddrMapper.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_RangeAddrMapper.py",
    "m5.internal.param_RangeAddrMapper",
    data_m5_internal_param_RangeAddrMapper,
    2181,
    6699);

} // anonymous namespace