// FUN_004611c0  004611c0

void __thiscall FUN_004611c0(int param_1,int param_2,short param_3)

{
  if (*(short *)(param_1 + 0xa2 + param_2 * 2) == param_3) {
    *(undefined2 *)(param_1 + 0xa2 + param_2 * 2) = 0;
  }
  else if (*(short *)(param_1 + 0xac + param_2 * 2) == param_3) {
    *(undefined2 *)(param_1 + 0xac + param_2 * 2) = 0;
  }
  return;
}

