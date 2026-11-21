// FUN_0064f1b0  0064f1b0

undefined4 FUN_0064f1b0(void)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac119;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_016306cc == 0) {
    pvVar2 = operator_new(0x1f8);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00672a50();
    }
    local_8 = 0xffffffff;
    DAT_016306cc = local_20;
    uVar3 = FUN_005f3bf0();
    FUN_00672b20(uVar3);
  }
  FUN_005f85d0(uVar1);
  ExceptionList = local_10;
  return 1;
}

