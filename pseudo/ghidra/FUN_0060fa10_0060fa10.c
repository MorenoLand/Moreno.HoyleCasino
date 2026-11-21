// FUN_0060fa10  0060fa10

void __fastcall FUN_0060fa10(int param_1)

{
  undefined2 local_8;
  
  FUN_005eb5a0();
  for (local_8 = 0; local_8 < *(short *)(param_1 + 0x184); local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(param_1 + 0x18c) + local_8 * 4) != 0) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18c) + local_8 * 4) + 0x70))();
    }
  }
  return;
}

