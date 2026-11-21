// FUN_00567cb0  00567cb0

bool FUN_00567cb0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 1;
    param_1[1] = 1;
    param_1[2] = 1;
    param_1[3] = 1;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1 != (undefined4 *)0x0;
}

