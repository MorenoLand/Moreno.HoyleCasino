// FUN_00477900  00477900

int FUN_00477900(char param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  int local_10;
  
  local_10 = -99;
  iVar2 = FUN_0047e3b0();
  if ((*(char *)(DAT_007947e0 + 0x4f34) == '\0') || (iVar3 = FUN_004798c0(), iVar2 != iVar3)) {
    if (param_2 < 1) {
      if (DAT_007912e9 == '\0') {
        local_14 = FUN_0047bce0();
      }
      else {
        local_14 = FUN_0047bd20();
      }
    }
    else {
      local_14 = param_2;
    }
  }
  else {
    uVar4 = (**(code **)(**(int **)(*(int *)(DAT_00791eb8 + 0x9c) + 0x204) + 0xb8))();
    local_14 = FUN_0064cab0(uVar4);
  }
  if (local_14 < *(int *)(DAT_00791364 + 0x410)) {
    local_14 = *(int *)(DAT_00791364 + 0x410);
  }
  else if (*(int *)(DAT_00791364 + 0x410) < local_14) {
    *(int *)(DAT_00791364 + 0x410) = local_14;
  }
  iVar2 = FUN_004c6a70();
  iVar3 = FUN_0047bc20();
  DAT_0079131c = iVar2 / iVar3;
  iVar2 = FUN_004f67d0();
  if (iVar2 < DAT_0079131c) {
    iVar2 = FUN_004f67d0();
    if (iVar2 + local_14 < DAT_0079131c) {
      if (param_1 == '\0') {
        iVar2 = FUN_004f67d0();
        iVar3 = FUN_0047bc20();
        iVar3 = (iVar2 + local_14) * iVar3;
        FUN_004c6c10(iVar3);
        FUN_004da300();
        iVar2 = FUN_0047bc20();
        FUN_004dc4d0(2,iVar2 * local_14);
        sVar1 = FUN_004f6020(local_14);
        local_10 = (int)sVar1;
        FUN_0047ec90(iVar3);
      }
      DAT_00791300 = 6;
    }
    else {
      if (0 < param_2) {
        iVar2 = FUN_004f67d0();
        iVar2 = DAT_0079131c - iVar2;
        iVar3 = FUN_0047bd60();
        if (iVar2 < iVar3) {
          iVar2 = FUN_00477450(param_1);
          return iVar2;
        }
      }
      if (param_1 == '\0') {
        iVar2 = FUN_0047bc20();
        iVar2 = iVar2 * DAT_0079131c;
        FUN_004c6c10(iVar2);
        FUN_004da300();
        FUN_004dc4d0(9,0);
        FUN_004c7030(2);
        iVar3 = FUN_004f67d0();
        sVar1 = FUN_004f6210(DAT_0079131c - iVar3);
        local_10 = (int)sVar1;
        FUN_0047ec90(iVar2);
      }
      DAT_00791300 = 7;
    }
  }
  else {
    local_10 = FUN_00477450(param_1);
  }
  return local_10;
}

