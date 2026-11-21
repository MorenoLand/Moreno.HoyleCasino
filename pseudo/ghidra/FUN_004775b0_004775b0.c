// FUN_004775b0  004775b0

int FUN_004775b0(char param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_14;
  int local_8;
  
  local_14 = -99;
  iVar2 = FUN_0047e3b0();
  if ((*(char *)(DAT_007947e0 + 0x4f34) == '\0') || (iVar3 = FUN_004798c0(), iVar2 != iVar3)) {
    if (param_2 < 1) {
      if (DAT_007912e9 == '\0') {
        local_8 = FUN_0047bce0();
      }
      else {
        local_8 = FUN_0047bd20();
      }
    }
    else {
      local_8 = param_2;
    }
  }
  else {
    uVar4 = (**(code **)(**(int **)(*(int *)(DAT_00791eb8 + 0x9c) + 0x204) + 0xb8))();
    local_8 = FUN_0064cab0(uVar4);
  }
  if (local_8 < *(int *)(DAT_00791364 + 0x410)) {
    local_8 = *(int *)(DAT_00791364 + 0x410);
  }
  else if (*(int *)(DAT_00791364 + 0x410) < local_8) {
    *(int *)(DAT_00791364 + 0x410) = local_8;
  }
  iVar3 = FUN_004c6a70();
  iVar5 = FUN_0047bc20();
  DAT_0079131c = iVar3 / iVar5;
  if (DAT_0079131c <= local_8) {
    if (param_1 == '\0') {
      iVar2 = FUN_0047bc20();
      iVar2 = iVar2 * DAT_0079131c;
      FUN_004c6c10(iVar2);
      FUN_004da300();
      FUN_004dc4d0(9,0);
      FUN_004c7030(2);
      sVar1 = FUN_004f5a80(DAT_0079131c);
      local_14 = (int)sVar1;
      FUN_0047ec90(iVar2);
    }
    DAT_00791300 = 7;
    return local_14;
  }
  if (param_1 == '\0') {
    iVar3 = FUN_0047bc20();
    iVar3 = iVar3 * local_8;
    FUN_004c6c10(iVar3);
    FUN_004da300();
    if ((DAT_007912e9 == '\0') && (iVar5 = FUN_0047d6b0(), iVar5 == 0)) {
      FUN_004dc4d0(2,iVar3);
    }
    else {
      FUN_004dc4d0(1,iVar3);
    }
    sVar1 = FUN_004f58c0(local_8);
    local_14 = (int)sVar1;
    FUN_0047ec90(iVar3);
  }
  if ((DAT_007912e9 == '\0') && (iVar3 = FUN_0047d7b0(), iVar3 == 1)) {
    DAT_00791300 = 5;
    *(undefined1 *)(iVar2 + 0x1d) = 1;
    return local_14;
  }
  DAT_00791300 = 4;
  return local_14;
}

