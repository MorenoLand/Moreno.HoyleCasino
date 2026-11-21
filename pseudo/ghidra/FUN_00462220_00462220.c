// FUN_00462220  00462220

undefined1 FUN_00462220(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_004603f0();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004603f0();
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (*(int *)(DAT_00790738 + 0x10c) == *(int *)(DAT_00790738 + 0x104))) {
    return 0;
  }
  FUN_004603f0();
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (iVar2 = FUN_004603f0(), *(char *)(iVar2 + 0x4a0) == '\0')) {
    return 1;
  }
  return 0;
}

