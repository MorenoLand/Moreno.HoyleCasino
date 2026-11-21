// FUN_005a1950  005a1950

bool FUN_005a1950(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 1;
    param_1[1] = 1;
    param_1[2] = 1;
  }
  return param_1 != (undefined1 *)0x0;
}

