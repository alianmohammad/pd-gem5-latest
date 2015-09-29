#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Switch[] = {
    120,156,189,88,109,111,219,214,21,62,151,164,104,75,182,98,
    59,142,243,98,59,49,135,194,168,86,172,214,150,45,235,176,
    6,65,155,102,64,187,97,110,75,21,72,162,13,99,105,242,
    74,162,76,145,2,121,29,87,133,189,15,115,176,245,219,126,
    196,208,15,253,31,251,95,219,57,231,146,52,173,52,69,129,
    86,181,197,139,203,251,114,238,121,121,206,203,101,0,197,95,
    3,159,247,28,128,252,239,2,32,196,159,128,24,96,34,160,
    47,64,72,1,225,38,28,55,32,251,13,132,13,120,9,208,
    55,64,26,112,129,29,19,254,98,64,178,202,123,108,136,77,
    30,17,48,107,129,180,160,223,128,167,201,6,88,210,134,227,
    22,100,159,131,16,34,17,240,44,92,130,112,25,94,34,117,
    236,52,153,224,50,132,45,238,52,33,92,225,78,11,102,235,
    32,87,160,143,196,151,160,223,70,82,111,33,169,107,76,234,
    191,68,42,196,153,27,16,182,105,57,242,242,156,86,90,180,
    146,207,184,198,84,214,74,206,214,161,191,81,246,175,215,250,
    155,181,254,141,90,127,171,214,191,201,253,53,144,27,48,190,
    5,227,219,48,190,3,3,84,202,122,117,242,54,72,19,198,
    59,208,223,1,137,191,109,184,64,189,133,27,181,29,187,188,
    227,122,181,227,46,239,184,7,253,123,32,241,119,87,239,176,
    161,215,217,66,91,68,255,195,191,14,218,2,212,42,54,47,
    100,150,71,105,226,69,201,32,141,12,154,183,169,33,203,5,
    212,44,21,38,252,128,76,248,13,176,253,66,163,48,225,57,
    32,97,65,178,196,6,156,115,231,220,128,89,7,206,4,140,
    45,8,77,56,195,99,26,196,192,80,192,133,1,127,53,105,
    193,57,182,22,42,253,30,88,74,219,111,204,74,215,148,150,
    224,188,1,103,13,232,61,59,51,104,224,184,9,217,215,240,
    229,46,19,93,102,162,6,156,97,107,193,133,5,231,54,60,
    197,69,56,52,110,146,248,226,217,25,74,138,35,189,142,133,
    220,30,214,196,37,81,194,40,75,252,137,84,109,236,123,83,
    63,243,39,94,239,52,82,193,168,211,42,151,164,249,193,212,
    87,35,151,247,152,164,140,201,84,49,173,52,145,106,5,59,
    131,40,9,189,73,26,158,196,82,45,19,33,111,16,197,210,
    243,120,242,163,201,52,205,212,31,178,44,205,92,210,39,15,
    198,169,95,237,32,109,6,113,154,203,14,157,198,199,184,68,
    94,209,234,193,148,41,18,3,204,39,109,14,101,30,100,209,
    84,161,153,52,69,90,77,212,58,100,32,110,242,63,97,211,
    61,201,209,152,93,63,142,252,164,155,71,147,147,216,87,41,
    14,76,195,161,156,60,232,30,157,68,113,216,125,223,253,115,
    119,58,83,163,52,233,226,88,148,40,137,10,137,187,117,85,
    28,224,252,117,34,122,26,13,189,136,197,241,70,50,158,202,
    140,180,150,111,211,129,98,93,172,10,91,152,162,35,218,216,
    107,224,99,138,93,99,69,28,70,36,80,64,66,18,144,204,
    18,58,255,1,54,18,218,248,216,128,108,151,128,49,198,159,
    32,75,34,60,122,52,103,240,220,167,164,9,61,58,54,201,
    220,122,240,140,193,132,168,194,149,15,201,190,9,48,34,26,
    48,182,65,35,5,1,166,161,147,205,168,197,229,68,198,64,
    226,22,228,255,190,74,33,89,7,212,52,58,53,14,221,196,
    163,254,193,224,235,117,136,241,67,198,129,26,69,121,122,154,
    176,182,169,207,238,130,26,26,126,50,251,248,104,44,3,149,
    239,225,192,243,244,196,9,252,36,73,149,227,135,161,227,43,
    149,69,71,39,74,230,142,74,157,253,188,211,36,243,110,148,
    80,170,232,205,166,37,116,200,204,8,29,253,18,70,129,194,
    151,77,126,97,253,231,82,33,12,70,105,152,227,56,145,24,
    74,229,18,147,234,26,54,239,151,199,49,222,58,118,137,142,
    92,198,3,213,98,160,249,121,238,241,113,52,206,152,162,221,
    47,252,248,68,42,90,159,43,95,225,169,212,213,7,45,16,
    85,183,73,174,82,44,82,149,151,164,73,56,67,174,162,96,
    159,14,188,205,216,90,5,66,215,22,34,107,9,91,27,218,
    136,180,117,35,32,1,172,2,87,140,169,155,36,46,176,157,
    69,17,20,16,95,23,24,58,58,6,251,62,75,194,14,230,
    80,143,54,187,4,95,119,135,154,93,106,238,150,194,46,70,
    226,246,188,196,247,233,20,131,197,12,204,66,160,202,73,14,
    175,56,201,157,75,39,193,192,214,35,176,27,228,18,151,96,
    55,73,228,236,81,129,108,114,35,52,46,78,215,240,204,138,
    112,215,73,64,187,132,162,75,248,170,131,108,88,3,153,75,
    54,96,132,185,119,94,167,180,189,159,74,105,67,173,180,7,
    116,202,106,129,141,54,99,162,37,2,50,172,81,168,144,213,
    247,4,59,179,91,164,190,186,226,110,97,98,122,154,180,57,
    195,112,150,226,28,174,99,129,214,167,238,88,132,162,129,9,
    55,139,204,145,147,235,78,179,244,139,153,147,14,28,5,37,
    15,15,247,243,131,253,252,93,116,110,231,17,135,11,237,222,
    218,129,51,57,205,208,81,155,252,162,157,207,99,71,244,138,
    240,143,10,166,44,204,118,97,181,114,172,201,85,70,33,102,
    129,58,109,85,58,37,22,223,165,35,90,172,80,19,110,225,
    211,18,204,135,151,114,100,227,204,207,179,248,60,38,213,146,
    116,18,168,102,115,123,154,75,22,128,68,113,223,188,130,134,
    133,176,239,190,133,244,158,148,174,99,67,101,123,122,76,98,
    144,208,252,47,224,74,72,192,63,129,236,140,230,44,240,207,
    158,70,15,153,107,147,150,255,13,56,104,124,75,58,50,180,
    31,25,69,88,65,55,203,223,225,165,58,59,253,17,190,170,
    69,156,11,19,4,101,18,179,168,117,234,153,196,170,60,143,
    1,242,189,178,133,117,213,69,201,36,35,63,167,101,218,25,
    205,202,25,47,131,87,85,167,96,132,89,12,118,150,53,113,
    143,248,248,232,18,57,20,166,119,196,166,81,195,195,47,168,
    121,187,130,130,40,199,126,116,150,246,230,227,106,45,147,120,
    58,150,125,72,231,90,204,233,154,205,249,77,111,175,192,221,
    40,193,125,191,2,183,228,208,250,146,171,92,106,13,178,235,
    133,33,240,234,129,165,2,85,253,22,200,6,244,109,114,3,
    46,228,68,225,37,162,12,66,20,188,174,196,109,214,194,161,
    214,79,101,90,109,53,106,190,88,160,211,147,225,30,198,254,
    228,40,244,31,61,167,3,232,148,160,244,27,163,100,121,189,
    206,50,97,94,188,142,107,126,253,101,201,250,139,5,58,252,
    175,200,91,74,150,25,222,97,26,176,151,127,54,146,206,68,
    78,142,240,168,81,52,117,6,177,63,100,43,152,133,72,31,
    151,34,41,54,227,124,46,204,41,148,28,166,78,144,38,24,
    117,79,2,228,208,9,37,150,244,50,116,222,118,56,100,59,
    81,238,248,71,56,235,7,74,99,248,170,243,113,41,229,103,
    195,156,81,117,124,74,221,5,91,209,195,11,90,132,165,97,
    191,84,137,190,60,84,241,151,171,65,237,16,152,178,176,84,
    87,51,29,122,126,75,205,207,169,217,135,197,135,233,46,210,
    123,70,132,73,49,54,70,135,166,40,203,102,92,241,9,173,
    206,95,245,191,163,239,227,127,250,210,95,120,161,77,43,229,
    18,221,7,169,109,82,152,198,107,125,241,9,97,133,7,87,
    233,190,142,215,94,26,185,70,254,186,244,67,253,149,145,191,
    96,204,127,254,163,186,169,123,255,39,228,216,253,53,20,137,
    248,117,46,42,234,226,180,181,139,142,69,89,187,214,101,225,
    123,238,230,28,114,188,32,147,190,146,218,22,219,11,149,140,
    61,91,31,119,84,89,164,100,191,170,215,223,169,68,184,224,
    138,99,118,163,86,85,178,129,196,83,44,15,176,242,60,99,
    41,61,67,23,159,151,40,179,42,97,201,186,137,60,245,234,
    2,235,202,146,88,241,167,83,153,132,151,85,35,207,44,208,
    176,20,54,66,184,76,245,88,34,222,192,231,85,247,177,244,
    194,82,30,54,77,163,114,152,197,26,137,225,23,149,230,233,
    172,65,61,34,186,100,28,29,3,171,240,231,254,190,82,247,
    246,60,182,94,68,153,242,18,169,114,186,116,124,215,52,22,
    28,92,223,87,35,172,44,6,107,40,99,169,228,21,19,178,
    93,139,107,86,40,49,167,164,51,188,17,112,173,141,239,177,
    231,45,58,36,255,142,142,34,194,148,33,40,36,219,24,148,
    183,68,211,106,10,206,104,115,31,253,52,39,84,94,233,154,
    114,150,187,236,219,107,149,230,248,251,84,153,99,216,3,72,
    27,135,254,68,127,132,224,171,182,251,51,106,222,40,149,207,
    16,214,87,11,174,228,245,253,8,209,206,233,150,179,171,123,
    64,227,84,208,78,30,28,148,194,28,104,97,30,251,121,20,
    184,41,214,201,25,127,36,155,60,224,250,239,213,133,31,196,
    105,112,44,67,253,121,230,53,196,120,205,147,116,226,227,248,
    206,183,174,232,69,147,130,194,198,220,124,152,209,174,173,185,
    81,180,85,132,166,250,82,127,209,41,135,121,243,171,252,211,
    7,189,218,59,103,204,90,160,99,160,100,114,24,229,180,120,
    227,234,226,34,40,144,69,213,157,121,128,214,55,46,24,83,
    186,174,212,247,217,71,36,80,254,24,27,250,102,211,92,107,
    10,219,160,111,129,166,104,137,182,176,196,106,187,105,54,237,
    102,195,68,220,209,200,166,104,153,205,214,170,184,252,223,67,
    36,182,140,189,149,166,248,63,78,47,79,246,
};

EmbeddedPython embedded_m5_internal_param_Switch(
    "m5/internal/param_Switch.py",
    "/users/alian/simulators/pdgem5/build/ARM/python/m5/internal/param_Switch.py",
    "m5.internal.param_Switch",
    data_m5_internal_param_Switch,
    2124,
    6196);

} // anonymous namespace