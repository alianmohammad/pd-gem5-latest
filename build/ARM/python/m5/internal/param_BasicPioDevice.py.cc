#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasicPioDevice[] = {
    120,156,197,88,235,111,220,198,17,159,37,239,40,221,73,167,
    135,37,249,41,71,116,109,33,215,160,209,37,110,221,4,136,
    97,212,137,3,52,5,172,184,188,2,118,46,69,25,138,220,
    59,241,196,35,15,228,74,206,5,210,151,202,104,251,173,127,
    68,209,15,253,63,138,254,91,237,204,44,73,241,244,8,12,
    180,190,74,199,197,112,31,179,243,248,205,236,44,125,200,255,
    234,248,252,202,6,200,254,37,0,2,252,9,136,0,70,2,
    122,2,132,20,16,172,193,65,29,210,95,64,80,135,55,0,
    61,3,164,1,167,72,152,240,173,1,241,34,175,177,32,50,
    185,71,192,164,9,178,6,189,58,188,140,87,161,38,45,56,
    104,66,250,29,8,33,98,1,175,130,57,8,230,225,13,114,
    71,162,193,12,231,33,104,50,209,128,96,129,137,38,76,86,
    64,46,64,15,153,207,65,175,133,172,62,64,86,75,204,234,
    159,196,42,192,145,117,8,90,52,29,101,249,134,102,214,104,
    38,239,177,196,92,150,11,201,86,160,183,90,208,215,42,244,
    90,133,94,175,208,27,21,250,122,133,190,81,161,111,86,232,
    91,21,250,118,133,190,83,161,55,153,94,6,185,10,195,187,
    48,124,15,134,91,208,71,227,174,148,26,216,32,77,24,222,
    131,222,61,144,248,179,225,20,237,31,172,86,86,252,132,87,
    92,43,87,220,231,21,15,160,247,0,36,254,238,235,21,22,
    116,219,27,232,211,240,223,248,215,70,159,130,90,196,230,72,
    166,89,152,196,110,24,247,147,208,160,113,139,26,66,128,79,
    205,92,14,133,47,8,10,255,0,198,65,96,228,80,56,1,
    100,44,72,151,200,128,19,38,78,12,152,180,225,88,192,176,
    6,129,9,199,184,77,157,4,24,8,56,53,224,247,38,77,
    56,193,182,134,206,123,15,106,74,227,96,200,206,211,156,230,
    224,164,14,199,117,232,190,58,54,168,227,160,1,233,223,225,
    135,77,102,58,207,76,13,56,198,182,6,167,53,56,177,224,
    37,78,194,174,97,131,212,23,175,142,81,83,236,233,182,107,
    40,237,110,69,93,82,37,8,211,216,27,73,69,150,112,199,
    94,234,141,220,207,189,44,244,95,132,201,51,121,20,250,178,
    221,44,166,38,217,206,216,83,251,14,175,53,201,40,163,177,
    98,158,73,44,213,2,18,253,48,14,220,81,18,28,70,82,
    205,19,67,183,31,70,210,117,121,240,171,209,56,73,213,151,
    105,154,164,14,217,149,59,163,196,43,87,144,85,253,40,201,
    100,155,118,227,109,28,98,175,104,118,127,204,28,73,0,150,
    151,22,7,50,243,211,112,172,208,93,154,35,205,38,110,109,
    114,20,55,89,23,155,206,97,134,78,237,120,81,232,197,157,
    44,28,29,70,158,74,176,99,28,12,228,232,81,103,239,48,
    140,130,206,83,231,121,103,60,81,251,73,220,193,190,48,86,
    18,13,19,117,46,51,201,14,206,187,70,204,95,135,3,55,
    100,181,220,125,25,141,101,218,162,222,219,180,177,88,17,139,
    194,18,166,104,139,22,82,117,124,76,177,105,44,136,221,144,
    20,243,73,89,2,150,89,64,233,111,192,78,67,159,31,24,
    144,110,18,80,134,248,19,228,89,132,75,151,198,12,30,251,
    45,89,68,247,14,77,114,191,238,60,102,112,33,202,112,230,
    99,242,119,12,140,144,58,12,45,208,200,65,192,105,40,165,
    19,106,113,58,177,49,144,121,13,178,191,78,115,136,87,0,
    45,142,201,2,187,174,227,86,127,100,48,118,219,36,248,46,
    227,65,237,135,89,242,58,102,171,19,205,225,211,69,155,188,
    152,124,189,55,148,190,202,182,176,227,155,228,208,246,189,56,
    78,148,237,5,129,237,41,149,134,123,135,74,102,182,74,236,
    237,172,221,32,55,175,22,144,42,249,77,198,5,132,200,221,
    8,33,253,18,132,190,194,151,53,126,97,251,103,82,33,28,
    246,147,32,195,126,98,49,144,202,33,33,213,18,54,79,139,
    237,24,119,109,171,64,73,38,163,190,106,50,224,188,44,115,
    121,59,234,103,108,209,234,35,47,58,148,138,230,103,202,83,
    184,43,145,122,163,25,160,235,38,233,87,168,71,38,115,227,
    36,14,38,40,93,232,111,211,198,55,25,99,139,64,40,219,
    64,132,205,97,107,65,11,17,183,98,248,164,72,45,199,23,
    99,235,58,169,13,236,111,145,39,11,196,217,41,166,148,182,
    193,57,129,53,226,128,179,137,162,197,14,193,216,185,67,205,
    38,53,119,11,165,223,173,230,173,243,154,63,164,221,12,86,
    215,55,115,197,202,160,217,157,10,154,91,103,65,131,137,175,
    75,224,55,40,68,206,192,111,146,234,233,147,28,233,20,86,
    232,108,28,174,224,155,13,226,172,144,162,86,1,77,135,240,
    86,5,221,160,2,58,135,124,193,136,115,110,93,101,188,173,
    89,27,111,160,141,247,136,118,91,204,177,210,98,140,52,133,
    79,142,54,114,83,178,25,159,33,49,185,65,102,172,26,240,
    6,30,96,47,227,22,159,68,124,154,113,205,160,115,132,182,
    171,38,106,132,170,190,9,215,243,19,38,163,144,30,167,201,
    247,19,59,233,219,10,10,25,30,111,103,59,219,217,103,24,
    244,246,19,78,35,58,236,117,96,167,114,156,98,0,55,248,
    69,7,165,203,1,234,230,199,3,26,154,206,40,246,15,155,
    151,115,80,166,82,74,61,51,176,109,179,180,45,137,250,25,
    109,213,100,195,154,112,3,159,166,96,121,220,132,51,31,87,
    10,60,138,207,231,100,98,210,82,2,213,138,78,87,75,203,
    138,144,74,206,251,83,232,120,167,106,56,31,32,223,103,69,
    72,89,80,98,129,30,147,4,37,148,255,25,184,130,18,240,
    39,32,191,163,123,243,184,224,8,164,135,220,183,70,211,255,
    0,156,84,46,57,182,12,29,95,70,158,118,48,252,178,79,
    120,170,62,197,126,3,127,169,100,164,83,19,4,157,56,102,
    94,35,85,79,156,90,25,145,12,152,183,58,85,106,211,161,
    75,174,217,247,50,154,166,131,212,44,131,244,44,185,149,117,
    13,102,158,119,139,165,121,189,137,75,242,124,117,134,36,74,
    231,119,196,154,81,193,199,207,168,249,176,132,134,40,250,222,
    153,104,91,231,243,111,229,228,113,117,206,251,53,237,95,99,
    137,151,45,62,101,167,217,148,224,175,23,224,127,88,130,95,
    114,42,126,195,85,51,181,6,249,251,212,16,120,37,194,82,
    131,110,35,53,144,117,232,89,20,38,92,16,138,60,138,68,
    145,172,40,201,77,229,121,182,202,174,182,87,233,114,237,77,
    106,190,159,65,114,32,135,62,142,188,209,94,224,61,113,105,
    35,218,205,47,226,202,40,68,95,169,138,78,49,33,174,146,
    158,95,63,42,84,56,154,65,98,248,152,28,95,136,206,97,
    16,36,62,103,131,223,237,75,123,36,71,123,184,229,126,56,
    182,251,145,55,96,175,152,185,106,95,23,170,41,118,235,249,
    179,52,163,148,179,155,216,126,18,99,182,62,244,81,82,59,
    144,120,85,144,129,253,161,205,169,222,14,51,219,219,195,81,
    207,87,26,227,211,65,202,165,153,151,14,50,174,194,14,94,
    19,57,35,175,186,120,17,12,177,228,252,174,48,141,190,156,
    148,121,155,241,175,3,6,143,60,188,2,168,137,78,85,191,
    164,230,167,212,108,195,236,210,123,7,249,82,74,206,200,80,
    22,102,147,134,80,235,23,34,244,5,173,206,46,198,105,252,
    54,113,170,63,90,224,4,105,193,112,142,219,121,202,238,189,
    70,209,217,228,118,129,59,23,139,184,110,113,231,18,127,110,
    208,31,72,86,40,198,173,255,54,198,57,74,102,20,31,253,
    255,105,104,59,15,255,15,146,59,63,135,252,144,191,42,172,
    13,168,20,216,159,232,176,214,94,192,82,96,178,94,41,255,
    88,75,241,18,207,109,44,17,143,185,120,116,13,93,37,158,
    185,140,79,98,190,157,83,157,28,203,215,238,101,88,212,165,
    32,129,193,27,143,101,28,156,149,121,60,50,3,43,81,188,
    14,225,236,44,198,154,110,29,159,139,216,36,133,42,250,49,
    6,235,37,26,111,207,206,167,73,153,146,86,167,82,146,67,
    78,211,73,168,204,63,218,3,247,174,200,4,238,56,76,92,
    172,163,82,186,55,188,197,44,44,13,244,215,152,188,67,61,
    248,177,37,168,174,140,253,9,243,126,171,137,196,126,33,103,
    159,247,177,123,20,93,168,2,25,73,37,47,5,145,34,157,
    243,27,90,32,241,56,73,38,120,137,224,178,28,223,35,215,
    157,85,22,254,84,231,81,200,150,242,44,108,225,213,107,67,
    52,106,13,193,135,218,185,239,138,90,34,114,147,46,63,39,
    153,195,161,186,92,58,142,141,93,28,47,28,147,116,81,218,
    245,70,250,187,6,223,218,29,242,155,115,191,112,59,7,147,
    190,141,112,209,175,175,86,24,127,124,226,242,1,235,236,20,
    70,29,61,218,41,148,218,209,74,149,250,240,215,183,209,35,
    142,222,139,211,186,147,76,201,209,5,30,50,62,28,185,207,
    229,40,73,39,207,147,64,170,205,115,227,79,17,52,142,23,
    15,164,123,36,169,32,96,204,77,77,200,171,1,205,163,152,
    101,95,42,195,244,220,43,244,193,65,253,81,138,43,220,139,
    227,95,68,137,127,32,131,124,206,221,171,231,60,75,70,30,
    246,95,190,75,55,44,118,89,61,55,30,164,180,106,227,92,
    47,66,47,68,228,253,160,191,117,21,221,138,28,127,222,13,
    228,190,242,141,207,121,150,97,26,124,140,253,84,14,66,244,
    74,202,108,206,231,217,79,127,52,15,84,151,207,40,88,116,
    237,172,239,248,79,40,234,249,163,14,125,215,106,44,55,132,
    101,208,119,83,83,52,69,75,212,196,98,171,97,54,172,70,
    221,196,128,162,158,53,209,52,27,205,69,113,249,255,22,134,
    91,211,216,90,104,136,255,0,200,136,225,15,
};

EmbeddedPython embedded_m5_internal_param_BasicPioDevice(
    "m5/internal/param_BasicPioDevice.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_BasicPioDevice.py",
    "m5.internal.param_BasicPioDevice",
    data_m5_internal_param_BasicPioDevice,
    2188,
    6596);

} // anonymous namespace
