// FUN_00409f10  00409f10

undefined4 FUN_00409f10(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = FUN_005f5400();
  iVar4 = *(int *)(DAT_007902f0 + 0x10dc);
  if (iVar4 == -1) {
    return 0;
  }
  iVar3 = FUN_004081c0(uVar2);
  if (iVar3 == iVar4) {
    iVar4 = FUN_00407bb0();
    if (iVar4 != 0) {
      FUN_00407bb0();
      piVar5 = (int *)FUN_0063aac0();
      if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && (iVar4 = FUN_00407bb0(), *(char *)(iVar4 + 0x4a0) == '\0')) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

