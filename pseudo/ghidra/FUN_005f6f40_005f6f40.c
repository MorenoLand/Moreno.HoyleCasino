// FUN_005f6f40  005f6f40

void __fastcall FUN_005f6f40(int param_1)

{
  undefined4 local_8;
  
  FUN_005f5440();
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x44))
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    (**(code **)(**(int **)(param_1 + 0x48) + 0x78))
              (1,*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x44))
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x78))
              (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10),1);
    (**(code **)(**(int **)(param_1 + 0x50) + 0x44))
              (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
    (**(code **)(**(int **)(param_1 + 0x50) + 0x78))
              (1,*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    (**(code **)(**(int **)(param_1 + 0x54) + 0x44))
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
    (**(code **)(**(int **)(param_1 + 0x54) + 0x78))
              (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10),1);
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 0x48 + local_8 * 4) + 0x74))();
    }
  }
  return;
}

