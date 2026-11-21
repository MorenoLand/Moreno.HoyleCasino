// FUN_0065a540  0065a540

void FUN_0065a540(void)

{
  uint uVar1;
  void *pvVar2;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac6b3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_016306a8 == (int *)0x0) {
    pvVar2 = operator_new(0x1c8);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_0065d1e0();
    }
    DAT_016306a8 = local_20;
  }
  local_8 = 0xffffffff;
  (**(code **)(*DAT_016306a8 + 0x3c))(uVar1);
  if (DAT_016306a8 != (int *)0x0) {
    FUN_0065c4d0();
  }
  ExceptionList = local_10;
  return;
}

