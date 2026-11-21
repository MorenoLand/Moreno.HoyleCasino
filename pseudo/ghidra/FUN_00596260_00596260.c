// FUN_00596260  00596260

void FUN_00596260(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_1c;
  
  FUN_005d7f40(param_1);
  if (DAT_007935a8 == 0) {
    local_1c = -1;
  }
  else {
    local_1c = FUN_005981b0();
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
      FUN_00599050(local_1c);
    }
  }
  if (((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 1)) &&
     ((DAT_0079359c != 0 &&
      ((((DAT_007935a8 != 0 && (*(int *)(DAT_0079359c + 0x94) != 0)) &&
        (*(int *)(DAT_0079359c + 0x98) != 0)) &&
       ((cVar2 = FUN_005f54a0(), cVar2 != '\0' || (cVar2 = FUN_005f54a0(), cVar2 != '\0')))))))) {
    *(undefined1 *)(DAT_007935a8 + 0x116) = 1;
  }
  return;
}

