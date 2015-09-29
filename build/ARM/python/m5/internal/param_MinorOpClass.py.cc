#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MinorOpClass[] = {
    120,156,189,88,255,111,219,198,21,127,71,82,180,37,91,177,
    29,199,73,28,123,53,135,194,152,86,172,214,150,45,235,176,
    6,198,186,118,64,59,160,78,75,13,115,170,109,101,105,242,
    36,83,166,72,129,60,37,85,97,255,50,7,219,126,219,31,
    49,236,135,253,31,251,191,182,247,222,145,52,237,56,88,129,
    85,178,197,195,241,120,247,238,125,249,188,47,119,1,20,127,
    13,124,126,229,0,228,3,1,16,226,79,64,12,48,22,208,
    23,32,164,128,112,19,206,26,144,253,12,194,6,188,2,232,
    27,32,13,184,196,142,9,127,48,32,89,229,53,54,196,38,
    143,8,152,181,64,90,208,111,192,113,178,1,150,180,225,172,
    5,217,87,32,132,72,4,60,15,151,32,92,134,87,72,29,
    59,77,38,184,12,97,139,59,77,8,87,184,211,130,217,58,
    200,21,232,35,241,37,232,183,145,212,59,72,234,14,147,250,
    55,145,10,241,203,61,8,219,52,29,121,249,130,102,90,52,
    147,247,184,195,84,214,74,206,214,161,191,81,246,239,214,250,
    155,181,254,61,238,175,129,220,128,209,22,140,238,195,232,1,
    160,66,194,245,106,135,135,32,77,24,109,67,127,27,36,254,
    30,194,37,234,39,220,168,173,120,196,43,238,86,43,118,120,
    197,46,244,119,65,226,111,71,175,176,161,215,217,66,157,71,
    255,193,191,14,234,28,212,42,54,47,100,150,71,105,226,69,
    201,32,141,12,250,110,83,67,22,10,168,89,42,76,245,33,
    153,234,95,192,118,10,141,194,84,23,128,132,5,201,18,27,
    112,193,157,11,3,102,29,56,23,48,178,32,52,225,28,183,
    105,16,3,67,1,151,6,252,209,164,9,23,216,90,168,220,
    183,192,82,218,78,35,86,174,166,180,4,23,13,56,111,64,
    239,249,185,65,3,103,77,200,254,9,223,236,50,209,101,38,
    106,192,57,182,22,92,90,112,97,195,49,78,194,161,81,147,
    196,23,207,207,81,82,28,233,117,44,228,246,168,38,46,137,
    18,70,89,226,143,165,218,196,190,55,241,51,127,236,125,26,
    37,105,246,108,242,97,236,231,121,167,85,78,76,243,131,137,
    175,78,93,94,105,146,74,198,19,197,20,211,68,170,21,236,
    12,162,36,244,198,105,56,141,165,90,38,114,222,32,138,165,
    231,241,199,79,198,147,52,83,191,201,178,52,115,73,171,60,
    24,167,126,181,130,116,26,196,105,46,59,180,27,111,227,18,
    121,69,179,7,19,166,72,12,48,183,180,56,148,121,144,69,
    19,133,198,210,20,105,54,81,235,144,153,184,201,63,199,166,
    59,205,209,164,93,63,142,252,164,155,71,227,105,236,171,20,
    7,38,225,80,142,159,116,79,166,81,28,118,63,112,63,237,
    78,102,234,52,77,186,56,22,37,74,162,90,226,238,235,10,
    57,192,89,119,137,244,203,104,232,69,44,148,119,42,227,137,
    204,218,52,250,136,182,21,235,98,85,216,194,20,29,209,198,
    94,3,31,83,236,26,43,226,40,34,177,2,18,149,64,101,
    150,48,250,7,176,193,208,222,103,6,100,187,4,146,17,254,
    4,89,21,161,210,163,111,6,127,251,156,244,161,71,71,38,
    153,94,15,158,51,176,16,97,56,243,41,217,58,1,70,71,
    3,70,54,104,212,32,216,52,140,178,25,181,56,157,200,24,
    72,220,130,252,239,215,41,36,235,128,250,70,71,198,161,251,
    184,213,159,25,136,189,14,49,126,196,104,80,167,81,158,190,
    76,88,231,212,103,215,233,161,78,62,155,61,59,25,201,64,
    229,123,56,240,69,58,117,2,63,73,82,229,248,97,232,248,
    74,101,209,201,84,201,220,81,169,179,159,119,154,100,228,141,
    18,80,21,189,217,164,4,16,25,27,1,164,95,194,40,80,
    248,194,72,245,88,255,185,84,8,134,211,52,204,113,156,72,
    12,165,114,137,73,117,7,155,15,202,237,24,117,29,187,196,
    72,46,227,129,106,49,220,208,160,30,111,71,227,140,44,90,
    253,194,143,167,82,209,252,92,249,10,119,165,174,222,104,238,
    216,122,72,210,149,194,145,194,188,36,77,194,25,242,22,5,
    251,180,237,67,70,216,42,16,198,182,16,95,75,216,218,208,
    70,188,173,27,1,137,97,21,232,98,100,221,39,161,129,173,
    45,138,48,129,40,187,196,96,210,49,56,26,176,60,236,108,
    14,245,104,177,75,32,118,119,168,217,165,230,123,165,200,243,
    148,187,125,83,238,199,180,151,193,194,6,102,33,86,229,48,
    71,215,28,102,251,202,97,48,224,245,8,248,6,185,199,21,
    240,77,18,60,59,44,80,78,46,133,134,198,207,53,108,179,
    58,220,117,18,211,46,97,233,18,214,234,128,27,214,0,231,
    146,37,24,109,238,246,155,84,183,183,88,213,13,181,234,158,
    208,94,171,5,78,218,140,143,150,8,200,200,70,161,72,86,
    226,71,216,153,61,32,37,214,213,247,0,211,214,113,210,230,
    252,195,57,140,51,185,142,14,90,171,186,99,17,162,6,38,
    220,47,242,74,78,206,60,201,210,175,103,78,58,112,20,148,
    60,60,221,207,15,246,243,247,209,221,157,67,14,32,218,225,
    181,75,103,114,146,161,235,54,249,69,187,163,199,174,233,21,
    105,1,213,76,57,154,173,195,202,229,232,147,171,140,130,206,
    220,53,219,170,52,75,140,190,79,27,181,88,173,38,60,192,
    167,37,152,27,47,229,136,199,213,1,127,197,231,215,164,96,
    146,81,2,213,111,110,79,243,202,98,144,64,238,15,174,33,
    99,142,66,184,239,32,213,143,74,103,178,161,194,1,61,38,
    177,73,248,254,43,112,205,36,224,47,64,54,71,211,22,30,
    193,190,71,15,153,110,147,166,127,9,28,76,110,73,86,134,
    246,44,163,8,55,232,120,249,123,60,85,231,174,223,194,223,
    106,145,232,210,4,65,121,198,44,170,162,122,158,177,42,95,
    100,176,124,171,92,98,93,119,90,50,204,169,159,211,52,237,
    158,102,229,158,87,65,173,170,101,48,230,204,19,71,203,122,
    11,143,184,249,228,10,69,20,196,119,196,166,81,195,198,143,
    168,121,183,130,133,40,199,230,196,216,222,205,168,91,203,54,
    158,142,116,31,211,238,22,243,187,102,115,154,175,19,169,64,
    223,40,65,255,184,2,189,228,240,251,138,43,100,106,13,178,
    244,165,33,240,120,130,165,5,157,12,44,144,13,232,219,228,
    30,92,254,137,194,123,68,25,162,40,180,93,139,237,172,145,
    35,173,171,202,216,218,142,212,124,61,247,144,64,166,124,26,
    251,227,147,208,63,60,166,109,104,175,160,244,39,163,100,124,
    189,206,56,249,130,120,19,239,252,250,227,82,128,23,115,15,
    7,63,65,170,21,227,12,254,48,13,56,6,252,238,84,58,
    99,57,62,193,13,79,163,137,51,136,253,33,91,196,44,4,
    123,86,10,166,216,164,55,115,103,78,129,230,40,117,130,52,
    193,248,60,13,144,79,39,148,120,40,144,161,243,174,195,193,
    221,137,114,199,63,193,175,126,160,52,182,175,187,38,151,97,
    126,54,204,185,226,58,123,73,221,133,88,212,195,227,94,132,
    197,229,243,82,49,250,16,82,69,106,174,39,181,163,96,138,
    195,98,95,205,116,120,250,57,53,63,164,102,31,22,21,208,
    187,72,245,247,68,158,148,100,99,4,105,10,62,146,212,231,
    125,70,43,111,241,206,147,111,227,157,250,218,160,240,81,155,
    102,202,37,58,105,82,219,164,176,222,111,149,151,16,43,60,
    184,74,39,126,60,80,211,200,29,242,230,165,255,215,155,217,
    35,22,226,11,95,126,167,78,236,62,94,56,223,238,79,161,
    72,226,111,114,96,81,23,170,173,29,120,36,202,74,184,46,
    17,159,163,183,111,197,146,23,100,210,87,82,91,231,209,2,
    164,228,24,160,55,253,170,178,81,41,74,117,18,120,175,18,
    231,146,43,151,217,189,90,165,202,38,19,199,88,102,96,53,
    123,206,18,123,134,46,104,175,208,103,85,130,211,97,41,145,
    47,189,215,133,215,53,43,49,228,79,38,50,9,175,234,81,
    254,50,119,131,83,152,33,215,45,11,7,44,62,239,225,243,
    186,139,145,48,53,217,216,88,141,202,169,22,97,54,6,231,
    176,52,88,103,13,234,113,212,37,115,233,200,89,5,77,247,
    151,149,1,222,186,29,121,169,126,163,227,205,255,154,130,101,
    140,190,173,210,239,172,56,6,116,40,99,169,228,45,166,85,
    196,77,113,188,11,37,230,166,116,134,103,16,174,235,241,61,
    246,188,197,4,245,95,32,213,63,17,121,202,52,20,212,109,
    12,235,91,162,105,53,5,231,199,27,87,145,154,31,42,98,
    117,253,58,203,93,142,5,107,149,46,249,190,172,204,85,236,
    37,116,202,58,242,199,250,58,132,143,251,238,247,169,121,187,
    52,7,3,92,31,102,248,212,160,207,101,232,17,156,188,57,
    87,187,7,52,78,39,223,241,147,131,82,164,3,153,76,199,
    94,33,12,223,215,141,159,168,157,27,115,180,216,189,104,172,
    239,135,212,198,141,239,97,230,99,127,235,198,40,170,57,66,
    45,127,163,47,132,202,97,69,98,222,36,72,204,86,111,156,
    36,95,139,100,108,229,76,14,163,28,233,48,145,106,65,225,
    231,100,6,174,138,111,193,88,125,241,66,64,161,139,77,125,
    16,62,164,43,207,252,16,27,186,248,105,174,53,133,109,208,
    181,162,41,90,162,45,44,177,218,110,154,77,187,217,48,17,
    56,52,178,41,90,102,179,181,42,244,255,30,194,168,101,236,
    173,52,197,127,1,237,219,111,2,
};

EmbeddedPython embedded_m5_internal_param_MinorOpClass(
    "m5/internal/param_MinorOpClass.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_MinorOpClass.py",
    "m5.internal.param_MinorOpClass",
    data_m5_internal_param_MinorOpClass,
    2105,
    6255);

} // anonymous namespace