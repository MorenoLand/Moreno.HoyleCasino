// FUN_00405750  00405750

void FUN_00405750(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_20;
  
  FUN_005d7f40(param_1);
  if (DAT_007902f0 == 0) {
    local_20 = -1;
  }
  else {
    local_20 = *(int *)(DAT_007902f0 + 0x10dc);
  }
  if (((*(int *)(param_1 + 0x18) == 4) && (*(char *)(param_1 + 4) == '\0')) && (local_20 != -1)) {
    iVar2 = tolower((int)*(char *)(param_1 + 0x14));
    if (iVar2 == 0x73) {
      FUN_004055f0(local_20);
    }
  }
  else if (((*(int *)(param_1 + 0x18) == 0x16) && (*(char *)(param_1 + 4) == '\0')) &&
          ((local_20 != -1 && (iVar2 = tolower((int)*(char *)(param_1 + 0x14)), iVar2 == 0x70)))) {
    FUN_005dcb00(local_20);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_00407fa0(local_20);
    }
  }
  return;
}

