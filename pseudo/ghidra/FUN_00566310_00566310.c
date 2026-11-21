// FUN_00566310  00566310

void __fastcall FUN_00566310(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + local_8 * 4) + 0x70))();
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x24) + 0x70))();
  return;
}

