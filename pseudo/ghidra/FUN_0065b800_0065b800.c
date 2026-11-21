// FUN_0065b800  0065b800

void __fastcall FUN_0065b800(int param_1)

{
  undefined4 local_8;
  
  FUN_00602550();
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x218 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x218 + local_8 * 4) + 0x70))();
    }
    if (*(int *)(param_1 + 0x224 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x224 + local_8 * 4) + 0x70))();
    }
  }
  return;
}

