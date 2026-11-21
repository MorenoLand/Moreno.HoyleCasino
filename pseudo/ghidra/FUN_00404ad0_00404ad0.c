// FUN_00404ad0  00404ad0

undefined4 FUN_00404ad0(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  FUN_00408c00(param_1);
  iVar3 = FUN_005dcb00(param_1);
  *(undefined1 *)(iVar3 + 0x4a2) = 1;
  (**(code **)(**(int **)(DAT_007902ec + 4) + 4))(1);
  cVar2 = FUN_00408b40(param_1);
  if (cVar2 != '\0') {
    FUN_005dcb00(param_1);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      return 7;
    }
  }
  return 2;
}

