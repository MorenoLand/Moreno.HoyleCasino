// FUN_00563ad0  00563ad0

void __fastcall FUN_00563ad0(int param_1)

{
  undefined4 local_8;
  
  (**(code **)(**(int **)(param_1 + 4) + 0x70))();
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x70))();
  }
  FUN_00566a20();
  return;
}

