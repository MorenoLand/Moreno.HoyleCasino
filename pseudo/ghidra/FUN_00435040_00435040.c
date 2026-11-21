// FUN_00435040  00435040

undefined1 FUN_00435040(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  FUN_005dcb00(param_1);
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    iVar4 = FUN_005dcb00(param_1);
    if ((*(int *)(iVar4 + 8) != 0x16) &&
       (iVar4 = FUN_005dcb00(param_1), *(int *)(iVar4 + 8) != 0x15)) {
      return 1;
    }
    return 0;
  }
  cVar2 = FUN_004369a0(param_1,2);
  if (((((cVar2 == '\0') && (cVar2 = FUN_004369a0(param_1,5), cVar2 == '\0')) &&
       (cVar2 = FUN_004369a0(param_1,0x37), cVar2 == '\0')) &&
      ((cVar2 = FUN_004369a0(param_1,0x38), cVar2 == '\0' &&
       (cVar2 = FUN_004369a0(param_1,0x39), cVar2 == '\0')))) &&
     ((cVar2 = FUN_004369a0(param_1,0x3a), cVar2 == '\0' &&
      ((cVar2 = FUN_004369a0(param_1,0x3b), cVar2 == '\0' &&
       (cVar2 = FUN_004369a0(param_1,0x3c), cVar2 == '\0')))))) {
    return 1;
  }
  return 0;
}

