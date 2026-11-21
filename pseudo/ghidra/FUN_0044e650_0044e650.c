// FUN_0044e650  0044e650

undefined1 FUN_0044e650(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_00790710 + 0xc4);
  iVar2 = FUN_005f5400();
  if (iVar2 / 3 == iVar4) {
    FUN_0044ccc0();
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar4 = FUN_0044ccc0(), *(char *)(iVar4 + 0x4a0) == '\0')) {
      return 1;
    }
  }
  return 0;
}

