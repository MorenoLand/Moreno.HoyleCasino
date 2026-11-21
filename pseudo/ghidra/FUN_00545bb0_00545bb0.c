// FUN_00545bb0  00545bb0

void __fastcall FUN_00545bb0(int param_1)

{
  undefined4 local_8;
  
  (**(code **)(**(int **)(param_1 + 0xb8) + 0x70))();
  if (*(int *)(DAT_00793404 + 8) != 0) {
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0xb0))(0);
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      FUN_005f5d50(0);
      (**(code **)(**(int **)(param_1 + 0x10 + local_8 * 4) + 0xb0))(0);
    }
    (**(code **)(**(int **)(param_1 + 0x24) + 0xb0))(0);
    FUN_005f5d50(0);
  }
  return;
}

