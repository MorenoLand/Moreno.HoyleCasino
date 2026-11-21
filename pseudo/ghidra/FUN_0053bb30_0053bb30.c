// FUN_0053bb30  0053bb30

undefined4 * __fastcall FUN_0053bb30(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = ThreeCardPokerPlayerDisplay::vftable;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 2] = 0;
  }
  return param_1;
}

