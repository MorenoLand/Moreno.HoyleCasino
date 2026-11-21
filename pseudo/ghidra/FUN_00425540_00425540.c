// FUN_00425540  00425540

bool FUN_00425540(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 1;
    param_1[1] = 1;
  }
  return param_1 != (undefined1 *)0x0;
}

