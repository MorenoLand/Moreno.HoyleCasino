// FUN_0051f260  0051f260

undefined4 * __fastcall FUN_0051f260(undefined4 *param_1)

{
  undefined4 uVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3dc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = PokerTournamentRoom::vftable;
  DAT_00793160 = param_1;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x20] = 0xffffffff;
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    param_1[local_18 + 0x25] = 0;
  }
  uVar1 = FUN_00520d60();
  FUN_005208b0(uVar1);
  FUN_0051f420(0);
  ExceptionList = local_10;
  return param_1;
}

