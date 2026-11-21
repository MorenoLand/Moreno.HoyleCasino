// FUN_00578210  00578210

undefined4 * __fastcall FUN_00578210(undefined4 *param_1)

{
  short local_8;
  
  FUN_005e9e20();
  *param_1 = SultanDebug::vftable;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}

