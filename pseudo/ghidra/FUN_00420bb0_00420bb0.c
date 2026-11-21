// FUN_00420bb0  00420bb0

undefined4 * __fastcall FUN_00420bb0(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = CaribbeanStudJackpotDisplay::vftable;
  param_1[1] = 0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 2] = 0;
  }
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    param_1[local_8 + 5] = 0;
  }
  param_1[0x11] = 0;
  return param_1;
}

