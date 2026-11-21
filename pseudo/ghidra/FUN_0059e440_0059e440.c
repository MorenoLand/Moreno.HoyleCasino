// FUN_0059e440  0059e440

void __fastcall FUN_0059e440(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 4) != 4) && (*(int *)(param_1 + 4) != 5)) {
    uVar4 = 100;
    FUN_00639110(*(undefined4 *)(param_1 + 4));
    FUN_00646380(uVar4);
    uVar5 = 0;
    uVar4 = 0;
    FUN_00639110(*(undefined4 *)(param_1 + 4));
    FUN_006464d0(uVar4,uVar5);
    FUN_005d9180(*(undefined4 *)(param_1 + 4),0);
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x70))();
  }
  if (((*(int *)(param_1 + 4) != 4) && (*(int *)(param_1 + 4) != 5)) &&
     (*(int *)(*(int *)(DAT_0162ee80 + 4) + 4) == 0)) {
    FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    piVar2 = (int *)FUN_0063aac0();
    if (*piVar2 == 0) {
      return;
    }
    iVar3 = FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    if (*(char *)(iVar3 + 0x4a1) != '\0') {
      return;
    }
  }
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    sVar1 = FUN_005a26f0(*(undefined4 *)(param_1 + 4),local_c);
    if (sVar1 != 0) {
      FUN_0059c930(*(undefined4 *)(param_1 + 4),local_c);
    }
  }
  return;
}

