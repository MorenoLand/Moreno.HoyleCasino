// FUN_004339f0  004339f0

bool FUN_004339f0(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 1;
    param_1[1] = 1;
    param_1[2] = 1;
    param_1[3] = 1;
    param_1[4] = 0;
    param_1[5] = 1;
    param_1[6] = 0;
  }
  return param_1 != (undefined1 *)0x0;
}

