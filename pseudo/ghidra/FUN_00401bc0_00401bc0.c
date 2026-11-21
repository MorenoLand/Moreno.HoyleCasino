// FUN_00401bc0  00401bc0

void FUN_00401bc0(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(DAT_007902f0 + 0x10dc);
  if ((iVar1 < 0) || (3 < iVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (iVar4 = FUN_005dcb00(iVar1), iVar4 != 0)) {
    piVar5 = (int *)FUN_0063aac0();
    if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (cVar3 = FUN_00407f50(iVar1), cVar3 != '\0')) {
      FUN_005f2b20(0x311283,1);
      return;
    }
  }
  FUN_005f2ba0(0x311283);
  return;
}

