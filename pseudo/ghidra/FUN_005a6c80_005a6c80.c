// FUN_005a6c80  005a6c80

undefined4 * __fastcall FUN_005a6c80(undefined4 *param_1)

{
  int local_c;
  int local_8;
  
  FUN_005e9e20();
  *param_1 = RoyalMatchDisplay::vftable;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    param_1[local_c + 6] = 0;
    param_1[local_c + 0x12] = 0;
    param_1[local_c + 0x16] = 0;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}

