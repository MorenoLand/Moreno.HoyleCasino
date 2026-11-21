// FUN_00579860  00579860

bool FUN_00579860(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1 != (undefined4 *)0x0;
}

