// FUN_0059a010  0059a010

undefined1 FUN_0059a010(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_00597d30();
  if (iVar2 == -1) {
    return 0;
  }
  iVar2 = FUN_005f5400();
  iVar3 = FUN_00597d30();
  if (iVar2 / 3 == iVar3) {
    FUN_00597d00();
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) &&
       (((iVar2 = FUN_005f5400(), iVar2 % 3 != 0 &&
         (iVar2 = FUN_00597d00(), *(char *)(iVar2 + 0x4a0) == '\0')) ||
        ((iVar2 = FUN_005f5400(), iVar2 % 3 == 0 && (*(char *)(DAT_007935a8 + 300) != '\0')))))) {
      return 1;
    }
  }
  return 0;
}

