// FUN_004646a0  004646a0

undefined2 * __fastcall FUN_004646a0(undefined2 *param_1)

{
  *param_1 = 0xffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  return param_1;
}

