// FUN_00419370  00419370

void __thiscall FUN_00419370(int param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  if (param_2 == 4) {
    if (param_4 < 0xf) {
      *(undefined2 *)(param_1 + 0x498 + param_4 * 2) = param_5;
    }
  }
  else {
    *(undefined2 *)(param_1 + 4 + param_2 * 0x118 + param_3 * 0x2c + param_4 * 2) = param_5;
  }
  return;
}

