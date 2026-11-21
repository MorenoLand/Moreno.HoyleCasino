// FUN_00402270  00402270

void __thiscall FUN_00402270(int param_1,int param_2,int param_3)

{
  if ((param_2 != 4) && (*(int *)(param_1 + 0x20 + param_3 * 4) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x20 + param_3 * 4) + 0xb8))(param_2,0);
  }
  return;
}

