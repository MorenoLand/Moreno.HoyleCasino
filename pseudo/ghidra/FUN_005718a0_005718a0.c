// FUN_005718a0  005718a0

void FUN_005718a0(void)

{
  char cVar1;
  int iVar2;
  int extraout_var;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  cVar1 = FUN_00571cb0();
  iVar3 = extraout_var;
  if (cVar1 != '\0') {
    iVar2 = FUN_00571c30();
    if (iVar2 < 8) {
      iVar4 = *(int *)(&DAT_007488f0 + iVar2 * 4) * *(int *)(iVar3 + 0x38);
      *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x3c) + iVar4;
      *(int *)(iVar3 + 0x40 + iVar2 * 4) = *(int *)(iVar3 + 0x40 + iVar2 * 4) + iVar4;
      *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + iVar4;
      if ((*(char *)(iVar3 + 4) != '\0') && (iVar2 != 1)) {
        FUN_00571d30(iVar2);
      }
    }
    if ((iVar2 == 8) && (*(char *)(iVar3 + 4) == '\0')) {
      *(undefined1 *)(iVar3 + 4) = 1;
      *(undefined4 *)(iVar3 + 0x34) = 0;
    }
    if (iVar2 == 9) {
      FUN_00571d90(iVar3,9,iVar4);
    }
  }
  if ((*(char *)(iVar3 + 4) != '\0') && (0x13 < *(int *)(iVar3 + 0x34))) {
    *(undefined1 *)(iVar3 + 4) = 0;
  }
  return;
}

