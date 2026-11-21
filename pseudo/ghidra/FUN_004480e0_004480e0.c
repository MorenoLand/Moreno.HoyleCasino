// FUN_004480e0  004480e0

void __fastcall FUN_004480e0(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8;
  
  iVar1 = *(int *)(DAT_00790710 + 0xdc + *(int *)(param_1 + 4) * 4);
  iVar3 = FUN_00639110(*(undefined4 *)(param_1 + 4));
  if (iVar3 != 0) {
    uVar5 = 100;
    FUN_00639110(*(undefined4 *)(param_1 + 4));
    FUN_00646380(uVar5);
    uVar6 = 0;
    uVar5 = 0;
    FUN_00639110(*(undefined4 *)(param_1 + 4));
    FUN_006464d0(uVar5,uVar6);
  }
  FUN_005d9180(*(undefined4 *)(param_1 + 4),0);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x70))();
  }
  if (*(int *)(*(int *)(DAT_0162ee80 + 4) + 4) == 0) {
    FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 == 0) {
      return;
    }
    iVar3 = FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    if (*(char *)(iVar3 + 0x4a1) != '\0') {
      return;
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    sVar2 = FUN_0044cd70(*(undefined4 *)(param_1 + 4),local_8);
    if (sVar2 != 0) {
      FUN_004478b0(*(undefined4 *)(param_1 + 4),local_8);
    }
  }
  if ((iVar1 == 1) || (iVar1 == 0)) {
    iVar3 = FUN_00447af0(*(undefined4 *)(param_1 + 4),0);
    iVar3 = iVar3 + 0x2d;
    uVar5 = FUN_00447a70(*(undefined4 *)(param_1 + 4),0);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))(uVar5,iVar3);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))(iVar1 != 1);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
  }
  return;
}

