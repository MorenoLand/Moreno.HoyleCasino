// FUN_005f70b0  005f70b0

void __fastcall FUN_005f70b0(int param_1)

{
  undefined4 local_8;
  
  FUN_005f5420();
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x48 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x48 + local_8 * 4) + 0x70))();
    }
  }
  return;
}

