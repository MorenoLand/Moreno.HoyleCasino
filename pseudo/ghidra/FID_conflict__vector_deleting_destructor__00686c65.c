// FID_conflict:`vector_deleting_destructor'  00686c65

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall exception::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::exception::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall logic_error::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall type_info::`vector deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

type_info * __thiscall FID_conflict__vector_deleting_destructor_(type_info *param_1,byte param_2)

{
  type_info *ptVar1;
  
  if ((param_2 & 2) == 0) {
    type_info::_type_info_dtor_internal_method(param_1);
    ptVar1 = param_1;
    if ((param_2 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  else {
    ptVar1 = param_1 + -4;
    _eh_vector_destructor_iterator_
              (param_1,0xc,*(int *)ptVar1,type_info::_type_info_dtor_internal_method);
    if ((param_2 & 1) != 0) {
      operator_delete(ptVar1);
    }
  }
  return ptVar1;
}

