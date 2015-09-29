#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_MemSched[] = {
    120,156,189,86,223,111,219,84,20,62,215,118,210,38,109,214,
    116,101,191,88,97,65,168,34,76,208,72,136,137,135,77,19,
    131,33,49,196,10,56,15,221,2,194,120,246,77,227,212,177,
    35,251,102,35,168,125,161,19,240,198,31,129,120,224,255,224,
    111,226,21,206,119,108,167,233,4,18,15,148,180,190,58,62,
    190,62,247,156,239,124,231,28,7,84,254,106,124,189,223,33,
    202,255,96,33,228,127,69,49,209,68,209,64,145,210,138,194,
    13,58,172,81,246,46,133,53,122,78,52,176,72,91,116,194,
    130,77,95,90,148,172,203,59,117,138,109,209,40,154,55,73,
    59,52,168,209,126,178,73,142,174,211,97,147,178,111,72,41,
    149,40,122,20,174,80,184,74,207,217,58,11,13,49,184,74,
    97,83,132,6,133,107,34,52,105,222,38,189,70,3,54,190,
    66,131,22,155,186,201,166,46,136,169,223,97,42,228,39,109,
    10,91,216,206,190,60,198,78,7,59,229,140,11,98,101,131,
    180,77,227,54,13,218,34,108,210,96,83,132,139,52,184,40,
    194,22,13,182,224,122,191,187,201,161,71,127,242,175,171,88,
    50,235,188,60,213,89,30,165,137,23,37,195,52,178,240,188,
    142,5,136,5,88,86,74,232,62,4,116,191,145,224,22,90,
    37,116,199,68,10,247,68,177,69,199,34,28,91,52,239,210,
    145,162,177,67,161,77,71,124,76,141,78,20,29,40,58,177,
    232,43,27,27,142,121,117,56,216,87,201,49,5,110,99,9,
    182,176,180,66,199,53,58,170,81,255,209,145,5,197,97,131,
    178,95,233,187,109,49,186,42,70,45,58,226,213,161,19,135,
    142,235,180,207,155,88,53,110,0,34,245,232,136,35,101,77,
    191,235,176,183,123,75,225,34,148,48,202,18,127,162,205,5,
    150,61,157,204,38,222,67,61,233,7,35,29,118,155,213,158,
    52,223,157,250,102,228,202,75,54,208,152,76,141,24,75,19,
    109,214,88,24,70,73,232,77,210,112,22,107,179,10,75,222,
    48,138,181,231,201,195,7,147,105,154,153,143,178,44,205,92,
    0,42,202,56,245,23,111,0,206,32,78,115,221,197,105,114,
    140,11,243,6,187,135,83,177,8,7,196,81,188,28,234,60,
    200,162,169,225,60,21,22,177,27,214,186,200,144,44,249,167,
    188,244,102,57,103,179,231,199,145,159,244,242,104,50,139,125,
    147,178,98,26,30,232,201,173,222,147,89,20,135,189,123,238,
    195,222,116,110,70,105,210,99,93,148,24,205,136,196,189,51,
    88,236,242,134,139,176,250,44,58,240,34,137,199,27,233,120,
    170,179,22,180,47,227,68,213,86,235,170,174,108,213,85,45,
    150,106,124,217,106,219,90,83,123,17,34,10,16,37,168,100,
    87,228,249,133,36,77,156,229,67,139,178,109,80,99,204,255,
    10,185,100,130,244,241,204,146,103,95,0,138,66,59,182,145,
    240,66,121,36,116,98,94,241,206,59,200,112,66,194,137,26,
    141,235,84,112,133,41,86,144,39,155,99,229,237,48,99,177,
    113,135,242,159,207,90,72,218,196,80,115,57,177,234,50,31,
    245,189,208,175,223,133,227,123,66,4,51,138,242,244,89,34,
    112,67,150,130,233,51,38,159,207,63,123,50,214,129,201,111,
    176,226,113,58,235,4,126,146,164,166,227,135,97,199,55,38,
    139,158,204,140,206,59,38,237,236,228,221,6,242,187,89,113,
    105,97,111,62,173,184,131,60,51,119,138,155,48,10,12,223,
    108,201,141,224,159,107,195,60,24,165,97,206,122,152,56,208,
    198,133,147,66,226,123,213,113,66,184,110,189,162,71,174,227,
    161,105,10,211,252,60,247,228,56,232,133,84,120,251,169,31,
    207,180,193,254,220,248,134,79,133,88,28,116,158,180,186,138,
    192,170,184,128,149,151,164,73,56,103,183,162,96,7,39,94,
    21,114,173,19,232,117,137,169,181,194,107,157,90,76,181,182,
    21,32,2,167,36,150,144,234,50,226,37,73,180,42,251,2,
    19,236,132,187,71,215,146,242,151,80,164,196,58,144,240,178,
    11,254,186,215,177,108,99,121,165,138,246,156,66,110,189,24,
    242,59,56,198,146,56,3,187,140,104,81,38,123,103,202,228,
    218,105,153,112,115,235,131,238,22,138,226,148,238,54,98,206,
    238,150,220,70,33,113,122,249,241,18,163,5,9,183,141,8,
    235,21,25,93,48,108,153,102,7,75,52,115,145,4,225,152,
    123,237,159,80,187,241,191,161,118,80,160,118,11,199,172,151,
    236,104,9,43,154,42,64,106,173,18,67,193,239,62,11,243,
    43,192,111,25,185,43,60,157,246,147,150,140,25,25,85,50,
    64,139,118,80,0,90,8,14,120,52,180,233,114,57,62,114,
    84,239,52,75,191,157,119,210,97,199,80,229,195,157,157,124,
    119,39,191,205,245,221,185,43,29,163,168,240,162,134,51,61,
    205,184,86,27,114,83,212,159,39,181,232,149,35,128,17,190,
    4,228,172,10,87,105,55,185,201,208,101,206,19,212,230,2,
    84,248,120,27,103,52,5,81,155,174,240,213,84,226,136,151,
    74,119,147,249,47,79,249,250,0,216,34,60,77,248,98,114,
    251,133,155,18,1,98,113,223,56,195,135,243,241,223,189,201,
    6,239,87,213,83,167,69,246,113,217,240,16,132,254,145,167,
    168,2,1,126,32,100,154,19,90,150,128,20,27,46,36,108,
    11,219,191,38,105,28,127,51,147,172,162,148,172,178,181,112,
    165,229,239,201,214,98,68,125,66,63,45,117,157,19,155,20,
    198,137,93,126,242,44,143,19,103,81,124,66,145,127,53,50,
    156,179,85,138,156,140,252,28,219,138,122,180,23,245,120,218,
    192,22,95,43,220,100,206,137,61,171,133,117,15,142,60,56,
    229,14,122,245,117,181,101,45,49,226,45,44,111,47,200,160,
    42,221,127,239,211,141,23,155,235,210,60,241,138,134,246,49,
    14,118,196,213,141,186,96,247,194,135,110,225,228,75,11,0,
    231,185,11,141,187,129,197,170,234,154,187,0,127,0,153,121,
    241,237,40,71,46,84,40,245,61,158,172,197,87,95,7,239,
    189,134,229,117,44,111,194,2,14,43,202,74,72,92,52,135,
    68,63,147,246,32,89,117,119,169,156,221,195,96,152,203,11,
    195,76,68,52,156,189,165,184,101,83,240,212,207,206,187,222,
    36,238,59,69,207,186,139,47,209,28,163,11,147,185,177,209,
    80,117,11,159,124,182,106,242,148,118,212,122,171,97,55,234,
    141,154,205,147,26,154,45,213,180,27,205,134,226,63,235,47,
    77,28,223,153,
};

EmbeddedPython embedded_m5_internal_enum_MemSched(
    "m5/internal/enum_MemSched.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/enum_MemSched.py",
    "m5.internal.enum_MemSched",
    data_m5_internal_enum_MemSched,
    1444,
    3461);

} // anonymous namespace