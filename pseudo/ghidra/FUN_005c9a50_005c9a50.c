// FUN_005c9a50  005c9a50

undefined4 * __fastcall FUN_005c9a50(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = BettingControls::vftable;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    param_1[local_8 + 5] = 0;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}

