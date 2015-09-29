#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_ArmMachineType[] = {
    120,156,189,86,81,111,27,69,16,158,189,59,59,177,19,55,
    78,211,164,45,13,212,8,69,152,10,98,9,181,229,161,85,
    69,75,35,1,82,66,57,163,54,53,136,227,234,219,36,231,
    156,239,172,187,117,83,35,231,133,84,192,27,63,2,241,192,
    255,224,127,193,124,115,103,199,41,69,226,37,117,114,171,185,
    217,189,153,157,111,190,153,221,46,21,191,18,63,159,54,136,
    178,121,69,20,240,191,162,136,168,175,168,163,72,105,69,193,
    18,29,150,40,189,73,65,137,94,18,117,44,210,22,157,176,
    96,211,183,22,197,139,242,77,153,34,91,52,138,70,85,210,
    14,117,74,244,36,94,38,71,151,233,176,74,233,15,164,148,
    138,21,237,6,115,20,204,211,75,182,206,66,69,12,206,83,
    80,21,161,66,193,130,8,85,26,213,73,47,80,135,141,207,
    81,167,198,166,110,176,169,11,98,234,47,152,10,120,166,78,
    65,13,203,121,47,79,177,210,193,74,241,113,65,172,44,145,
    182,169,87,167,78,93,132,101,234,44,139,112,145,58,23,69,
    88,161,206,138,8,151,168,115,73,132,85,234,172,34,152,118,
    115,153,81,9,255,230,95,147,81,33,179,200,195,115,157,102,
    97,18,123,97,188,151,132,22,230,203,24,128,97,23,195,92,
    1,230,103,0,243,79,18,36,3,171,0,243,152,72,225,157,
    40,178,232,88,132,99,139,70,77,26,43,234,57,20,216,52,
    102,55,37,58,81,180,175,232,196,162,239,108,44,56,230,209,
    225,240,223,33,199,228,72,246,36,252,220,210,28,29,151,104,
    92,162,246,238,216,130,226,176,66,233,31,244,227,186,24,157,
    23,163,22,141,121,116,232,196,161,227,50,61,225,69,172,234,
    85,0,154,218,29,115,164,172,105,55,29,222,237,206,76,184,
    8,37,8,211,216,239,107,115,137,101,79,199,195,190,119,63,
    237,111,251,221,131,48,214,223,140,6,186,89,157,172,76,178,
    205,129,111,14,92,249,212,6,38,253,129,17,147,73,172,205,
    2,11,123,97,28,120,253,36,24,70,218,204,195,158,183,23,
    70,218,243,100,242,139,254,32,73,205,86,154,38,169,11,88,
    69,25,37,254,244,11,128,218,141,146,76,55,225,77,220,184,
    48,111,176,122,111,32,22,177,1,217,46,62,14,116,214,77,
    195,129,225,108,229,22,177,26,214,154,200,147,12,153,203,67,
    107,152,113,78,91,126,20,250,113,43,11,251,195,200,55,9,
    43,6,193,190,238,223,106,61,27,134,81,208,186,239,110,183,
    6,35,115,144,196,45,214,133,177,209,140,75,212,122,13,34,
    155,188,236,34,108,31,133,251,94,40,81,121,7,58,26,232,
    180,6,237,91,240,171,234,106,81,149,149,173,154,170,198,82,
    137,31,91,173,91,11,106,39,68,92,93,196,10,90,217,19,
    34,253,78,146,50,206,248,161,69,233,58,104,210,227,127,133,
    188,50,89,218,152,179,100,238,107,0,146,107,123,54,146,159,
    43,199,66,45,230,24,175,188,139,108,199,36,252,40,81,175,
    76,57,111,152,110,57,145,210,17,70,94,14,51,22,27,119,
    40,251,237,172,133,184,78,12,56,23,27,171,214,216,213,79,
    66,197,118,19,27,223,17,58,152,131,48,75,142,98,1,29,
    178,20,79,155,49,121,52,250,234,89,79,119,77,118,157,21,
    79,147,97,163,235,199,113,98,26,126,16,52,124,99,210,240,
    217,208,232,172,97,146,198,70,214,172,32,203,203,19,70,77,
    237,49,204,5,131,144,109,102,80,254,18,132,93,195,47,43,
    242,34,248,103,218,48,27,14,146,32,99,61,76,236,107,227,
    98,147,230,2,15,247,39,238,132,118,205,242,132,36,153,142,
    246,76,85,248,230,103,153,39,238,160,23,106,225,235,231,126,
    52,212,6,235,51,227,27,246,10,49,119,116,254,228,186,130,
    240,38,209,1,49,47,78,226,96,196,155,11,187,27,240,123,
    69,40,182,72,32,217,42,19,108,142,199,50,213,152,112,117,
    171,139,56,156,130,94,66,173,53,68,77,146,110,85,116,10,
    166,217,9,247,147,166,37,13,65,2,146,114,107,64,194,199,
    46,88,236,94,195,176,142,225,237,73,204,231,26,120,237,213,
    192,63,134,51,75,162,237,218,69,92,211,146,217,57,83,50,
    87,79,75,134,155,94,27,212,183,80,32,167,212,183,17,121,
    122,175,224,57,138,138,83,205,211,51,236,22,60,220,58,226,
    44,79,136,233,130,109,179,148,219,159,161,156,139,84,8,223,
    220,171,255,133,221,245,55,140,221,126,142,221,45,56,91,44,
    152,82,19,134,84,85,23,105,182,10,36,5,197,135,44,140,
    46,3,197,89,252,46,243,217,245,36,174,201,33,36,7,153,
    28,184,121,131,200,97,205,5,7,156,218,179,105,173,56,92,
    50,212,243,32,77,94,140,26,201,94,195,208,100,15,119,55,
    178,205,141,236,14,87,124,227,158,244,144,188,230,243,170,78,
    245,32,229,234,173,200,75,94,145,158,84,167,87,28,13,140,
    243,42,240,179,38,232,74,3,202,76,138,190,115,254,208,86,
    167,208,98,167,119,224,169,42,184,218,116,153,159,170,146,237,
    120,137,116,61,185,35,200,44,63,15,128,48,130,212,132,123,
    150,219,206,55,43,113,32,34,247,253,51,220,56,207,40,220,
    27,108,246,225,164,158,202,52,101,2,30,27,251,4,197,127,
    225,147,86,129,12,63,19,178,206,201,45,138,66,202,15,15,
    146,183,130,229,223,147,52,148,215,156,88,86,94,92,86,209,
    114,184,246,178,79,100,105,126,128,125,73,191,206,116,163,19,
    155,20,14,27,187,184,28,205,30,54,206,180,28,133,46,255,
    235,64,113,206,214,45,50,115,224,103,88,150,87,168,61,173,
    208,211,198,54,189,209,112,219,57,87,38,205,231,62,60,108,
    231,139,83,30,161,147,95,83,43,214,12,59,62,196,240,209,
    148,24,106,162,59,175,157,93,127,181,245,206,156,57,94,222,
    238,62,135,123,71,54,188,84,22,28,95,185,30,231,91,93,
    155,130,57,146,205,146,187,132,193,154,212,59,119,7,190,42,
    153,145,28,208,185,203,169,10,45,96,135,207,224,252,150,216,
    192,119,239,98,120,15,195,7,176,0,103,121,161,9,161,243,
    166,17,235,35,105,27,146,97,119,147,138,203,165,171,253,232,
    113,168,143,188,173,7,114,57,153,190,63,122,176,43,138,199,
    91,47,6,169,230,118,179,181,189,45,219,153,85,220,190,41,
    183,188,157,127,193,37,55,133,238,115,63,125,51,133,43,160,
    221,205,27,225,61,132,149,221,230,1,71,127,101,169,162,202,
    22,110,150,182,170,242,53,192,81,139,181,138,93,41,87,74,
    54,95,5,160,89,81,85,187,82,173,168,226,207,250,7,231,
    127,11,98,
};

EmbeddedPython embedded_m5_internal_enum_ArmMachineType(
    "m5/internal/enum_ArmMachineType.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/enum_ArmMachineType.py",
    "m5.internal.enum_ArmMachineType",
    data_m5_internal_enum_ArmMachineType,
    1491,
    3598);

} // anonymous namespace