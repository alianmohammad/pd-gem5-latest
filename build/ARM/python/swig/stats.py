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
            fp, pathname, description = imp.find_module('_stats', [dirname(__file__)])
        except ImportError:
            import _stats
            return _stats
        if fp is not None:
            try:
                _mod = imp.load_module('_stats', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _stats = swig_import_helper()
    del swig_import_helper
else:
    import _stats
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


class SwigPyIterator(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _stats.delete_SwigPyIterator
    __del__ = lambda self : None;
    def value(self): return _stats.SwigPyIterator_value(self)
    def incr(self, n=1): return _stats.SwigPyIterator_incr(self, n)
    def decr(self, n=1): return _stats.SwigPyIterator_decr(self, n)
    def distance(self, *args): return _stats.SwigPyIterator_distance(self, *args)
    def equal(self, *args): return _stats.SwigPyIterator_equal(self, *args)
    def copy(self): return _stats.SwigPyIterator_copy(self)
    def next(self): return _stats.SwigPyIterator_next(self)
    def __next__(self): return _stats.SwigPyIterator___next__(self)
    def previous(self): return _stats.SwigPyIterator_previous(self)
    def advance(self, *args): return _stats.SwigPyIterator_advance(self, *args)
    def __eq__(self, *args): return _stats.SwigPyIterator___eq__(self, *args)
    def __ne__(self, *args): return _stats.SwigPyIterator___ne__(self, *args)
    def __iadd__(self, *args): return _stats.SwigPyIterator___iadd__(self, *args)
    def __isub__(self, *args): return _stats.SwigPyIterator___isub__(self, *args)
    def __add__(self, *args): return _stats.SwigPyIterator___add__(self, *args)
    def __sub__(self, *args): return _stats.SwigPyIterator___sub__(self, *args)
    def __iter__(self): return self
SwigPyIterator_swigregister = _stats.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

class Info(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    name = _swig_property(_stats.Info_name_get, _stats.Info_name_set)
    separatorString = _swig_property(_stats.Info_separatorString_get, _stats.Info_separatorString_set)
    desc = _swig_property(_stats.Info_desc_get, _stats.Info_desc_set)
    precision = _swig_property(_stats.Info_precision_get, _stats.Info_precision_set)
    prereq = _swig_property(_stats.Info_prereq_get, _stats.Info_prereq_set)
    id_count = _swig_property(_stats.Info_id_count_get, _stats.Info_id_count_set)
    id = _swig_property(_stats.Info_id_get, _stats.Info_id_set)
    storageParams = _swig_property(_stats.Info_storageParams_get, _stats.Info_storageParams_set)
    __swig_destroy__ = _stats.delete_Info
    __del__ = lambda self : None;
    def setName(self, *args): return _stats.Info_setName(self, *args)
    def setSeparator(self, *args): return _stats.Info_setSeparator(self, *args)
    def check(self): return _stats.Info_check(self)
    def baseCheck(self): return _stats.Info_baseCheck(self)
    def enable(self): return _stats.Info_enable(self)
    def prepare(self): return _stats.Info_prepare(self)
    def reset(self): return _stats.Info_reset(self)
    def zero(self): return _stats.Info_zero(self)
    def visit(self, *args): return _stats.Info_visit(self, *args)
    less = staticmethod(_stats.Info_less)
    flags = _swig_property(_stats.Info_flags_get, _stats.Info_flags_set)
Info_swigregister = _stats.Info_swigregister
Info_swigregister(Info)
cvar = _stats.cvar
none = cvar.none
init = cvar.init
display = cvar.display
total = cvar.total
pdf = cvar.pdf
cdf = cvar.cdf
dist = cvar.dist
nozero = cvar.nozero
nonan = cvar.nonan
oneline = cvar.oneline
__reserved = cvar.__reserved

def Info_less(*args):
  return _stats.Info_less(*args)
Info_less = _stats.Info_less

class ScalarInfo(Info):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    def value(self): return _stats.ScalarInfo_value(self)
    def result(self): return _stats.ScalarInfo_result(self)
    def total(self): return _stats.ScalarInfo_total(self)
    __swig_destroy__ = _stats.delete_ScalarInfo
    __del__ = lambda self : None;
ScalarInfo_swigregister = _stats.ScalarInfo_swigregister
ScalarInfo_swigregister(ScalarInfo)

class VectorInfo(Info):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    subnames = _swig_property(_stats.VectorInfo_subnames_get, _stats.VectorInfo_subnames_set)
    subdescs = _swig_property(_stats.VectorInfo_subdescs_get, _stats.VectorInfo_subdescs_set)
    def enable(self): return _stats.VectorInfo_enable(self)
    def size(self): return _stats.VectorInfo_size(self)
    def value(self): return _stats.VectorInfo_value(self)
    def result(self): return _stats.VectorInfo_result(self)
    def total(self): return _stats.VectorInfo_total(self)
    __swig_destroy__ = _stats.delete_VectorInfo
    __del__ = lambda self : None;
VectorInfo_swigregister = _stats.VectorInfo_swigregister
VectorInfo_swigregister(VectorInfo)

Deviation = _stats.Deviation
Dist = _stats.Dist
Hist = _stats.Hist
class DistData(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    type = _swig_property(_stats.DistData_type_get, _stats.DistData_type_set)
    min = _swig_property(_stats.DistData_min_get, _stats.DistData_min_set)
    max = _swig_property(_stats.DistData_max_get, _stats.DistData_max_set)
    bucket_size = _swig_property(_stats.DistData_bucket_size_get, _stats.DistData_bucket_size_set)
    min_val = _swig_property(_stats.DistData_min_val_get, _stats.DistData_min_val_set)
    max_val = _swig_property(_stats.DistData_max_val_get, _stats.DistData_max_val_set)
    underflow = _swig_property(_stats.DistData_underflow_get, _stats.DistData_underflow_set)
    overflow = _swig_property(_stats.DistData_overflow_get, _stats.DistData_overflow_set)
    cvec = _swig_property(_stats.DistData_cvec_get, _stats.DistData_cvec_set)
    sum = _swig_property(_stats.DistData_sum_get, _stats.DistData_sum_set)
    squares = _swig_property(_stats.DistData_squares_get, _stats.DistData_squares_set)
    logs = _swig_property(_stats.DistData_logs_get, _stats.DistData_logs_set)
    samples = _swig_property(_stats.DistData_samples_get, _stats.DistData_samples_set)
    def __init__(self): 
        this = _stats.new_DistData()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _stats.delete_DistData
    __del__ = lambda self : None;
DistData_swigregister = _stats.DistData_swigregister
DistData_swigregister(DistData)

class DistInfo(Info):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    data = _swig_property(_stats.DistInfo_data_get, _stats.DistInfo_data_set)
    __swig_destroy__ = _stats.delete_DistInfo
    __del__ = lambda self : None;
DistInfo_swigregister = _stats.DistInfo_swigregister
DistInfo_swigregister(DistInfo)

class VectorDistInfo(Info):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    data = _swig_property(_stats.VectorDistInfo_data_get, _stats.VectorDistInfo_data_set)
    subnames = _swig_property(_stats.VectorDistInfo_subnames_get, _stats.VectorDistInfo_subnames_set)
    subdescs = _swig_property(_stats.VectorDistInfo_subdescs_get, _stats.VectorDistInfo_subdescs_set)
    def enable(self): return _stats.VectorDistInfo_enable(self)
    def size(self): return _stats.VectorDistInfo_size(self)
    __swig_destroy__ = _stats.delete_VectorDistInfo
    __del__ = lambda self : None;
VectorDistInfo_swigregister = _stats.VectorDistInfo_swigregister
VectorDistInfo_swigregister(VectorDistInfo)

class Vector2dInfo(Info):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    subnames = _swig_property(_stats.Vector2dInfo_subnames_get, _stats.Vector2dInfo_subnames_set)
    subdescs = _swig_property(_stats.Vector2dInfo_subdescs_get, _stats.Vector2dInfo_subdescs_set)
    y_subnames = _swig_property(_stats.Vector2dInfo_y_subnames_get, _stats.Vector2dInfo_y_subnames_set)
    x = _swig_property(_stats.Vector2dInfo_x_get, _stats.Vector2dInfo_x_set)
    y = _swig_property(_stats.Vector2dInfo_y_get, _stats.Vector2dInfo_y_set)
    cvec = _swig_property(_stats.Vector2dInfo_cvec_get, _stats.Vector2dInfo_cvec_set)
    def enable(self): return _stats.Vector2dInfo_enable(self)
    __swig_destroy__ = _stats.delete_Vector2dInfo
    __del__ = lambda self : None;
Vector2dInfo_swigregister = _stats.Vector2dInfo_swigregister
Vector2dInfo_swigregister(Vector2dInfo)

class FormulaInfo(VectorInfo):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    def str(self): return _stats.FormulaInfo_str(self)
    __swig_destroy__ = _stats.delete_FormulaInfo
    __del__ = lambda self : None;
FormulaInfo_swigregister = _stats.FormulaInfo_swigregister
FormulaInfo_swigregister(FormulaInfo)

class SparseHistData(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    cmap = _swig_property(_stats.SparseHistData_cmap_get, _stats.SparseHistData_cmap_set)
    samples = _swig_property(_stats.SparseHistData_samples_get, _stats.SparseHistData_samples_set)
    def __init__(self): 
        this = _stats.new_SparseHistData()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _stats.delete_SparseHistData
    __del__ = lambda self : None;
SparseHistData_swigregister = _stats.SparseHistData_swigregister
SparseHistData_swigregister(SparseHistData)

class SparseHistInfo(Info):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    data = _swig_property(_stats.SparseHistInfo_data_get, _stats.SparseHistInfo_data_set)
    __swig_destroy__ = _stats.delete_SparseHistInfo
    __del__ = lambda self : None;
SparseHistInfo_swigregister = _stats.SparseHistInfo_swigregister
SparseHistInfo_swigregister(SparseHistInfo)

class Output(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _stats.delete_Output
    __del__ = lambda self : None;
    def begin(self): return _stats.Output_begin(self)
    def end(self): return _stats.Output_end(self)
    def valid(self): return _stats.Output_valid(self)
    def visit(self, *args): return _stats.Output_visit(self, *args)
Output_swigregister = _stats.Output_swigregister
Output_swigregister(Output)

class list_info(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def iterator(self): return _stats.list_info_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _stats.list_info___nonzero__(self)
    def __bool__(self): return _stats.list_info___bool__(self)
    def __len__(self): return _stats.list_info___len__(self)
    def pop(self): return _stats.list_info_pop(self)
    def __getslice__(self, *args): return _stats.list_info___getslice__(self, *args)
    def __setslice__(self, *args): return _stats.list_info___setslice__(self, *args)
    def __delslice__(self, *args): return _stats.list_info___delslice__(self, *args)
    def __delitem__(self, *args): return _stats.list_info___delitem__(self, *args)
    def __getitem__(self, *args): return _stats.list_info___getitem__(self, *args)
    def __setitem__(self, *args): return _stats.list_info___setitem__(self, *args)
    def append(self, *args): return _stats.list_info_append(self, *args)
    def empty(self): return _stats.list_info_empty(self)
    def size(self): return _stats.list_info_size(self)
    def clear(self): return _stats.list_info_clear(self)
    def swap(self, *args): return _stats.list_info_swap(self, *args)
    def get_allocator(self): return _stats.list_info_get_allocator(self)
    def begin(self): return _stats.list_info_begin(self)
    def end(self): return _stats.list_info_end(self)
    def rbegin(self): return _stats.list_info_rbegin(self)
    def rend(self): return _stats.list_info_rend(self)
    def pop_back(self): return _stats.list_info_pop_back(self)
    def erase(self, *args): return _stats.list_info_erase(self, *args)
    def __init__(self, *args): 
        this = _stats.new_list_info(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _stats.list_info_push_back(self, *args)
    def front(self): return _stats.list_info_front(self)
    def back(self): return _stats.list_info_back(self)
    def assign(self, *args): return _stats.list_info_assign(self, *args)
    def resize(self, *args): return _stats.list_info_resize(self, *args)
    def insert(self, *args): return _stats.list_info_insert(self, *args)
    def pop_front(self): return _stats.list_info_pop_front(self)
    def push_front(self, *args): return _stats.list_info_push_front(self, *args)
    def remove(self, *args): return _stats.list_info_remove(self, *args)
    def unique(self): return _stats.list_info_unique(self)
    def reverse(self): return _stats.list_info_reverse(self)
    def sort(self): return _stats.list_info_sort(self)
    def merge(self, *args): return _stats.list_info_merge(self, *args)
    __swig_destroy__ = _stats.delete_list_info
    __del__ = lambda self : None;
list_info_swigregister = _stats.list_info_swigregister
list_info_swigregister(list_info)

class vector_double(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def iterator(self): return _stats.vector_double_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _stats.vector_double___nonzero__(self)
    def __bool__(self): return _stats.vector_double___bool__(self)
    def __len__(self): return _stats.vector_double___len__(self)
    def pop(self): return _stats.vector_double_pop(self)
    def __getslice__(self, *args): return _stats.vector_double___getslice__(self, *args)
    def __setslice__(self, *args): return _stats.vector_double___setslice__(self, *args)
    def __delslice__(self, *args): return _stats.vector_double___delslice__(self, *args)
    def __delitem__(self, *args): return _stats.vector_double___delitem__(self, *args)
    def __getitem__(self, *args): return _stats.vector_double___getitem__(self, *args)
    def __setitem__(self, *args): return _stats.vector_double___setitem__(self, *args)
    def append(self, *args): return _stats.vector_double_append(self, *args)
    def empty(self): return _stats.vector_double_empty(self)
    def size(self): return _stats.vector_double_size(self)
    def clear(self): return _stats.vector_double_clear(self)
    def swap(self, *args): return _stats.vector_double_swap(self, *args)
    def get_allocator(self): return _stats.vector_double_get_allocator(self)
    def begin(self): return _stats.vector_double_begin(self)
    def end(self): return _stats.vector_double_end(self)
    def rbegin(self): return _stats.vector_double_rbegin(self)
    def rend(self): return _stats.vector_double_rend(self)
    def pop_back(self): return _stats.vector_double_pop_back(self)
    def erase(self, *args): return _stats.vector_double_erase(self, *args)
    def __init__(self, *args): 
        this = _stats.new_vector_double(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _stats.vector_double_push_back(self, *args)
    def front(self): return _stats.vector_double_front(self)
    def back(self): return _stats.vector_double_back(self)
    def assign(self, *args): return _stats.vector_double_assign(self, *args)
    def resize(self, *args): return _stats.vector_double_resize(self, *args)
    def insert(self, *args): return _stats.vector_double_insert(self, *args)
    def reserve(self, *args): return _stats.vector_double_reserve(self, *args)
    def capacity(self): return _stats.vector_double_capacity(self)
    __swig_destroy__ = _stats.delete_vector_double
    __del__ = lambda self : None;
vector_double_swigregister = _stats.vector_double_swigregister
vector_double_swigregister(vector_double)

class vector_string(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def iterator(self): return _stats.vector_string_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _stats.vector_string___nonzero__(self)
    def __bool__(self): return _stats.vector_string___bool__(self)
    def __len__(self): return _stats.vector_string___len__(self)
    def pop(self): return _stats.vector_string_pop(self)
    def __getslice__(self, *args): return _stats.vector_string___getslice__(self, *args)
    def __setslice__(self, *args): return _stats.vector_string___setslice__(self, *args)
    def __delslice__(self, *args): return _stats.vector_string___delslice__(self, *args)
    def __delitem__(self, *args): return _stats.vector_string___delitem__(self, *args)
    def __getitem__(self, *args): return _stats.vector_string___getitem__(self, *args)
    def __setitem__(self, *args): return _stats.vector_string___setitem__(self, *args)
    def append(self, *args): return _stats.vector_string_append(self, *args)
    def empty(self): return _stats.vector_string_empty(self)
    def size(self): return _stats.vector_string_size(self)
    def clear(self): return _stats.vector_string_clear(self)
    def swap(self, *args): return _stats.vector_string_swap(self, *args)
    def get_allocator(self): return _stats.vector_string_get_allocator(self)
    def begin(self): return _stats.vector_string_begin(self)
    def end(self): return _stats.vector_string_end(self)
    def rbegin(self): return _stats.vector_string_rbegin(self)
    def rend(self): return _stats.vector_string_rend(self)
    def pop_back(self): return _stats.vector_string_pop_back(self)
    def erase(self, *args): return _stats.vector_string_erase(self, *args)
    def __init__(self, *args): 
        this = _stats.new_vector_string(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _stats.vector_string_push_back(self, *args)
    def front(self): return _stats.vector_string_front(self)
    def back(self): return _stats.vector_string_back(self)
    def assign(self, *args): return _stats.vector_string_assign(self, *args)
    def resize(self, *args): return _stats.vector_string_resize(self, *args)
    def insert(self, *args): return _stats.vector_string_insert(self, *args)
    def reserve(self, *args): return _stats.vector_string_reserve(self, *args)
    def capacity(self): return _stats.vector_string_capacity(self)
    __swig_destroy__ = _stats.delete_vector_string
    __del__ = lambda self : None;
vector_string_swigregister = _stats.vector_string_swigregister
vector_string_swigregister(vector_string)

class vector_DistData(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def iterator(self): return _stats.vector_DistData_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _stats.vector_DistData___nonzero__(self)
    def __bool__(self): return _stats.vector_DistData___bool__(self)
    def __len__(self): return _stats.vector_DistData___len__(self)
    def pop(self): return _stats.vector_DistData_pop(self)
    def __getslice__(self, *args): return _stats.vector_DistData___getslice__(self, *args)
    def __setslice__(self, *args): return _stats.vector_DistData___setslice__(self, *args)
    def __delslice__(self, *args): return _stats.vector_DistData___delslice__(self, *args)
    def __delitem__(self, *args): return _stats.vector_DistData___delitem__(self, *args)
    def __getitem__(self, *args): return _stats.vector_DistData___getitem__(self, *args)
    def __setitem__(self, *args): return _stats.vector_DistData___setitem__(self, *args)
    def append(self, *args): return _stats.vector_DistData_append(self, *args)
    def empty(self): return _stats.vector_DistData_empty(self)
    def size(self): return _stats.vector_DistData_size(self)
    def clear(self): return _stats.vector_DistData_clear(self)
    def swap(self, *args): return _stats.vector_DistData_swap(self, *args)
    def get_allocator(self): return _stats.vector_DistData_get_allocator(self)
    def begin(self): return _stats.vector_DistData_begin(self)
    def end(self): return _stats.vector_DistData_end(self)
    def rbegin(self): return _stats.vector_DistData_rbegin(self)
    def rend(self): return _stats.vector_DistData_rend(self)
    def pop_back(self): return _stats.vector_DistData_pop_back(self)
    def erase(self, *args): return _stats.vector_DistData_erase(self, *args)
    def __init__(self, *args): 
        this = _stats.new_vector_DistData(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _stats.vector_DistData_push_back(self, *args)
    def front(self): return _stats.vector_DistData_front(self)
    def back(self): return _stats.vector_DistData_back(self)
    def assign(self, *args): return _stats.vector_DistData_assign(self, *args)
    def resize(self, *args): return _stats.vector_DistData_resize(self, *args)
    def insert(self, *args): return _stats.vector_DistData_insert(self, *args)
    def reserve(self, *args): return _stats.vector_DistData_reserve(self, *args)
    def capacity(self): return _stats.vector_DistData_capacity(self)
    __swig_destroy__ = _stats.delete_vector_DistData
    __del__ = lambda self : None;
vector_DistData_swigregister = _stats.vector_DistData_swigregister
vector_DistData_swigregister(vector_DistData)


def dynamic_ScalarInfo(*args):
  return _stats.dynamic_ScalarInfo(*args)
dynamic_ScalarInfo = _stats.dynamic_ScalarInfo

def dynamic_VectorInfo(*args):
  return _stats.dynamic_VectorInfo(*args)
dynamic_VectorInfo = _stats.dynamic_VectorInfo

def dynamic_DistInfo(*args):
  return _stats.dynamic_DistInfo(*args)
dynamic_DistInfo = _stats.dynamic_DistInfo

def dynamic_VectorDistInfo(*args):
  return _stats.dynamic_VectorDistInfo(*args)
dynamic_VectorDistInfo = _stats.dynamic_VectorDistInfo

def dynamic_Vector2dInfo(*args):
  return _stats.dynamic_Vector2dInfo(*args)
dynamic_Vector2dInfo = _stats.dynamic_Vector2dInfo

def dynamic_FormulaInfo(*args):
  return _stats.dynamic_FormulaInfo(*args)
dynamic_FormulaInfo = _stats.dynamic_FormulaInfo

def dynamic_SparseHistInfo(*args):
  return _stats.dynamic_SparseHistInfo(*args)
dynamic_SparseHistInfo = _stats.dynamic_SparseHistInfo

def initSimStats():
  return _stats.initSimStats()
initSimStats = _stats.initSimStats

def initText(*args):
  return _stats.initText(*args)
initText = _stats.initText

def registerPythonStatsHandlers():
  return _stats.registerPythonStatsHandlers()
registerPythonStatsHandlers = _stats.registerPythonStatsHandlers

def schedStatEvent(*args):
  return _stats.schedStatEvent(*args)
schedStatEvent = _stats.schedStatEvent

def periodicStatDump(period=0):
  return _stats.periodicStatDump(period)
periodicStatDump = _stats.periodicStatDump

def updateEvents():
  return _stats.updateEvents()
updateEvents = _stats.updateEvents

def processResetQueue():
  return _stats.processResetQueue()
processResetQueue = _stats.processResetQueue

def processDumpQueue():
  return _stats.processDumpQueue()
processDumpQueue = _stats.processDumpQueue

def enable():
  return _stats.enable()
enable = _stats.enable

def enabled():
  return _stats.enabled()
enabled = _stats.enabled

def statsList():
  return _stats.statsList()
statsList = _stats.statsList


