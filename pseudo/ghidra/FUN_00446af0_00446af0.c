// FUN_00446af0  00446af0

undefined4 * __fastcall FUN_00446af0(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = LetItRideDisplay::vftable;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
    param_1[local_8 + 0x15] = 0;
  }
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    param_1[local_8 + 5] = 0;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    param_1[local_8 + 0x11] = 0;
  }
  param_1[0x13] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x14] = 0;
  return param_1;
}

