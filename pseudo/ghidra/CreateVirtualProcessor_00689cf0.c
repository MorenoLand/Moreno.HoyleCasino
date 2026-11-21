// CreateVirtualProcessor  00689cf0

/* Library Function - Multiple Matches With Same Base Name
    public: virtual class Concurrency::details::VirtualProcessor * __thiscall
   Concurrency::details::ThreadScheduler::CreateVirtualProcessor(class
   Concurrency::details::SchedulingNode *,struct Concurrency::IVirtualProcessorRoot *)
    public: virtual class Concurrency::details::VirtualProcessor * __thiscall
   Concurrency::details::UMSThreadScheduler::CreateVirtualProcessor(class
   Concurrency::details::SchedulingNode *,struct Concurrency::IVirtualProcessorRoot *)
   
   Library: Visual Studio 2010 Debug */

undefined4 CreateVirtualProcessor(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006adede;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x21c);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00689f80(param_1,param_2);
  }
  ExceptionList = local_10;
  return local_20;
}

