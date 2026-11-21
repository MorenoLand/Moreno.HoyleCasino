// scheduler_resource_allocation_error  0042d860

/* Library Function - Single Match
    public: __thiscall
   Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(char const
   *,long)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

scheduler_resource_allocation_error * __thiscall
Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error
          (scheduler_resource_allocation_error *this,char *param_1,long param_2)

{
  FUN_006010a0(param_2);
  *(undefined ***)this = CrapsRollingDiceCycle::vftable;
  *(char **)(this + 0x20) = param_1;
  return this;
}

