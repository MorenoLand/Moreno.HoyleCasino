// FUN_0043f270  0043f270

undefined4 * __fastcall FUN_0043f270(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = HorseRacingDisplay::vftable;
  param_1[6] = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
    param_1[local_8 + 8] = 0;
    param_1[local_8 + 0x1c] = 0;
    param_1[local_8 + 0x21] = 0;
    param_1[local_8 + 0x32] = 0;
  }
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    param_1[local_8 + 0xd] = 0;
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 0x2d] = 0;
    param_1[local_8 + 0x37] = 0;
    param_1[local_8 + 0x3c] = 0;
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x41] = 0;
  }
  param_1[0x44] = 0;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    param_1[local_8 + 0x45] = 0;
  }
  return param_1;
}

