// FUN_004404d0  004404d0

void __fastcall FUN_004404d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  
  iVar1 = FUN_005fb300(4);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005fb300(4);
    (**(code **)(*piVar2 + 0x70))();
  }
  iVar1 = FUN_005fb300(3);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005fb300(3);
    (**(code **)(*piVar2 + 0x70))();
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x110) + 0x70))();
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x104 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x104 + local_8 * 4) + 0x70))();
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0xb4 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0xb4 + local_8 * 4) + 0x70))();
    }
    if (*(int *)(param_1 + 200 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 200 + local_8 * 4) + 0x70))();
    }
    if (*(int *)(param_1 + 0xdc + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0xdc + local_8 * 4) + 0x70))();
    }
    if (*(int *)(param_1 + 0xf0 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0xf0 + local_8 * 4) + 0x70))();
    }
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x114 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x114 + local_8 * 4) + 0x70))();
    }
  }
  return;
}

