// FUN_00542810  00542810

undefined1 FUN_00542810(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(DAT_007933ec + 0xe8) == -1) {
    return 0;
  }
  iVar3 = *(int *)(DAT_007933ec + 0xe8);
  iVar2 = FUN_005f5400();
  if ((iVar2 / 3 == iVar3) && (iVar3 = FUN_005f5400(), iVar3 % 3 != 0)) {
    FUN_00540af0();
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar3 = FUN_00540af0(), *(char *)(iVar3 + 0x4a0) == '\0')) {
      return 1;
    }
  }
  return 0;
}

