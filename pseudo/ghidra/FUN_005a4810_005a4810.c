// FUN_005a4810  005a4810

undefined1 FUN_005a4810(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_005a2020();
  if (iVar2 == -1) {
    return 0;
  }
  iVar2 = FUN_005f5400();
  iVar3 = FUN_005a2020();
  if (iVar2 / 3 == iVar3) {
    FUN_005a1ff0();
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

