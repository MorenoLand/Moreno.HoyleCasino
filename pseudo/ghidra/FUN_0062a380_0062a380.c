// FUN_0062a380  0062a380

void __thiscall FUN_0062a380(int param_1,int param_2)

{
  FUN_005f5300(param_2);
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x6c))(param_2);
  }
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))(param_2 + 1);
  (**(code **)(**(int **)(param_1 + 0x50) + 0x6c))(param_2 + 1);
  if (*(int *)(param_1 + 0x54) != 0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x6c))(param_2 + 1);
  }
  return;
}

