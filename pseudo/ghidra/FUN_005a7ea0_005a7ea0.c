// FUN_005a7ea0  005a7ea0

void __fastcall FUN_005a7ea0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  int local_8;
  
  FUN_005a8890();
  if (*(int *)(*(int *)(DAT_00793604 + 0x57c) + 0x808) ==
      *(int *)(*(int *)(DAT_00793604 + 0x57c) + 0x80c) + -1) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x70))();
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar1 = *(int *)(DAT_00793604 + 0x664 + local_8 * 4);
    if ((iVar1 == -1) || (*(char *)(DAT_00793604 + 0x678) != '\0')) {
      (**(code **)(**(int **)(param_1 + 0x58 + local_8 * 4) + 0x70))();
    }
    else {
      uVar3 = FUN_005a7160(iVar1);
      (**(code **)(**(int **)(param_1 + 0x58 + local_8 * 4) + 0xb0))(uVar3);
      (**(code **)(**(int **)(param_1 + 0x58 + local_8 * 4) + 0x74))();
    }
  }
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    FUN_005ac460();
    if (local_10 != 4) {
      cVar2 = FUN_005b60c0(local_10);
      if (cVar2 != '\0') {
        cVar2 = FUN_005da7b0();
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*DAT_00793600 + 0x2c4))(local_10);
          if ((cVar2 == '\0') &&
             (*(int *)(*(int *)(param_1 + 0x18 + local_10 * 4) + 0x17c + local_10 * 0x1e0) == 0)) {
            (**(code **)(**(int **)(param_1 + 0x18 + local_10 * 4) + 0xb8))(local_10,0);
            (**(code **)(**(int **)(param_1 + 0x48 + local_10 * 4) + 0xb8))(local_10,0);
          }
        }
      }
    }
  }
  cVar2 = FUN_005da7b0();
  if ((cVar2 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_00793600 + 0x2f0))();
  }
  return;
}

