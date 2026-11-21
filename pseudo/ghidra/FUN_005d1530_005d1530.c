// FUN_005d1530  005d1530

undefined4 * __fastcall FUN_005d1530(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8de8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CasinoNavigationRoom::vftable;
  param_1[0x22] = 0;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  FUN_005d16b0(8);
  FUN_005f38b0(0);
  DAT_007947dc = param_1;
  ExceptionList = local_10;
  return param_1;
}

