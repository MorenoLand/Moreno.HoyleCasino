// FUN_0059b4d0  0059b4d0

undefined4 * __fastcall FUN_0059b4d0(undefined4 *param_1)

{
  int local_c;
  int local_8;
  
  FUN_005e9e20();
  *param_1 = BigRaiseDisplay::vftable;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
    param_1[local_8 + 0x21] = 0;
  }
  for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
    param_1[local_c + 7] = 0;
    param_1[local_c + 0x15] = 0;
  }
  param_1[0x13] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x14] = 0;
  return param_1;
}

