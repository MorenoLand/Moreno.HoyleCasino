// FUN_00461270  00461270

void __thiscall FUN_00461270(int param_1,int param_2,undefined2 param_3)

{
  if (*(short *)(param_1 + 0xa2 + param_2 * 2) == 0) {
    *(undefined2 *)(param_1 + 0xa2 + param_2 * 2) = param_3;
  }
  else if (*(short *)(param_1 + 0xac + param_2 * 2) == 0) {
    *(undefined2 *)(param_1 + 0xac + param_2 * 2) = param_3;
  }
  return;
}

