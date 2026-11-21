// FUN_005b2ff0  005b2ff0

undefined4 * __fastcall FUN_005b2ff0(undefined4 *param_1)

{
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7e28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = RoyalMatchState::vftable;
  param_1[0x15f] = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    param_1[local_14 + 0x160] = 0;
    param_1[local_14 + 0x18d] = 0;
  }
  FUN_005b7310(0xffffffff,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

