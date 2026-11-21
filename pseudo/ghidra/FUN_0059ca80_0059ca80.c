// FUN_0059ca80  0059ca80

void FUN_0059ca80(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = FUN_005a2460();
  if ((((iVar3 != -1) && (iVar3 = FUN_005a2460(), -1 < iVar3)) && (iVar3 < 4)) &&
     (iVar4 = FUN_005dcb00(iVar3), iVar4 != 0)) {
    piVar5 = (int *)FUN_0063aac0();
    if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (cVar2 = FUN_005a29f0(iVar3), cVar2 != '\0')) {
      FUN_005f2b20(0x315102,1);
      return;
    }
  }
  FUN_005f2ba0(0x315102);
  return;
}

