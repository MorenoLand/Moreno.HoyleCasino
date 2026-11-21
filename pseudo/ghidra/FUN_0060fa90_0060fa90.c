// FUN_0060fa90  0060fa90

void __fastcall FUN_0060fa90(int param_1)

{
  undefined2 local_8;
  
  FUN_005eb570();
  for (local_8 = 0; local_8 < *(short *)(param_1 + 0x184); local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(param_1 + 0x18c) + local_8 * 4) != 0) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18c) + local_8 * 4) + 0x74))();
    }
  }
  return;
}

