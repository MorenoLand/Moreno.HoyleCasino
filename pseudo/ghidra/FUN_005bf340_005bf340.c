// FUN_005bf340  005bf340

undefined4 * __fastcall FUN_005bf340(undefined4 *param_1)

{
  undefined1 local_19;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a82ce;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005bf210(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = OneOfNine::vftable;
  local_18 = &local_19;
  FUN_005c0870(0);
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = local_10;
  return param_1;
}

