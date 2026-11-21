// FUN_0041e570  0041e570

undefined4 * __fastcall FUN_0041e570(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = CaribbeanStudDisplay::vftable;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
    param_1[local_8 + 0x19] = 0;
  }
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    param_1[local_8 + 6] = 0;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 0x11] = 0;
    param_1[local_8 + 0x15] = 0;
  }
  param_1[0xe] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}

