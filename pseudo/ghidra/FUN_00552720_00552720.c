// FUN_00552720  00552720

undefined4 * __fastcall FUN_00552720(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = VideoPokerDisplay::vftable;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
    param_1[local_8 + 6] = 0;
    param_1[local_8 + 0x13] = 0;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x24] = 0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x1e] = 0;
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}

