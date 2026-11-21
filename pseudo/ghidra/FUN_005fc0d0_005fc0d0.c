// FUN_005fc0d0  005fc0d0

undefined4 * __thiscall FUN_005fc0d0(undefined4 *param_1,undefined4 param_2)

{
  FUN_005e9e20();
  *param_1 = sciScript::vftable;
  param_1[4] = param_2;
  if (param_1[4] != 0) {
    *(undefined4 **)(param_1[4] + 8) = param_1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[6] = 0;
  param_1[1] = 0;
  return param_1;
}

