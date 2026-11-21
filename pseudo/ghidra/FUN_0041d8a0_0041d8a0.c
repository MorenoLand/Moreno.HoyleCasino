// FUN_0041d8a0  0041d8a0

undefined1 FUN_0041d8a0(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_00790324 + 0x4d0);
  iVar2 = FUN_005f5400();
  if (iVar2 == iVar4) {
    FUN_00419080();
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar4 = FUN_00419080(), *(char *)(iVar4 + 0x4a0) == '\0')) {
      return 1;
    }
  }
  return 0;
}

