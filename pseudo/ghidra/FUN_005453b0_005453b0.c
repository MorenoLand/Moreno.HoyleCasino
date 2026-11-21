// FUN_005453b0  005453b0

void __fastcall FUN_005453b0(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x10 + local_8 * 4) + 0x70))();
  }
  return;
}

