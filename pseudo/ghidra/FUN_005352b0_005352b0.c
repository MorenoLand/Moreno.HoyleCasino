// FUN_005352b0  005352b0

bool FUN_005352b0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1 != (undefined4 *)0x0;
}

