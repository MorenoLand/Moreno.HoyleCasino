// FUN_00529910  00529910

undefined4 FUN_00529910(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00528000();
  if (iVar2 != 0) {
    FUN_00528000();
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar2 = FUN_00528000(), *(char *)(iVar2 + 0x4a0) == '\0')) {
      return 1;
    }
  }
  return 0;
}

