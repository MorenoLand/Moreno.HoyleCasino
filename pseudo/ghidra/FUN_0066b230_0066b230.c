// FUN_0066b230  0066b230

undefined4 * __fastcall FUN_0066b230(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acd68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064cbe0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = IntroScreenRoom::vftable;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_005f1b10(0,0,0);
  FUN_00613f80();
  ExceptionList = local_10;
  return param_1;
}

