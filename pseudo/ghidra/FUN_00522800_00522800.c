// FUN_00522800  00522800

void __thiscall FUN_00522800(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x80 + param_2 * 4) != 0) {
    (**(code **)(**(int **)(param_1 + 0x80 + param_2 * 4) + 0xb8))(param_3,param_4);
  }
  return;
}

