// FUN_00653190  00653190

void __fastcall FUN_00653190(int param_1)

{
  undefined4 local_8;
  
  FUN_00602550();
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x1e0 + local_8 * 4) + 0x70))();
  }
  return;
}

