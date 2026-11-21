// FUN_0056f870  0056f870

void __fastcall FUN_0056f870(int param_1)

{
  undefined2 local_8;
  
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0x70))();
    *(undefined4 *)(param_1 + 0xbc + local_8 * 4) = 0xffffffff;
  }
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x70))();
  return;
}

