// FUN_00517430  00517430

int FUN_00517430(char param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_14;
  int local_10;
  
  local_10 = -99;
  iVar3 = FUN_0047e3b0();
  if ((*(char *)(DAT_007947e0 + 0x4f34) == '\0') || (iVar4 = FUN_004798c0(), iVar3 != iVar4)) {
    if (param_2 < 1) {
      cVar1 = FUN_00516dd0();
      if (cVar1 == '\0') {
        if (DAT_00793032 == '\0') {
          local_14 = FUN_0047bce0();
        }
        else {
          local_14 = FUN_0047bce0();
          iVar3 = FUN_0047bca0();
          local_14 = local_14 - iVar3;
          DAT_00793032 = '\0';
        }
      }
      else if (DAT_00793032 == '\0') {
        local_14 = FUN_0047bd20();
      }
      else {
        local_14 = FUN_0047bd20();
        iVar3 = FUN_0047bca0();
        local_14 = local_14 - iVar3;
        DAT_00793032 = '\0';
      }
    }
    else {
      local_14 = param_2;
    }
  }
  else {
    uVar5 = (**(code **)(**(int **)(*(int *)(DAT_00791eb8 + 0x9c) + 0x204) + 0xb8))();
    local_14 = FUN_0064cab0(uVar5);
  }
  if (local_14 < *(int *)(DAT_00791364 + 0x410)) {
    local_14 = *(int *)(DAT_00791364 + 0x410);
  }
  else if (*(int *)(DAT_00791364 + 0x410) < local_14) {
    *(int *)(DAT_00791364 + 0x410) = local_14;
  }
  iVar3 = FUN_004c6a70();
  iVar4 = FUN_0047bc20();
  DAT_00793104 = iVar3 / iVar4;
  iVar3 = FUN_004f67d0();
  if (iVar3 < DAT_00793104) {
    iVar3 = FUN_004f67d0();
    if (iVar3 + local_14 < DAT_00793104) {
      if (param_1 == '\0') {
        iVar3 = FUN_004f67d0();
        iVar4 = FUN_0047bc20();
        iVar4 = (iVar3 + local_14) * iVar4;
        FUN_004c6c10(iVar4);
        FUN_004da300();
        iVar3 = FUN_0047bc20();
        FUN_004dc4d0(2,iVar3 * local_14);
        sVar2 = FUN_004f6020(local_14);
        local_10 = (int)sVar2;
        FUN_0047ec90(iVar4);
      }
      DAT_00793064 = 5;
    }
    else {
      if (0 < param_2) {
        iVar3 = FUN_004f67d0();
        iVar3 = DAT_00793104 - iVar3;
        iVar4 = FUN_0047bd60();
        if (iVar3 < iVar4) {
          iVar3 = FUN_00516f40(param_1);
          return iVar3;
        }
      }
      if (param_1 == '\0') {
        iVar3 = FUN_0047bc20();
        iVar3 = iVar3 * DAT_00793104;
        FUN_004c6c10(iVar3);
        FUN_004da300();
        FUN_004dc4d0(9,0);
        FUN_004c7030(2);
        iVar4 = FUN_004f67d0();
        sVar2 = FUN_004f6210(DAT_00793104 - iVar4);
        local_10 = (int)sVar2;
        FUN_0047ec90(iVar3);
      }
      DAT_00793064 = 6;
    }
  }
  else {
    local_10 = FUN_00516f40(param_1);
  }
  return local_10;
}

