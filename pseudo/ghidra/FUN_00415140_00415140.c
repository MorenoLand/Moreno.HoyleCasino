// FUN_00415140  00415140

void FUN_00415140(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_24;
  
  FUN_005d7f40(param_1);
  if (DAT_00790324 == 0) {
    local_24 = -1;
  }
  else {
    local_24 = FUN_00419dd0();
  }
  if ((((*(int *)(param_1 + 0x18) == 4) && (*(char *)(param_1 + 4) == '\0')) && (local_24 != -1)) &&
     ((iVar3 = tolower((int)*(char *)(param_1 + 0x14)), iVar3 == 0x74 &&
      (iVar3 = FUN_005dcb00(local_24), iVar3 != 0)))) {
    FUN_005dcb00(local_24);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_0041a0b0(local_24);
    }
  }
  if (((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 4)) &&
     ((*(char *)(param_1 + 0x14) == ' ' &&
      ((DAT_00790324 != 0 && (*(int *)(DAT_00790324 + 0x4d0) != -1)))))) {
    FUN_005cb5b0();
  }
  if (((((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 1)) && (DAT_0079032c != 0)
       ) && ((DAT_00790324 != 0 && (*(int *)(DAT_0079032c + 0x3c) != 0)))) &&
     ((*(int *)(DAT_0079032c + 0x40) != 0 &&
      ((cVar2 = FUN_005f54a0(), cVar2 != '\0' || (cVar2 = FUN_005f54a0(), cVar2 != '\0')))))) {
    *(undefined1 *)(DAT_00790324 + 0x4d8) = 1;
  }
  return;
}

