// FUN_005dc0d0  005dc0d0

void FUN_005dc0d0(void)

{
  uint uVar1;
  void *pvVar2;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a93cd;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_007947c8 == (int *)0x0) {
    pvVar2 = operator_new(0x1c4);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_005cefb0();
    }
    local_8 = 0xffffffff;
    DAT_007947c8 = local_20;
    (**(code **)(*local_20 + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005cf3e0(uVar1);
  ExceptionList = local_10;
  return;
}

