// FUN_00626650  00626650

void __thiscall FUN_00626650(int param_1,int param_2)

{
  FUN_005f5300(param_2);
  if (*(int *)(param_1 + 0x54) != 0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x6c))(param_2 + 1);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 0x6c))(param_2);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x6c))(param_2 + 2);
  }
  return;
}

