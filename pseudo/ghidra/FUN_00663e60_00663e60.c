// FUN_00663e60  00663e60

undefined4 * __thiscall FUN_00663e60(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acb8a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = FacialFeature::vftable;
  param_1[0x61] = param_2;
  FUN_005eb700(1);
  ExceptionList = local_10;
  return param_1;
}

