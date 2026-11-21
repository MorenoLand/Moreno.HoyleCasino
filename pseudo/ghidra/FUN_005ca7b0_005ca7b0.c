// FUN_005ca7b0  005ca7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ca7b0(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0xcc))();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if ((_DAT_006b3e40 == *(double *)(*(int *)(param_1 + 4 + local_8 * 4) + 0x1e0)) ||
         (iVar1 = FUN_00686cc0(), iVar1 % *(int *)(param_1 + 0x2c) != 0)) {
        (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0xd0))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0xcc))();
      }
    }
  }
  return;
}

