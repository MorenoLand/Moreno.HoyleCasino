// FUN_0066f8b0  0066f8b0

undefined4 * __thiscall FUN_0066f8b0(undefined4 *param_1,undefined4 param_2)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = Rewards::vftable;
  for (local_8 = 0; local_8 < 700; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  param_1[0x2bd] = 0;
  param_1[0x2be] = 0;
  param_1[0x2c0] = 0xffffffff;
  param_1[0x2bf] = param_2;
  return param_1;
}

