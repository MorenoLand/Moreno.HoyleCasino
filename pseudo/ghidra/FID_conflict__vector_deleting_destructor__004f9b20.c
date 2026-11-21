// FID_conflict:`vector_deleting_destructor'  004f9b20

/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall std::__non_rtti_object::`vector deleting destructor'(unsigned
   int)
    public: virtual void * __thiscall std::bad_cast::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::bad_typeid::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall exception::`vector deleting destructor'(unsigned int)
     7 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall FID_conflict__vector_deleting_destructor_(void *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    FUN_004a20f0();
    if ((param_2 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_(param_1,4,*(int *)((int)param_1 + -4),FUN_004a20f0);
    if ((param_2 & 1) != 0) {
      operator_delete((void *)((int)param_1 + -4));
    }
    param_1 = (void *)((int)param_1 + -4);
  }
  return param_1;
}

