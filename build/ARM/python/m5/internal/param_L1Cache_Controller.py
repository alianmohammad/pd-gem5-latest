# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_L1Cache_Controller', [dirname(__file__)])
        except ImportError:
            import _param_L1Cache_Controller
            return _param_L1Cache_Controller
        if fp is not None:
            try:
                _mod = imp.load_module('_param_L1Cache_Controller', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_L1Cache_Controller = swig_import_helper()
    del swig_import_helper
else:
    import _param_L1Cache_Controller
del version_info
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError(name)

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0


def _swig_setattr_nondynamic_method(set):
    def set_attr(self,name,value):
        if (name == "thisown"): return self.this.own(value)
        if hasattr(self,name) or (name == "this"):
            set(self,name,value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


import m5.internal.param_RubyCache
import m5.internal.param_ReplacementPolicy
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
import m5.internal.param_RubySystem
import m5.internal.param_SimpleMemory
import m5.internal.param_AbstractMemory
import m5.internal.param_MemObject
import m5.internal.param_ClockedObject
import m5.internal.param_ClockDomain
import m5.internal.param_RubySequencer
import m5.internal.param_RubyPort
import m5.internal.param_System
import m5.internal.enum_MemoryMode
import m5.internal.AddrRange_vector
import m5.internal.AbstractMemory_vector
import m5.internal.param_RubyController
class L1Cache_Controller(m5.internal.param_RubyController.AbstractController):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
L1Cache_Controller_swigregister = _param_L1Cache_Controller.L1Cache_Controller_swigregister
L1Cache_Controller_swigregister(L1Cache_Controller)

class L1Cache_ControllerParams(m5.internal.param_RubyController.RubyControllerParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_L1Cache_Controller.L1Cache_ControllerParams_create(self)
    cacheMemory = _swig_property(_param_L1Cache_Controller.L1Cache_ControllerParams_cacheMemory_get, _param_L1Cache_Controller.L1Cache_ControllerParams_cacheMemory_set)
    cache_response_latency = _swig_property(_param_L1Cache_Controller.L1Cache_ControllerParams_cache_response_latency_get, _param_L1Cache_Controller.L1Cache_ControllerParams_cache_response_latency_set)
    issue_latency = _swig_property(_param_L1Cache_Controller.L1Cache_ControllerParams_issue_latency_get, _param_L1Cache_Controller.L1Cache_ControllerParams_issue_latency_set)
    send_evictions = _swig_property(_param_L1Cache_Controller.L1Cache_ControllerParams_send_evictions_get, _param_L1Cache_Controller.L1Cache_ControllerParams_send_evictions_set)
    sequencer = _swig_property(_param_L1Cache_Controller.L1Cache_ControllerParams_sequencer_get, _param_L1Cache_Controller.L1Cache_ControllerParams_sequencer_set)
    port_responseFromCache_connection_count = _swig_property(_param_L1Cache_Controller.L1Cache_ControllerParams_port_responseFromCache_connection_count_get, _param_L1Cache_Controller.L1Cache_ControllerParams_port_responseFromCache_connection_count_set)
    port_requestFromCache_connection_count = _swig_property(_param_L1Cache_Controller.L1Cache_ControllerParams_port_requestFromCache_connection_count_get, _param_L1Cache_Controller.L1Cache_ControllerParams_port_requestFromCache_connection_count_set)
    port_forwardToCache_connection_count = _swig_property(_param_L1Cache_Controller.L1Cache_ControllerParams_port_forwardToCache_connection_count_get, _param_L1Cache_Controller.L1Cache_ControllerParams_port_forwardToCache_connection_count_set)
    port_responseToCache_connection_count = _swig_property(_param_L1Cache_Controller.L1Cache_ControllerParams_port_responseToCache_connection_count_get, _param_L1Cache_Controller.L1Cache_ControllerParams_port_responseToCache_connection_count_set)
    def __init__(self): 
        this = _param_L1Cache_Controller.new_L1Cache_ControllerParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_L1Cache_Controller.delete_L1Cache_ControllerParams
    __del__ = lambda self : None;
L1Cache_ControllerParams_swigregister = _param_L1Cache_Controller.L1Cache_ControllerParams_swigregister
L1Cache_ControllerParams_swigregister(L1Cache_ControllerParams)


