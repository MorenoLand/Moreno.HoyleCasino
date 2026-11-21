// FUN_0065a630  0065a630

void FUN_0065a630(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac6d9;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_016306ac == (int *)0x0) {
    pvVar2 = operator_new(0x1c8);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_0065d520(param_1);
    }
    DAT_016306ac = local_20;
  }
  local_8 = 0xffffffff;
  (**(code **)(*DAT_016306ac + 0x3c))(uVar1);
  FUN_005f85d0();
  ExceptionList = local_10;
  return;
}

