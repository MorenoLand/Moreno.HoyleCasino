// FUN_0066f060  0066f060

void __fastcall FUN_0066f060(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x178 + local_8 * 4) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x1a0 + local_8 * 4) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x1c8 + local_8 * 4) + 0x70))();
  }
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0x70))();
  (**(code **)(**(int **)(param_1 + 500) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x200) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x204) + 0x70))();
  FUN_00646c20(1);
  FUN_005eb5a0();
  return;
}

