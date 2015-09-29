#include "sim/init.hh"

extern "C" {
    void init_param_NoMaliGpu();
}

EmbeddedSwig embed_swig_param_NoMaliGpu(init_param_NoMaliGpu);
