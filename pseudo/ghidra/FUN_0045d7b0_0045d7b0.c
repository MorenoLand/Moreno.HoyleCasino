// FUN_0045d7b0  0045d7b0

void FUN_0045d7b0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  
  FUN_005d7f40(param_1);
  if (DAT_00790738 == 0) {
    local_20 = -1;
  }
  else {
    local_20 = FUN_00460840();
  }
  if ((((*(int *)(param_1 + 0x18) == 4) && (*(char *)(param_1 + 4) == '\0')) && (local_20 != -1)) &&
     ((iVar3 = tolower((int)*(char *)(param_1 + 0x14)), iVar3 == 0x70 &&
      (iVar3 = FUN_005dcb00(local_20), iVar3 != 0)))) {
    FUN_005dcb00(local_20);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_00460b40(local_20);
    }
  }
  if (((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 4)) &&
     ((*(char *)(param_1 + 0x14) == ' ' &&
      ((DAT_00790738 != 0 && (*(int *)(DAT_00790738 + 0x104) != -1)))))) {
    FUN_005cb5b0();
  }
  if (((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 4)) &&
     (iVar3 = tolower((int)*(char *)(param_1 + 0x14)), iVar3 == 0x74)) {
    FUN_005f2a60(0x1391,0);
    cVar2 = FUN_006026d0();
    if (cVar2 != '\0') {
      FUN_005db240();
    }
  }
  if ((((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 1)) &&
      (((DAT_00790740 != 0 && ((DAT_00790738 != 0 && (*(int *)(DAT_00790740 + 0x40) != 0)))) &&
       (*(int *)(DAT_00790740 + 0x44) != 0)))) &&
     ((cVar2 = FUN_005f54a0(), cVar2 != '\0' || (cVar2 = FUN_005f54a0(), cVar2 != '\0')))) {
    *(undefined1 *)(DAT_00790738 + 0x116) = 1;
  }
  return;
}

