// FUN_00597760  00597760

bool FUN_00597760(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 1;
    param_1[1] = 1;
  }
  return param_1 != (undefined1 *)0x0;
}

