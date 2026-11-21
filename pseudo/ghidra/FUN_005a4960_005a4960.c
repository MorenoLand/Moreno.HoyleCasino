// FUN_005a4960  005a4960

int __thiscall FUN_005a4960(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_005dcb00(param_2,param_1);
  iVar4 = (**(code **)(*DAT_00793600 + 0x2b0))(param_1,uVar3);
  cVar2 = FUN_005da7b0();
  iVar5 = FUN_005d5a50();
  iVar1 = *(int *)(DAT_00793604 + 0x5c8);
  if (((iVar4 <= iVar5) || (iVar6 = iVar5, cVar2 == '\0')) && (iVar6 = iVar4, 0 < iVar1)) {
    if (iVar1 == 1) {
      iVar6 = iVar5;
      if (iVar4 * 2 - iVar5 == 0 || iVar4 * 2 < iVar5) {
        iVar6 = iVar4 << 1;
      }
    }
    else if (iVar1 < 4) {
      iVar6 = iVar5;
      if (iVar4 * 3 - iVar5 == 0 || iVar4 * 3 < iVar5) {
        iVar6 = iVar4 * 3;
      }
    }
    else if (iVar1 == 4) {
      iVar6 = iVar5;
      if (iVar4 * 4 <= iVar5) {
        iVar6 = iVar4 << 2;
      }
    }
    else if (iVar1 == 5) {
      iVar6 = iVar5;
      if (iVar4 * 6 - iVar5 == 0 || iVar4 * 6 < iVar5) {
        iVar6 = iVar4 * 6;
      }
    }
    else if (iVar1 == 6) {
      iVar6 = iVar5;
      if (iVar4 * 6 - iVar5 == 0 || iVar4 * 6 < iVar5) {
        iVar6 = iVar4 * 6;
      }
    }
    else if (iVar1 == 7) {
      iVar6 = iVar5;
      if (iVar4 * 8 <= iVar5) {
        iVar6 = iVar4 << 3;
      }
    }
    else if (iVar1 == 8) {
      iVar6 = iVar5;
      if (iVar4 * 10 - iVar5 == 0 || iVar4 * 10 < iVar5) {
        iVar6 = iVar4 * 10;
      }
    }
    else if ((8 < iVar1) && (iVar6 = iVar5, iVar4 * 0xc - iVar5 == 0 || iVar4 * 0xc < iVar5)) {
      iVar6 = iVar4 * 0xc;
    }
  }
  return iVar6;
}

