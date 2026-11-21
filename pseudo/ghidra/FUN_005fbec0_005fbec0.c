// FUN_005fbec0  005fbec0

undefined4 * __thiscall FUN_005fbec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa54c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f7670(0,*(undefined4 *)(DAT_015e55e8 + 0x14),param_2,param_3);
  local_8 = 0;
  *param_1 = sciPrintPlane::vftable;
  local_24 = operator_new(0x8c);
  local_8._0_1_ = 1;
  if (local_24 == (undefined4 *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    FUN_006131b0(uVar1);
    local_8._0_1_ = 2;
    *local_24 = PrintCanvas::vftable;
    FUN_00613360(param_2,param_3);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x6a] = local_24;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  FUN_005f8a80(0xffffff);
  FUN_005f85d0();
  ExceptionList = local_10;
  return param_1;
}

