// FUN_0042d1c0  0042d1c0

void FUN_0042d1c0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = tolower((int)*(char *)(param_1 + 0x14));
  if (iVar3 == 0x74) {
    FUN_005db240();
  }
  iVar3 = FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xad8));
  if (iVar3 != 0) {
    FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xad8));
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = tolower((int)*(char *)(param_1 + 0x14));
      if (iVar3 == 0x70) {
        FUN_004362a0(*(undefined4 *)(DAT_007906d4 + 0xad8));
      }
      iVar3 = tolower((int)*(char *)(param_1 + 0x14));
      if (iVar3 == 0x72) {
        FUN_005f2a60(0x30dbd3,0);
        cVar2 = FUN_006026d0();
        if (cVar2 != '\0') {
          *(undefined1 *)(*(int *)(DAT_007906dc + 0x164) + 0x18c) = 1;
          FUN_0042d3f0();
        }
      }
    }
  }
  return;
}

