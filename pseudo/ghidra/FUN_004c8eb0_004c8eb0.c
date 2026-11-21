// FUN_004c8eb0  004c8eb0

void __fastcall FUN_004c8eb0(int param_1)

{
  undefined2 local_8;
  
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x48 + local_8 * 4) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x50 + local_8 * 4) + 0x70))();
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x58 + local_8 * 4) + 0x70))();
  }
  return;
}

