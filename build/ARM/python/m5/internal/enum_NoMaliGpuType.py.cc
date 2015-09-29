#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_NoMaliGpuType[] = {
    120,156,189,86,91,111,27,85,16,158,179,187,118,98,39,110,
    156,166,87,26,168,17,138,48,21,196,85,213,203,67,171,138,
    66,17,23,169,134,174,43,181,53,136,101,235,61,78,214,89,
    239,90,187,199,109,141,156,23,82,1,111,252,8,196,3,255,
    131,255,85,230,155,93,59,78,0,137,151,212,201,30,205,206,
    158,157,57,243,205,55,51,219,163,226,87,226,235,227,6,81,
    246,154,133,128,255,21,69,68,67,69,93,69,74,43,10,214,
    104,175,68,233,117,10,74,244,138,168,107,145,182,232,128,5,
    155,190,181,40,94,149,119,202,20,217,162,81,52,169,146,118,
    168,91,162,199,241,58,57,186,76,123,85,74,127,32,165,84,
    172,232,73,176,68,193,50,189,98,235,44,84,196,224,50,5,
    85,17,42,20,172,136,80,165,73,157,244,10,117,217,248,18,
    117,107,108,234,10,155,58,37,166,254,130,169,128,159,212,41,
    168,97,59,159,229,41,118,58,216,41,62,78,137,149,53,210,
    54,13,234,212,173,139,176,78,221,117,17,78,83,247,180,8,
    27,212,221,16,225,12,117,207,32,134,78,115,157,49,8,95,
    243,175,169,88,50,171,188,60,215,105,22,38,177,23,198,253,
    36,180,240,188,140,5,208,245,176,44,21,24,126,10,12,255,
    36,1,48,176,10,12,247,137,20,238,137,34,139,246,69,216,
    183,104,210,164,169,162,129,67,129,77,83,118,83,162,3,69,
    59,138,14,44,250,206,198,134,125,94,29,142,250,29,114,76,
    14,224,64,162,206,45,45,209,126,137,166,37,234,60,153,90,
    80,236,85,40,253,131,126,220,20,163,203,98,212,162,41,175,
    14,29,56,180,95,166,199,188,137,85,131,10,176,82,79,166,
    28,41,107,58,77,135,79,219,94,8,23,161,4,97,26,251,
    67,109,54,88,246,116,60,30,122,237,228,129,31,133,159,143,
    198,143,38,35,221,172,206,54,38,217,246,200,55,187,174,188,
    105,3,146,225,200,136,197,36,214,102,133,133,126,24,7,222,
    48,9,198,145,54,203,48,231,245,195,72,123,158,60,252,114,
    56,74,82,243,89,154,38,169,11,84,69,25,37,254,252,13,
    96,218,139,146,76,55,225,77,220,184,48,111,176,187,63,18,
    139,56,128,156,22,47,7,58,235,165,225,200,112,178,114,139,
    216,13,107,77,164,73,150,236,33,47,173,113,198,41,109,113,
    76,126,220,202,194,225,56,242,77,194,138,81,176,163,135,55,
    90,207,198,97,20,180,238,185,15,90,163,137,217,77,226,22,
    235,194,216,104,134,37,106,253,19,144,109,222,117,26,166,95,
    132,59,94,40,65,121,187,58,26,233,180,6,237,91,112,171,
    234,106,85,149,149,173,154,170,198,82,137,47,91,109,90,43,
    170,29,34,172,30,66,5,169,236,25,141,126,39,73,24,231,
    123,207,162,116,19,36,25,240,191,66,86,153,42,29,60,179,
    228,217,67,224,145,107,7,54,82,159,43,167,66,44,102,24,
    239,188,131,92,199,36,236,40,209,160,76,57,107,152,108,57,
    141,210,9,86,222,14,51,22,27,119,40,251,237,168,133,184,
    78,140,55,87,24,171,206,177,171,159,132,136,157,38,14,222,
    22,54,152,221,48,75,94,196,130,57,100,41,157,14,99,242,
    205,228,235,103,3,221,51,217,101,86,60,77,198,141,158,31,
    199,137,105,248,65,208,240,141,73,195,103,99,163,179,134,73,
    26,91,89,179,130,36,175,207,8,53,183,199,48,23,4,66,
    178,153,64,249,77,16,246,12,223,8,83,61,193,63,211,134,
    201,176,155,4,25,235,97,98,71,27,23,135,52,167,120,185,
    55,115,39,172,107,150,103,28,201,116,212,55,85,161,155,159,
    101,158,184,131,94,152,133,183,159,251,209,88,27,236,207,140,
    111,216,43,196,220,209,137,115,235,2,162,155,5,7,192,188,
    56,137,131,9,159,45,236,109,193,237,5,97,216,42,129,99,
    103,153,95,75,188,150,169,198,124,171,91,61,132,225,20,236,
    18,102,157,67,208,36,217,86,69,155,96,150,29,112,51,105,
    90,210,13,36,30,41,182,6,36,188,236,130,196,238,37,44,
    155,88,222,158,133,124,146,113,215,142,199,125,13,190,44,9,
    182,103,23,97,205,11,166,125,164,96,46,30,22,12,55,188,
    14,136,111,161,60,14,137,111,35,240,244,110,193,114,148,20,
    39,154,31,47,112,91,224,112,235,8,179,60,163,165,11,174,
    45,18,110,103,129,112,46,50,33,108,115,47,254,23,116,151,
    223,44,116,59,57,116,55,224,107,181,224,73,77,248,81,85,
    61,36,217,42,128,20,16,239,179,48,57,15,16,23,225,59,
    207,99,235,113,92,147,249,35,51,76,70,108,222,29,114,84,
    115,193,1,163,250,54,157,43,230,74,134,98,30,165,201,203,
    73,35,233,55,12,205,206,112,103,43,219,222,202,110,115,185,
    55,238,74,3,201,11,62,47,233,84,143,82,46,221,138,220,
    228,229,232,73,105,122,197,88,96,152,207,2,62,107,6,174,
    116,159,204,164,104,58,39,142,108,117,142,44,14,122,27,142,
    170,2,171,77,231,249,170,42,57,141,151,72,199,147,175,3,
    121,202,215,39,0,24,49,106,194,135,149,219,201,207,42,97,
    32,32,247,253,35,204,56,193,32,220,43,108,245,254,172,152,
    202,52,231,1,46,27,199,4,191,127,225,25,171,64,133,159,
    9,57,231,212,22,21,33,181,135,11,169,219,192,246,239,73,
    154,201,191,12,43,43,175,44,171,104,55,92,120,217,45,217,
    154,207,174,175,232,215,133,78,116,96,147,194,156,177,139,175,
    162,197,57,227,204,107,81,200,242,191,102,137,115,180,104,145,
    152,93,63,195,182,188,60,237,121,121,30,54,181,249,183,12,
    247,156,147,228,209,114,238,194,195,105,190,60,100,17,154,248,
    37,181,97,45,112,227,67,44,31,205,105,161,102,186,19,58,
    216,229,227,93,119,97,218,120,121,167,251,2,222,29,57,239,
    90,89,80,60,246,85,156,159,244,236,28,202,73,230,66,227,
    174,97,177,102,181,206,157,129,191,145,204,68,38,115,238,114,
    174,66,249,183,121,248,230,95,135,13,188,247,46,150,247,176,
    124,0,11,112,150,87,153,208,57,111,24,177,126,33,45,67,
    242,235,110,83,49,222,31,221,188,250,178,16,174,21,194,173,
    155,87,13,168,209,62,142,129,60,238,61,247,211,55,82,138,
    2,196,157,188,177,221,197,39,108,118,157,23,12,242,202,90,
    69,149,45,124,38,218,170,202,67,221,81,171,181,138,93,41,
    87,74,54,15,118,104,54,84,213,174,84,43,74,254,172,191,
    1,27,212,247,67,
};

EmbeddedPython embedded_m5_internal_enum_NoMaliGpuType(
    "m5/internal/enum_NoMaliGpuType.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/enum_NoMaliGpuType.py",
    "m5.internal.enum_NoMaliGpuType",
    data_m5_internal_enum_NoMaliGpuType,
    1461,
    3534);

} // anonymous namespace
