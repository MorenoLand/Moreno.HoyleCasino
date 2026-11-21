// FUN_00404ba0  00404ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404ba0(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  CPane *this;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  CSize *pCVar7;
  undefined4 uVar8;
  int local_d8;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  int local_24;
  int local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  int local_8;
  
  local_48 = 0xffffffff;
  local_24 = -1;
  local_50 = 0xffffffff;
  local_1c = 0;
  local_14 = 0x3ff0000000000000;
  local_8 = *(int *)(DAT_007902f0 + 0x10dc);
  local_20 = -1;
  local_4c = -1;
  local_c = 0xffffffff;
  local_58 = FUN_0064c8a0(0,0);
  local_48 = *(int *)(DAT_007902f0 + 0x10e4);
  switch(*(undefined4 *)(DAT_007902f0 + 0x10e0)) {
  case 0:
    local_20 = 170000;
    break;
  case 1:
    local_20 = 0x29816;
    break;
  case 2:
    pCVar7 = (CSize *)&local_58;
    this = (CPane *)FUN_005dcb00(local_8);
    CPane::GetMinSize(this,pCVar7);
    iVar4 = FUN_005dcb00(local_8);
    if (3 < *(int *)(iVar4 + 0x4a8)) {
      iVar4 = FUN_0062fbf0(2);
      if (iVar4 == 0) {
        FUN_005dcb00(local_8);
        piVar5 = (int *)FUN_0063aac0();
        if (*piVar5 == 2) {
LAB_00404ced:
          bVar1 = 1;
        }
        else {
          piVar5 = (int *)FUN_0063aac0();
          if (*piVar5 == 3) goto LAB_00404ced;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 0x14) + 0x400;
        local_14 = _DAT_006b2c40;
        break;
      }
    }
    iVar4 = FUN_005dcb00(local_8);
    if (*(int *)(iVar4 + 0x4a8) < -3) {
      iVar4 = FUN_0062fbf0(2);
      if (iVar4 == 0) {
        FUN_005dcb00(local_8);
        piVar5 = (int *)FUN_0063aac0();
        if (*piVar5 == 2) {
LAB_00404d80:
          bVar1 = 1;
        }
        else {
          piVar5 = (int *)FUN_0063aac0();
          if (*piVar5 == 3) goto LAB_00404d80;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 10) + 0x3ff;
        local_14 = _DAT_006b2c40;
        break;
      }
    }
    if (*(char *)(DAT_007902f0 + local_8 + 0xb8) == '\0') {
      if (-1 < (int)local_58) {
        if ((int)local_58 < 1) break;
        FUN_005dcb00(local_8);
        piVar5 = (int *)FUN_0063aac0();
        if (*piVar5 == 2) {
LAB_00404f2b:
          bVar1 = 1;
        }
        else {
          piVar5 = (int *)FUN_0063aac0();
          if (*piVar5 == 3) goto LAB_00404f2b;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 0xffffffec) + 0x404;
        local_14 = _DAT_006b2c38;
        break;
      }
      FUN_005dcb00(local_8);
      piVar5 = (int *)FUN_0063aac0();
      if (*piVar5 == 2) {
LAB_00404e9c:
        bVar1 = 1;
      }
      else {
        piVar5 = (int *)FUN_0063aac0();
        if (*piVar5 == 3) goto LAB_00404e9c;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0xffffffe6) + 0x402;
      local_14 = _DAT_006b2c38;
    }
    else {
      FUN_005dcb00(local_8);
      piVar5 = (int *)FUN_0063aac0();
      if (*piVar5 == 2) {
LAB_00404e12:
        bVar1 = 1;
      }
      else {
        piVar5 = (int *)FUN_0063aac0();
        if (*piVar5 == 3) goto LAB_00404e12;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x15) + 0x3fe;
      local_14 = 0x3ff0000000000000;
    }
    break;
  case 4:
    cVar3 = FUN_005da7b0();
    if (cVar3 == '\0') {
      local_24 = 0x7ec;
      local_14 = _DAT_006b2c38;
    }
    break;
  case 5:
    cVar3 = FUN_005da7b0();
    if (cVar3 == '\0') {
      local_24 = 0x7ed;
      local_14 = _DAT_006b2c38;
    }
    break;
  case 6:
    cVar3 = FUN_005da7b0();
    if (cVar3 == '\0') {
      local_24 = 0x7ee;
      local_14 = _DAT_006b2c38;
    }
    break;
  case 7:
    local_24 = 0x7ef;
    break;
  case 8:
    local_24 = 0x7f0;
    break;
  case 9:
    local_24 = 0x7f1;
  }
  iVar4 = DAT_007902f0;
  *(undefined4 *)(DAT_007902f0 + 0x10e0) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x10e4) = 0xffffffff;
  if (local_48 == 4) {
    if (local_20 == -1) {
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    if (local_4c == -1) {
      FUN_005cd7c0(local_20,*(undefined4 *)(DAT_0162ee80 + 4),0);
      return;
    }
    FUN_005cd700(local_20,local_4c,*(undefined4 *)(DAT_0162ee80 + 4),0);
    return;
  }
  if (local_24 == -1) goto LAB_00405118;
  iVar4 = FUN_00636730();
  if (iVar4 == 0) goto LAB_00405118;
  if (local_48 < 0) goto LAB_00405137;
  FUN_005dcb00(local_48);
  piVar5 = (int *)FUN_0063aac0();
  if (*piVar5 == 2) {
LAB_00405103:
    bVar2 = true;
  }
  else {
    piVar5 = (int *)FUN_0063aac0();
    if (*piVar5 == 3) goto LAB_00405103;
    bVar2 = false;
  }
  if (!bVar2) {
LAB_00405137:
    if (local_48 == -1) {
      local_d8 = FUN_00636c50();
    }
    else {
      local_d8 = local_48;
    }
    local_44 = local_d8;
    local_40 = local_24;
    local_3c = local_50;
    local_34 = local_1c;
    local_2c = local_14;
    uVar8 = 1;
    uVar6 = FUN_00637810(2);
    FUN_00639390(&local_44,*(undefined4 *)(DAT_0162ee80 + 4),uVar6,uVar8);
    return;
  }
LAB_00405118:
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
  return;
}

