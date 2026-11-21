// FUN_00527360  00527360

bool FUN_00527360(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 1;
    param_1[1] = 1;
  }
  return param_1 != (undefined1 *)0x0;
}

