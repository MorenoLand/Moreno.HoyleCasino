// scheduler_resource_allocation_error  00600bf0

/* Library Function - Single Match
    public: __thiscall
   Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(char const
   *,long)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

scheduler_resource_allocation_error * __thiscall
Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error
          (scheduler_resource_allocation_error *this,char *param_1,long param_2)

{
  FUN_00600a70(param_2);
  *(undefined ***)this = sciCycleForwardCount::vftable;
  *(char **)(this + 0x1c) = param_1;
  return this;
}

