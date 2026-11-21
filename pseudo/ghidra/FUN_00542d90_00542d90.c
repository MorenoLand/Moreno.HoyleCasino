// FUN_00542d90  00542d90

undefined4 * __fastcall FUN_00542d90(undefined4 *param_1)

{
  int local_c;
  int local_8;
  
  FUN_005e9e20();
  *param_1 = VideoBlackjackDisplay::vftable;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      param_1[local_8 * 6 + local_c + 0x11] = 0;
    }
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 4] = 0;
  }
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    param_1[local_8 + 0x23] = 0;
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0xe] = 0;
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return param_1;
}

