// FUN_005170a0  005170a0

int FUN_005170a0(char param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_14;
  int local_8;
  
  local_14 = -99;
  iVar3 = FUN_0047e3b0();
  if ((*(char *)(DAT_007947e0 + 0x4f34) == '\0') || (iVar4 = FUN_004798c0(), iVar3 != iVar4)) {
    if (param_2 < 1) {
      cVar1 = FUN_00516dd0();
      if (cVar1 == '\0') {
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
    uVar5 = (**(code **)(**(int **)(*(int *)(DAT_00791eb8 + 0x9c) + 0x204) + 0xb8))();
    local_8 = FUN_0064cab0(uVar5);
  }
  if (local_8 < *(int *)(DAT_00791364 + 0x410)) {
    local_8 = *(int *)(DAT_00791364 + 0x410);
  }
  else if (*(int *)(DAT_00791364 + 0x410) < local_8) {
    *(int *)(DAT_00791364 + 0x410) = local_8;
  }
  iVar3 = FUN_004c6a70();
  iVar4 = FUN_0047bc20();
  DAT_00793104 = iVar3 / iVar4;
  if (local_8 < DAT_00793104) {
    if (param_1 == '\0') {
      iVar3 = FUN_0047bc20();
      iVar3 = iVar3 * local_8;
      FUN_004c6c10(iVar3);
      FUN_004da300();
      iVar4 = FUN_0047e190();
      if ((DAT_00793078 == 3 - (uint)(iVar4 != 1)) && (iVar4 = FUN_0047d6b0(), iVar4 == 0)) {
        FUN_004dc4d0(2,iVar3);
      }
      else {
        FUN_004dc4d0(1,iVar3);
      }
      sVar2 = FUN_004f58c0(local_8);
      local_14 = (int)sVar2;
      FUN_0047ec90(iVar3);
    }
    DAT_00793064 = 4;
    return local_14;
  }
  if (param_1 == '\0') {
    iVar3 = FUN_0047bc20();
    iVar3 = iVar3 * DAT_00793104;
    FUN_004c6c10(iVar3);
    FUN_004da300();
    FUN_004dc4d0(9,0);
    FUN_004c7030(2);
    sVar2 = FUN_004f5a80(DAT_00793104);
    local_14 = (int)sVar2;
    FUN_0047ec90(iVar3);
  }
  DAT_00793064 = 6;
  return local_14;
}

