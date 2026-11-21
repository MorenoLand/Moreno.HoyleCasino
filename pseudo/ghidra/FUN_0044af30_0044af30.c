// FUN_0044af30  0044af30

void FUN_0044af30(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_1c;
  
  FUN_005d7f40(param_1);
  if (DAT_00790710 == 0) {
    local_1c = -1;
  }
  else {
    local_1c = FUN_0044cee0();
  }
  if ((((*(int *)(param_1 + 0x18) == 4) && (*(char *)(param_1 + 4) == '\0')) && (local_1c != -1)) &&
     ((iVar3 = tolower((int)*(char *)(param_1 + 0x14)), iVar3 == 0x70 &&
      (iVar3 = FUN_005dcb00(local_1c), iVar3 != 0)))) {
    FUN_005dcb00(local_1c);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_0044d010(local_1c);
    }
  }
  if (((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 1)) &&
     ((DAT_00790718 != 0 &&
      ((((DAT_00790710 != 0 && (*(int *)(DAT_00790718 + 100) != 0)) &&
        (*(int *)(DAT_00790718 + 0x68) != 0)) &&
       ((cVar2 = FUN_005f54a0(), cVar2 != '\0' || (cVar2 = FUN_005f54a0(), cVar2 != '\0')))))))) {
    *(undefined1 *)(DAT_00790710 + 0xd1) = 1;
  }
  return;
}

