// FUN_005482b0  005482b0

bool FUN_005482b0(undefined4 *param_1)

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

