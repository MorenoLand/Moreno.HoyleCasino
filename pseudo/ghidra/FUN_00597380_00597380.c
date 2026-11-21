// FUN_00597380  00597380

bool FUN_00597380(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 4;
    param_1[1] = 1;
    param_1[2] = 4;
    param_1[3] = 1;
    param_1[4] = 4;
    param_1[5] = 0;
    param_1[6] = 3;
  }
  return param_1 != (undefined4 *)0x0;
}

