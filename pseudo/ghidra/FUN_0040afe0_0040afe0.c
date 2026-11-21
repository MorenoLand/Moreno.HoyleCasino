// FUN_0040afe0  0040afe0

int FUN_0040afe0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  FUN_005dcb00(param_1);
  iVar3 = (**(code **)(*DAT_00790320 + 0x2b0))();
  cVar2 = FUN_005da7b0();
  iVar4 = FUN_005d5a50();
  iVar1 = *(int *)(DAT_00790324 + 0x4e0);
  if (iVar4 < iVar3) {
    if (cVar2 != '\0') {
      return iVar4;
    }
    piVar5 = (int *)FUN_0063aac0();
    if (*piVar5 != 2) {
      FUN_0063aac0();
    }
  }
  iVar6 = iVar3;
  if (0 < iVar1) {
    if (iVar1 == 1) {
      iVar6 = iVar4;
      if (iVar3 * 2 - iVar4 == 0 || iVar3 * 2 < iVar4) {
        iVar6 = iVar3 << 1;
      }
    }
    else if (iVar1 < 4) {
      iVar6 = iVar4;
      if (iVar3 * 3 - iVar4 == 0 || iVar3 * 3 < iVar4) {
        iVar6 = iVar3 * 3;
      }
    }
    else if (iVar1 == 4) {
      iVar6 = iVar4;
      if (iVar3 * 4 <= iVar4) {
        iVar6 = iVar3 << 2;
      }
    }
    else if (iVar1 == 5) {
      iVar6 = iVar4;
      if (iVar3 * 6 - iVar4 == 0 || iVar3 * 6 < iVar4) {
        iVar6 = iVar3 * 6;
      }
    }
    else if (iVar1 == 6) {
      iVar6 = iVar4;
      if (iVar3 * 6 - iVar4 == 0 || iVar3 * 6 < iVar4) {
        iVar6 = iVar3 * 6;
      }
    }
    else if (iVar1 == 7) {
      iVar6 = iVar4;
      if (iVar3 * 8 <= iVar4) {
        iVar6 = iVar3 << 3;
      }
    }
    else if (iVar1 == 8) {
      iVar6 = iVar4;
      if (iVar3 * 10 - iVar4 == 0 || iVar3 * 10 < iVar4) {
        iVar6 = iVar3 * 10;
      }
    }
    else if ((8 < iVar1) && (iVar6 = iVar4, iVar3 * 0xc - iVar4 == 0 || iVar3 * 0xc < iVar4)) {
      iVar6 = iVar3 * 0xc;
    }
  }
  return iVar6;
}

