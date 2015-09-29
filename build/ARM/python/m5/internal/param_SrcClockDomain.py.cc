#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SrcClockDomain[] = {
    120,156,197,88,109,111,228,72,17,174,182,61,147,204,36,147,
    76,54,111,187,155,236,198,7,138,110,56,113,25,88,88,14,
    113,171,21,199,237,73,28,18,185,195,131,216,189,57,132,207,
    177,123,38,158,120,236,145,221,201,222,156,146,47,100,5,136,
    47,252,6,132,248,192,255,224,127,65,85,181,237,56,111,34,
    18,236,144,140,91,237,114,119,117,189,60,85,93,221,62,228,
    127,53,124,126,106,3,100,127,22,0,1,254,4,68,0,99,
    1,125,1,66,10,8,86,225,168,6,233,15,33,168,193,27,
    128,190,1,210,128,115,236,152,240,165,1,241,34,207,169,67,
    100,50,69,192,180,9,210,130,126,13,94,198,43,96,201,58,
    28,53,33,253,10,132,16,177,128,87,193,28,4,243,240,6,
    185,99,167,193,12,231,33,104,114,167,1,193,2,119,154,48,
    109,131,92,128,62,50,159,131,126,11,89,189,135,172,150,152,
    213,63,137,85,128,95,214,32,104,209,112,148,229,11,26,105,
    209,72,94,99,137,185,44,23,146,181,161,191,82,244,239,85,
    250,171,149,254,90,165,191,94,233,111,84,250,155,220,95,6,
    185,2,163,251,48,122,0,163,135,48,64,3,181,75,41,182,
    64,154,48,218,134,254,54,72,252,109,193,57,218,48,88,169,
    204,120,196,51,238,149,51,30,243,140,29,232,239,128,196,223,
    99,61,163,14,189,206,58,250,37,252,23,254,117,208,47,160,
    22,177,57,145,105,22,38,177,27,198,131,36,52,232,123,157,
    26,242,162,79,205,92,238,206,143,201,157,255,0,246,101,96,
    228,238,60,3,100,44,72,151,200,128,51,238,156,25,48,237,
    192,169,128,145,5,129,9,167,184,76,141,4,24,10,56,55,
    224,183,38,13,56,195,214,66,7,60,6,75,105,95,142,216,
    1,154,211,28,156,213,224,180,6,189,87,167,6,17,142,26,
    144,254,29,190,217,102,166,243,204,212,128,83,108,45,56,183,
    224,172,14,47,113,16,146,70,13,82,95,188,58,69,77,145,
    210,235,88,40,237,126,69,93,82,37,8,211,216,27,75,69,
    150,112,39,94,234,141,221,94,234,127,28,37,254,209,139,100,
    236,133,113,167,89,12,77,178,189,137,167,14,29,158,107,146,
    81,198,19,197,60,147,88,170,5,236,12,194,56,112,199,73,
    112,28,73,53,79,12,221,65,24,73,215,229,143,159,142,39,
    73,170,62,73,211,36,117,200,174,76,140,18,175,156,65,86,
    245,163,36,147,29,90,141,151,113,136,189,162,209,131,9,115,
    36,1,88,94,154,28,200,204,79,195,137,66,119,105,142,52,
    154,184,117,200,81,220,100,61,108,186,199,25,58,181,235,69,
    161,23,119,179,112,124,28,121,42,65,194,36,24,202,241,211,
    238,193,113,24,5,221,143,156,95,118,39,83,117,152,196,93,
    164,133,177,146,104,152,168,123,147,73,246,112,220,61,98,254,
    58,28,186,33,171,229,30,202,104,34,211,22,81,31,210,194,
    162,45,22,69,93,152,162,35,90,216,171,225,99,138,109,99,
    65,236,135,164,152,79,202,18,176,204,2,74,127,3,118,26,
    250,252,200,128,116,155,128,50,194,159,32,207,34,92,122,244,
    205,224,111,191,34,139,104,234,200,36,247,107,226,41,131,11,
    81,134,35,159,145,191,99,96,132,212,96,84,7,141,28,4,
    156,134,82,58,165,22,135,19,27,3,153,91,144,253,229,50,
    135,184,13,104,113,12,120,36,109,224,82,191,103,48,246,58,
    36,248,62,227,65,29,134,89,242,58,102,171,83,159,195,167,
    135,54,249,124,250,217,193,72,250,42,219,65,194,23,201,177,
    237,123,113,156,40,219,11,2,219,83,42,13,15,142,149,204,
    108,149,216,187,89,167,65,110,94,41,32,85,242,155,78,10,
    8,145,187,17,66,250,37,8,125,133,47,171,252,194,246,207,
    164,66,56,28,38,65,134,116,98,49,148,202,33,33,213,18,
    54,31,21,203,49,238,58,245,2,37,153,140,6,170,201,128,
    243,178,204,229,229,136,206,216,162,217,39,94,116,44,21,141,
    207,148,167,112,85,234,234,133,102,128,174,251,164,95,161,30,
    153,204,141,147,56,152,162,116,161,191,75,11,223,103,140,45,
    2,161,108,29,17,54,135,109,29,90,136,184,182,225,147,34,
    86,142,47,198,214,6,169,13,236,111,145,39,11,196,217,57,
    166,148,142,193,57,129,53,226,128,179,169,71,147,29,130,177,
    179,69,205,54,53,143,10,165,223,174,230,173,171,154,63,161,
    213,12,86,215,55,115,197,202,160,217,191,20,52,15,46,130,
    6,19,95,143,192,111,80,136,92,128,223,36,213,211,231,57,
    210,41,172,208,217,248,185,130,111,54,136,211,38,69,235,5,
    52,29,194,91,21,116,195,10,232,28,242,5,35,206,121,112,
    155,241,118,102,109,188,161,54,222,83,90,109,49,199,74,139,
    49,210,20,62,57,218,200,77,201,102,124,129,157,233,38,153,
    177,106,192,77,220,192,94,198,45,222,137,120,55,227,125,95,
    231,8,109,87,221,177,8,85,3,19,54,242,29,38,163,144,
    158,164,201,215,83,59,25,216,10,10,25,158,237,102,123,187,
    217,135,24,244,246,115,78,35,58,236,117,96,167,114,146,98,
    0,55,248,69,7,165,203,1,234,230,219,3,26,154,246,40,
    246,15,155,151,115,80,166,82,74,61,51,176,109,179,180,45,
    137,250,33,45,213,100,195,154,176,137,79,83,176,60,110,194,
    153,143,43,5,254,138,207,207,200,196,164,165,4,170,247,156,
    158,150,150,21,33,149,156,119,47,161,227,173,170,225,188,135,
    124,95,20,33,85,135,18,11,244,152,36,40,161,252,143,192,
    21,148,128,63,0,249,29,221,155,199,5,71,32,61,228,190,
    85,26,254,59,224,164,114,195,182,101,232,248,50,242,180,131,
    225,151,125,192,67,245,46,246,11,248,83,37,35,157,155,32,
    104,199,49,243,26,169,186,227,88,101,68,50,96,238,180,171,
    88,151,67,151,92,115,232,101,52,76,7,169,89,6,233,69,
    114,43,235,26,204,60,111,23,75,243,122,17,151,228,249,244,
    2,73,148,206,183,196,170,81,193,199,119,169,121,191,132,134,
    40,104,111,77,180,157,171,249,183,178,243,184,58,231,253,156,
    214,183,88,226,229,58,239,178,151,217,148,224,175,21,224,127,
    82,130,95,114,42,126,195,85,51,181,6,249,251,220,16,120,
    172,193,82,131,78,20,22,200,26,244,235,20,38,92,16,138,
    60,138,68,145,172,40,201,93,202,243,108,149,125,109,175,210,
    229,218,155,212,124,61,131,228,64,14,125,22,121,227,131,192,
    123,222,167,133,104,53,191,136,43,163,16,189,93,21,157,98,
    66,220,38,61,191,126,175,80,225,100,6,137,225,251,200,183,
    20,157,195,32,72,124,206,6,191,62,148,246,88,142,15,112,
    201,195,112,98,15,34,111,200,94,49,115,213,62,43,84,83,
    236,214,171,123,105,70,41,103,63,177,253,36,198,108,125,236,
    163,164,118,32,241,168,32,3,251,125,155,83,189,29,102,182,
    119,128,95,61,95,105,140,95,14,82,46,205,188,116,152,113,
    21,118,244,154,186,51,242,170,139,7,193,16,75,206,47,11,
    211,232,195,73,153,183,25,255,58,96,112,203,195,35,128,154,
    234,84,245,35,106,190,67,205,46,204,46,189,119,41,55,210,
    2,100,168,58,102,147,134,80,107,215,34,244,115,154,157,93,
    143,211,191,222,37,78,245,197,67,30,173,117,26,41,231,232,
    28,74,109,131,210,124,191,89,16,23,184,93,100,98,171,32,
    46,113,187,204,196,118,65,92,225,246,30,19,87,139,91,144,
    53,38,174,67,127,131,174,6,136,178,73,105,97,238,191,77,
    11,28,88,51,10,41,239,127,154,13,156,39,255,7,201,157,
    31,64,94,23,220,150,9,68,85,173,150,206,4,35,81,148,
    216,85,157,248,152,190,117,11,32,93,63,149,158,146,218,71,
    15,103,162,41,39,20,189,172,95,122,170,80,167,60,102,124,
    80,170,116,206,5,209,116,173,82,4,179,227,196,75,172,94,
    176,80,62,101,173,93,67,215,202,23,40,180,74,229,233,180,
    16,203,215,238,77,6,208,5,49,137,228,77,38,50,14,46,
    138,93,254,50,3,199,83,214,58,132,139,138,4,43,219,53,
    124,174,135,27,41,84,209,143,93,86,43,3,108,54,206,99,
    152,142,11,183,117,248,28,86,38,102,135,156,166,83,113,153,
    133,157,159,148,110,120,124,43,6,137,66,231,167,255,52,4,
    235,163,226,202,202,63,82,223,186,109,112,192,47,110,24,48,
    207,59,12,35,190,116,12,42,41,92,140,222,56,137,183,38,
    220,115,6,110,36,79,100,196,43,220,121,48,173,179,140,131,
    175,208,213,187,183,49,56,73,34,229,13,101,33,42,45,118,
    215,177,180,22,109,148,151,201,140,54,206,6,129,140,164,146,
    55,198,132,34,23,230,199,238,64,98,141,144,76,241,100,200,
    103,45,124,143,92,119,86,91,235,143,145,239,87,180,0,237,
    167,180,181,214,113,115,93,207,255,27,86,67,112,189,114,229,
    202,88,203,101,67,113,178,152,102,14,167,212,229,18,136,124,
    171,89,84,14,156,104,200,249,251,222,88,95,89,241,133,140,
    243,14,53,223,46,176,204,25,66,31,52,249,60,167,79,205,
    152,84,184,152,226,218,201,217,43,114,205,248,233,94,161,218,
    30,107,228,158,72,170,193,248,86,117,252,148,11,254,234,24,
    173,254,111,180,163,180,246,234,225,149,49,249,215,130,211,214,
    141,44,122,225,88,95,3,170,149,43,223,131,148,152,174,95,
    161,162,199,66,116,216,55,82,61,186,145,95,197,29,108,180,
    226,51,179,191,62,132,46,136,43,239,92,25,221,176,243,48,
    176,82,57,12,51,228,198,172,174,103,101,242,188,122,231,54,
    168,87,25,204,8,139,250,188,161,239,69,158,147,162,124,131,
    67,119,129,141,229,134,168,27,116,215,108,138,166,104,9,75,
    44,182,26,102,163,222,168,153,136,87,162,172,138,166,217,104,
    46,138,234,255,14,162,183,105,236,44,53,196,191,1,218,185,
    37,61,
};

EmbeddedPython embedded_m5_internal_param_SrcClockDomain(
    "m5/internal/param_SrcClockDomain.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_SrcClockDomain.py",
    "m5.internal.param_SrcClockDomain",
    data_m5_internal_param_SrcClockDomain,
    2226,
    6834);

} // anonymous namespace
