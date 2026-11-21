// FUN_005e7230  005e7230

void __fastcall FUN_005e7230(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    iVar1 = FUN_005e75f0(local_8);
    if (*(char *)(iVar1 + 0xac) != '\0') {
      if (*(int *)(iVar1 + 0x44) < 0) {
        memcpy((void *)(*(int *)(param_1 + 0x1c0 + local_8 * 4) + 0x10),(void *)(iVar1 + 0x60),0x4c)
        ;
        FUN_00664630();
      }
      else if (*(int *)(param_1 + 0x1e8 + local_8 * 4) != 0) {
        (**(code **)(**(int **)(param_1 + 0x1e8 + local_8 * 4) + 0xb0))(3);
        (**(code **)(**(int **)(param_1 + 0x1e8 + local_8 * 4) + 0x74))();
        if (*(int *)(param_1 + 0x210 + local_8 * 4) != 0) {
          (**(code **)(**(int **)(param_1 + 0x210 + local_8 * 4) + 0xb0))(0);
          (**(code **)(**(int **)(param_1 + 0x210 + local_8 * 4) + 0x74))();
        }
      }
    }
  }
  return;
}

