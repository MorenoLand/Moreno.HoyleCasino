// FUN_005dc520  005dc520

void FUN_005dc520(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9465;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_007947d8 == 0) {
    pvVar2 = operator_new(0x1f0);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005d0500();
    }
    local_8 = 0xffffffff;
    DAT_007947d8 = local_20;
    FUN_005d05a0(param_1);
    FUN_005f7340(0,0);
  }
  FUN_005d06f0(uVar1);
  ExceptionList = local_10;
  return;
}

