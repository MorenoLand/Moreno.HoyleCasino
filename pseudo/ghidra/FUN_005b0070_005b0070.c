// FUN_005b0070  005b0070

void FUN_005b0070(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_1c;
  
  FUN_005d7f40(param_1);
  if (DAT_00793604 == 0) {
    local_1c = -1;
  }
  else {
    local_1c = FUN_005b5380();
  }
  if ((((*(int *)(param_1 + 0x18) == 4) && (*(char *)(param_1 + 4) == '\0')) && (local_1c != -1)) &&
     ((iVar3 = tolower((int)*(char *)(param_1 + 0x14)), iVar3 == 0x74 &&
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
      FUN_005b6880(local_1c);
    }
  }
  if (((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 4)) &&
     ((*(char *)(param_1 + 0x14) == ' ' &&
      ((DAT_00793604 != 0 && (iVar3 = FUN_005b4f00(), iVar3 != -1)))))) {
    FUN_005b4f00();
    FUN_005cb5b0();
  }
  if (((((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 1)) && (DAT_007935f8 != 0)
       ) && ((DAT_00793604 != 0 && (*(int *)(DAT_007935f8 + 0x3c) != 0)))) &&
     ((*(int *)(DAT_007935f8 + 0x40) != 0 &&
      ((cVar2 = FUN_005f54a0(), cVar2 != '\0' || (cVar2 = FUN_005f54a0(), cVar2 != '\0')))))) {
    *(undefined1 *)(DAT_00793604 + 0x5c0) = 1;
  }
  return;
}

