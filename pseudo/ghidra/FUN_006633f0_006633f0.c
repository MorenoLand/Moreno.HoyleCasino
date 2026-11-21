// FUN_006633f0  006633f0

void __fastcall FUN_006633f0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006acac8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciMotionHermite::vftable;
  local_8 = 0;
  if (param_1[0xb] != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  param_1[0xb] = 0;
  local_8 = 0xffffffff;
  FUN_00606ee0(uVar1);
  ExceptionList = local_10;
  return;
}

