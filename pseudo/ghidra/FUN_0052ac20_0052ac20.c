// FUN_0052ac20  0052ac20

void __fastcall FUN_0052ac20(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_8;
  
  cVar2 = FUN_005384e0();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(DAT_0079338c + 8);
    iVar3 = (**(code **)(*DAT_00793394 + 0x40))();
    if (iVar3 == 3) {
      for (local_8 = 3; local_8 < 8; local_8 = local_8 + 1) {
        (**(code **)(**(int **)(param_1 + 0x3c + local_8 * 4) + 0x70))();
      }
      if (iVar1 < 1) {
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x74))();
      }
      if (iVar1 < 2) {
        (**(code **)(**(int **)(param_1 + 0x40) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x40) + 0x74))();
      }
      if (iVar1 < 3) {
        (**(code **)(**(int **)(param_1 + 0x44) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x44) + 0x74))();
      }
    }
    else if (iVar3 == 5) {
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        (**(code **)(**(int **)(param_1 + 0x3c + local_8 * 4) + 0x70))();
      }
      if (iVar1 < 1) {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x74))();
      }
      if (iVar1 < 2) {
        (**(code **)(**(int **)(param_1 + 0x4c) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x4c) + 0x74))();
      }
      if (iVar1 < 3) {
        (**(code **)(**(int **)(param_1 + 0x50) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x50) + 0x74))();
      }
      if (iVar1 < 4) {
        (**(code **)(**(int **)(param_1 + 0x54) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x54) + 0x74))();
      }
      if (iVar1 < 5) {
        (**(code **)(**(int **)(param_1 + 0x58) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x58) + 0x74))();
      }
    }
    else {
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        (**(code **)(**(int **)(param_1 + 0x3c + local_8 * 4) + 0x70))();
      }
    }
  }
  return;
}

