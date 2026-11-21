// FUN_00428c20  00428c20

undefined4 * __fastcall FUN_00428c20(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = CrapsDisplay::vftable;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    param_1[local_8 + 5] = 0;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    param_1[local_8 + 0x52] = 0;
    param_1[local_8 + 0x54] = 0;
  }
  param_1[0x51] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  return param_1;
}

