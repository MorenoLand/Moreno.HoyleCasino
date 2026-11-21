// FUN_00459cd0  00459cd0

void __fastcall FUN_00459cd0(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_8;
  
  if (*(int *)(param_1 + 4) != 4) {
    uVar4 = 100;
    FUN_00639110(*(undefined4 *)(param_1 + 4));
    FUN_00646380(uVar4);
    uVar5 = 0;
    uVar4 = 0;
    FUN_00639110(*(undefined4 *)(param_1 + 4));
    FUN_006464d0(uVar4,uVar5);
    FUN_005d9180(*(undefined4 *)(param_1 + 4),0);
  }
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x70))();
  }
  if ((*(int *)(param_1 + 4) != 4) && (*(int *)(*(int *)(DAT_00790734 + 4) + 4) == 0)) {
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
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    sVar1 = FUN_004604d0(*(undefined4 *)(param_1 + 4),local_8);
    if (sVar1 != 0) {
      FUN_00458be0(*(undefined4 *)(param_1 + 4),local_8);
    }
  }
  return;
}

