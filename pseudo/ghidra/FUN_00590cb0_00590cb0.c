// FUN_00590cb0  00590cb0

undefined4 * __fastcall FUN_00590cb0(undefined4 *param_1)

{
  int local_c;
  int local_8;
  
  FUN_005e9e20();
  *param_1 = FourCardPokerDisplay::vftable;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
    param_1[local_8 + 0x20] = 0;
  }
  for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
    param_1[local_c + 6] = 0;
    param_1[local_c + 0x14] = 0;
  }
  param_1[0x12] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x13] = 0;
  return param_1;
}

