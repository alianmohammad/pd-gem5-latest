#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_AbstractNVM[] = {
    120,156,189,88,109,111,219,214,21,62,151,164,104,83,182,98,
    57,78,226,188,173,230,48,24,211,138,213,234,178,101,29,208,
    32,88,182,12,88,7,212,77,169,173,78,181,110,44,77,94,
    201,148,41,82,32,175,147,170,176,191,204,193,182,111,251,17,
    195,62,236,127,236,127,109,231,156,75,210,148,221,0,5,58,
    217,22,47,46,239,203,185,231,229,57,47,151,33,148,127,45,
    124,126,233,2,20,67,1,16,225,79,64,2,48,21,128,239,
    66,10,136,182,224,184,5,249,207,32,106,193,27,128,161,1,
    210,128,115,236,152,240,71,3,210,117,222,99,67,98,242,136,
    128,121,27,164,5,195,22,28,164,155,96,73,27,142,219,144,
    127,9,66,136,84,192,203,104,5,162,85,120,131,212,177,227,
    48,193,85,136,218,220,113,32,90,227,78,27,230,93,144,107,
    48,68,226,43,48,236,32,169,119,145,212,13,38,245,31,34,
    21,225,204,45,136,58,180,28,121,249,156,86,90,180,146,207,
    184,193,84,54,42,206,186,48,220,172,250,55,27,253,45,238,
    111,128,220,132,201,45,152,220,134,201,29,24,161,192,221,154,
    234,54,72,19,38,119,97,120,23,36,254,182,225,28,117,18,
    109,54,118,220,227,29,55,235,29,247,121,199,3,24,62,0,
    137,191,251,122,135,13,131,222,109,212,115,252,95,252,235,161,
    158,65,173,99,243,74,230,69,156,165,126,156,142,178,216,160,
    121,155,26,178,74,72,205,74,105,158,95,147,121,254,13,108,
    155,200,40,205,115,6,72,88,144,44,137,1,103,220,57,51,
    96,222,131,83,1,19,11,34,19,78,241,152,22,49,48,22,
    112,110,192,23,38,45,56,195,214,66,133,190,3,150,210,182,
    153,176,66,53,165,21,56,107,193,105,11,6,47,79,13,26,
    56,118,32,255,23,124,253,144,137,174,50,81,3,78,177,181,
    224,220,130,51,27,14,112,17,14,77,28,18,95,188,60,69,
    73,113,100,208,179,144,219,253,134,184,36,74,20,231,105,48,
    149,234,38,246,253,89,144,7,83,255,217,97,161,242,32,84,
    251,159,125,220,107,87,235,178,98,111,22,168,35,143,55,154,
    164,145,233,76,49,193,44,149,106,13,59,163,56,141,252,105,
    22,157,36,82,173,18,53,127,20,39,210,247,121,242,163,233,
    44,203,213,111,242,60,203,61,82,42,15,38,89,80,239,32,
    149,134,73,86,200,30,157,198,199,120,68,94,209,234,209,140,
    41,18,3,204,44,109,142,100,17,230,241,76,161,173,52,69,
    90,77,212,122,100,37,110,138,23,216,244,79,10,180,104,63,
    72,226,32,237,23,241,244,36,9,84,134,3,179,104,44,167,
    143,251,135,39,113,18,245,159,121,31,247,103,115,117,148,165,
    125,28,139,83,37,81,43,73,255,138,62,246,112,17,105,170,
    120,29,143,253,152,101,242,143,100,50,147,121,135,70,239,211,
    169,162,43,214,133,45,76,209,19,29,236,181,240,49,197,67,
    99,77,236,199,36,85,72,146,18,164,204,10,68,255,4,54,
    23,90,251,216,128,252,33,65,100,130,63,65,54,69,160,12,
    104,206,224,185,79,73,29,122,116,98,146,225,245,224,41,195,
    10,241,133,43,159,144,165,83,96,108,180,96,98,131,198,12,
    66,77,131,40,159,83,139,203,137,140,129,196,45,40,254,177,
    72,33,237,2,170,27,93,23,135,238,224,81,127,97,24,14,
    122,196,248,62,131,65,29,197,69,246,58,101,149,83,159,29,
    103,128,58,121,49,255,228,112,34,67,85,236,224,192,231,217,
    137,27,6,105,154,41,55,136,34,55,80,42,143,15,79,148,
    44,92,149,185,187,69,207,33,27,111,86,120,170,233,205,103,
    21,126,200,214,136,31,253,18,197,161,194,151,45,126,97,253,
    23,82,33,22,142,178,168,192,113,34,49,150,202,35,38,213,
    13,108,158,85,199,49,232,122,118,5,145,66,38,35,213,102,
    180,5,69,225,243,113,52,206,192,162,221,175,130,228,68,42,
    90,95,168,64,225,169,212,213,7,45,27,90,119,73,184,74,
    54,210,151,159,102,105,52,71,214,226,112,151,78,189,203,0,
    91,7,130,216,109,132,215,10,182,54,116,16,110,93,35,36,
    41,172,18,92,12,172,59,36,51,176,177,69,25,35,16,100,
    231,24,73,122,6,135,2,22,135,93,205,165,30,109,246,8,
    195,222,3,106,30,82,243,189,74,226,37,138,221,185,44,246,
    35,58,202,96,89,67,179,148,170,118,151,253,5,119,185,119,
    225,46,24,236,6,4,123,131,156,227,2,246,38,201,157,63,
    45,49,78,14,133,102,198,233,6,178,89,27,94,151,164,180,
    43,80,122,132,180,38,220,198,13,184,121,100,8,198,154,119,
    239,109,154,219,185,86,205,141,181,230,30,211,81,235,37,74,
    58,140,142,182,8,201,196,70,169,71,214,225,115,236,204,183,
    73,135,77,237,109,99,198,58,72,59,156,122,56,125,113,226,
    214,161,65,43,85,119,44,194,211,200,132,59,101,74,41,200,
    147,103,121,246,213,220,205,70,174,130,138,135,39,187,197,222,
    110,241,33,250,186,251,148,163,135,246,118,237,207,185,156,229,
    232,183,14,191,104,95,244,217,47,253,50,37,160,150,41,61,
    179,113,88,183,28,122,80,124,138,56,203,86,108,187,86,44,
    241,249,33,157,211,102,173,154,176,141,79,91,48,51,126,198,
    209,142,235,2,158,197,231,87,164,95,18,81,2,85,107,222,
    64,179,202,82,144,60,222,15,23,112,177,60,25,188,119,145,
    232,243,202,147,108,168,81,64,143,73,92,18,184,255,6,92,
    44,9,248,43,144,197,209,176,165,59,176,227,209,67,134,219,
    162,229,127,6,14,36,223,144,167,12,237,86,70,25,106,208,
    235,138,15,120,169,78,91,191,131,191,55,162,208,185,9,130,
    82,140,89,150,67,205,20,99,213,142,200,80,249,86,105,196,
    90,244,88,178,203,81,80,208,50,237,155,102,237,155,23,1,
    173,174,98,48,224,44,17,69,171,250,4,159,152,249,232,2,
    67,20,191,31,136,45,163,129,140,31,83,243,94,13,10,81,
    141,45,135,175,157,203,1,183,145,103,124,29,228,126,75,135,
    91,204,238,134,205,5,87,131,70,13,248,86,5,248,71,53,
    224,37,7,222,55,92,23,83,107,144,153,207,13,129,23,17,
    44,41,232,14,96,129,108,193,208,38,215,224,170,79,148,158,
    35,170,232,68,81,109,33,170,179,62,246,181,166,106,75,107,
    35,82,243,213,178,163,1,217,241,73,18,76,15,163,224,233,
    103,116,10,29,21,86,190,100,84,124,119,155,124,147,31,136,
    183,177,206,175,239,87,252,191,90,118,36,248,9,18,173,249,
    102,220,71,89,200,238,255,251,35,233,78,229,244,16,207,59,
    138,103,238,40,9,198,108,15,179,148,235,147,74,46,197,6,
    189,156,51,11,138,49,251,153,27,102,41,30,120,18,34,155,
    110,36,241,38,32,35,247,61,151,163,186,27,23,110,80,178,
    163,113,189,232,149,92,124,5,249,184,224,58,235,248,53,117,
    175,195,158,62,222,240,98,172,40,15,42,189,232,139,71,29,
    162,185,136,212,78,130,169,13,43,124,53,215,129,233,231,212,
    252,136,154,93,184,166,72,222,71,162,127,32,234,164,34,27,
    99,135,35,212,230,162,75,190,160,125,197,85,199,124,254,109,
    28,83,127,27,40,221,211,6,185,66,247,74,186,250,183,202,
    171,63,186,170,253,93,93,149,241,126,29,72,255,211,255,213,
    67,189,71,215,205,182,247,83,40,147,243,219,188,211,128,70,
    61,252,129,246,78,173,127,76,225,243,91,141,130,141,69,20,
    7,152,111,177,168,59,229,114,207,55,116,93,119,97,44,206,
    160,124,135,38,244,167,242,181,127,5,88,186,114,35,12,4,
    179,153,76,163,139,170,140,103,150,173,31,242,57,31,46,18,
    40,150,96,183,240,185,138,71,18,165,33,25,227,174,85,35,
    240,254,53,153,50,170,99,202,218,66,76,241,200,86,58,138,
    212,1,68,199,19,214,62,93,42,34,153,72,37,175,26,64,
    117,161,190,137,68,18,39,179,57,214,203,92,132,226,123,226,
    251,215,18,136,126,129,68,191,168,236,64,129,200,22,142,229,
    8,142,230,151,62,150,105,86,168,228,210,133,214,188,240,24,
    220,27,181,184,252,73,167,10,173,140,98,186,12,236,227,61,
    92,127,39,114,105,229,247,169,249,65,165,49,70,160,46,186,
    185,188,213,215,7,68,44,167,26,206,44,222,30,141,211,53,
    108,250,120,175,146,102,79,75,51,136,167,250,251,4,127,85,
    154,62,230,32,218,92,22,229,1,246,111,95,26,69,37,198,
    168,195,175,245,119,137,106,88,145,36,151,233,18,63,245,27,
    199,109,182,106,67,141,108,194,92,142,227,2,201,48,141,122,
    125,233,106,164,100,245,14,124,67,120,95,216,123,29,6,215,
    149,143,190,143,61,37,44,23,79,176,161,175,15,206,134,35,
    108,131,62,109,153,162,45,58,194,18,235,29,199,116,108,167,
    101,34,40,104,100,75,180,77,167,189,46,232,127,7,65,210,
    54,118,28,71,252,15,170,185,0,74,
};

EmbeddedPython embedded_m5_internal_param_AbstractNVM(
    "m5/internal/param_AbstractNVM.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_AbstractNVM.py",
    "m5.internal.param_AbstractNVM",
    data_m5_internal_param_AbstractNVM,
    2010,
    5859);

} // anonymous namespace