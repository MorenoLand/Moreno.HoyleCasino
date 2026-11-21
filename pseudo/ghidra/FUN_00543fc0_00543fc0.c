// FUN_00543fc0  00543fc0

void __fastcall FUN_00543fc0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      if (*(int *)(param_1 + 0x44 + local_8 * 0x18 + local_c * 4) != 0) {
        (**(code **)(**(int **)(param_1 + 0x44 + local_8 * 0x18 + local_c * 4) + 0x70))();
      }
    }
  }
  return;
}

