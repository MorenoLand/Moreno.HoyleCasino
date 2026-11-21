// FUN_00595cb0  00595cb0

undefined4 * __fastcall FUN_00595cb0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a72e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = FourCardPokerRoom::vftable;
  FUN_005f1ad0(0xfde9);
  DAT_00793598 = 0;
  DAT_0079359c = 0;
  DAT_007935a0 = 0;
  DAT_007935a8 = 0;
  DAT_007935a4 = param_1;
  param_1[0x20] = 0;
  ExceptionList = local_10;
  return param_1;
}

