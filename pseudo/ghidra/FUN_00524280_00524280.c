// FUN_00524280  00524280

undefined4 * __thiscall
FUN_00524280(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_00606e60(param_2,param_3,param_4,0);
  *param_1 = sciMotionOrbital::vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0xb] = param_5;
  param_1[0xe] = 10;
  param_1[0xf] = 1.0 / (float)(int)param_1[0xe];
  param_1[0x10] = 0x3f800000;
  return param_1;
}

