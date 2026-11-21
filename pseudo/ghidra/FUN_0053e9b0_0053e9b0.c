// FUN_0053e9b0  0053e9b0

undefined4 * __fastcall FUN_0053e9b0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4d08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = ThreeCardPokerRoom::vftable;
  FUN_005f1ad0(0x310e98);
  DAT_007933e8 = param_1;
  DAT_007933ec = 0;
  DAT_007933f0 = 0;
  DAT_007933f4 = 0;
  DAT_007933f8 = 0;
  ExceptionList = local_10;
  return param_1;
}

