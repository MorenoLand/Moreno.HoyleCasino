// FUN_00597ac0  00597ac0

undefined4 * __fastcall FUN_00597ac0(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = FourCardPokerState::vftable;
  param_1[1] = 0;
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    param_1[local_8 + 2] = 0;
  }
  *(undefined1 *)(param_1 + 0x4b) = 0;
  return param_1;
}

