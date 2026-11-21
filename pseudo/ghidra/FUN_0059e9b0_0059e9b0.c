// FUN_0059e9b0  0059e9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059e9b0(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  CPane *pCVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  CSize *pCVar9;
  int local_13c;
  int local_130;
  int local_124;
  int local_118;
  undefined8 local_5c;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  int local_24;
  int local_20;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_5c = FUN_0064c8a0(0,0);
  local_4c = 0xffffffff;
  local_24 = -1;
  local_50 = 0xffffffff;
  local_1c = 0;
  local_14 = 0x3ff0000000000000;
  local_8 = FUN_005a2020();
  local_20 = -1;
  local_c = -1;
  local_54 = -1;
  local_48 = 0;
  local_4c = FUN_005a2720();
  uVar4 = FUN_005a2260();
  switch(uVar4) {
  case 0:
    local_24 = 0x82e;
    local_14 = _DAT_006b2c40;
    break;
  case 1:
    local_24 = 0x7fd;
    local_14 = _DAT_006b2c40;
    break;
  case 2:
    pCVar9 = (CSize *)&local_5c;
    pCVar5 = (CPane *)FUN_005dcb00(local_8);
    CPane::GetMinSize(pCVar5,pCVar9);
    iVar6 = FUN_005dcb00(local_8);
    if (3 < *(int *)(iVar6 + 0x4a8)) {
      iVar6 = FUN_0062fbf0(2);
      if (iVar6 == 0) {
        FUN_005dcb00(local_8);
        piVar7 = (int *)FUN_0063aac0();
        if (*piVar7 == 2) {
LAB_0059eb04:
          bVar1 = 1;
        }
        else {
          piVar7 = (int *)FUN_0063aac0();
          if (*piVar7 == 3) goto LAB_0059eb04;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 0x14) + 0x400;
        local_14 = _DAT_006b2c40;
        break;
      }
    }
    iVar6 = FUN_005dcb00(local_8);
    if (*(int *)(iVar6 + 0x4a8) < -3) {
      iVar6 = FUN_0062fbf0(2);
      if (iVar6 == 0) {
        FUN_005dcb00(local_8);
        piVar7 = (int *)FUN_0063aac0();
        if (*piVar7 == 2) {
LAB_0059eb96:
          bVar1 = 1;
        }
        else {
          piVar7 = (int *)FUN_0063aac0();
          if (*piVar7 == 3) goto LAB_0059eb96;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 10) + 0x3ff;
        local_14 = _DAT_006b2c40;
        break;
      }
    }
    if (*(char *)(DAT_007935d0 + local_8 + 0x104) == '\0') {
      if (-1 < (int)local_5c) {
        if ((int)local_5c < 1) break;
        FUN_005dcb00(local_8);
        piVar7 = (int *)FUN_0063aac0();
        if (*piVar7 == 2) {
LAB_0059ed3b:
          bVar1 = 1;
        }
        else {
          piVar7 = (int *)FUN_0063aac0();
          if (*piVar7 == 3) goto LAB_0059ed3b;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 0xffffffec) + 0x404;
        local_14 = _DAT_006b2c38;
        break;
      }
      FUN_005dcb00(local_8);
      piVar7 = (int *)FUN_0063aac0();
      if (*piVar7 == 2) {
LAB_0059ecad:
        bVar1 = 1;
      }
      else {
        piVar7 = (int *)FUN_0063aac0();
        if (*piVar7 == 3) goto LAB_0059ecad;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0xffffffe6) + 0x402;
      local_14 = _DAT_006b2c38;
    }
    else {
      FUN_005dcb00(local_8);
      piVar7 = (int *)FUN_0063aac0();
      if (*piVar7 == 2) {
LAB_0059ec22:
        bVar1 = 1;
      }
      else {
        piVar7 = (int *)FUN_0063aac0();
        if (*piVar7 == 3) goto LAB_0059ec22;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x15) + 0x3fe;
      local_14 = 0x3ff0000000000000;
    }
    break;
  case 3:
    local_c = FUN_005dac90();
    local_54 = FUN_005dada0();
    cVar3 = FUN_005db190();
    if ((cVar3 == '\0') || (local_c == -1)) {
      if (local_c != -1) {
        pCVar9 = (CSize *)&local_5c;
        pCVar5 = (CPane *)FUN_005dcb00(local_c);
        CPane::GetMinSize(pCVar5,pCVar9);
      }
      if ((local_c != -1) && (0 < (int)local_5c)) {
        iVar6 = FUN_0062fbf0(2);
        if (iVar6 == 0) {
          FUN_005dcb00(local_c);
          piVar7 = (int *)FUN_0063aac0();
          if (*piVar7 == 2) {
LAB_0059ef4d:
            bVar2 = true;
          }
          else {
            piVar7 = (int *)FUN_0063aac0();
            if (*piVar7 == 3) goto LAB_0059ef4d;
            bVar2 = false;
          }
          if (bVar2) {
            local_124 = -1;
          }
          else {
            local_124 = local_c;
          }
          local_4c = local_124;
          FUN_005dcb00(local_c);
          piVar7 = (int *)FUN_0063aac0();
          if (*piVar7 == 2) {
LAB_0059efd6:
            bVar1 = 1;
          }
          else {
            piVar7 = (int *)FUN_0063aac0();
            if (*piVar7 == 3) goto LAB_0059efd6;
            bVar1 = 0;
          }
          local_24 = (-(uint)bVar1 & 0x19) + 0x3f2;
          local_14 = _DAT_006b2c38;
          break;
        }
      }
      if (local_54 == -1) break;
      FUN_005dcb00(local_54);
      piVar7 = (int *)FUN_0063aac0();
      if (*piVar7 == 2) {
LAB_0059f064:
        bVar2 = true;
      }
      else {
        piVar7 = (int *)FUN_0063aac0();
        if (*piVar7 == 3) goto LAB_0059f064;
        bVar2 = false;
      }
      if (bVar2) {
        local_130 = -1;
      }
      else {
        local_130 = local_54;
      }
      local_4c = local_130;
      FUN_005dcb00(local_54);
      piVar7 = (int *)FUN_0063aac0();
      if (*piVar7 == 2) {
LAB_0059f0ed:
        bVar1 = 1;
      }
      else {
        piVar7 = (int *)FUN_0063aac0();
        if (*piVar7 == 3) goto LAB_0059f0ed;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x19) + 0x3f3;
      local_14 = _DAT_006b2c38;
    }
    else {
      FUN_005dcb00(local_c);
      piVar7 = (int *)FUN_0063aac0();
      if (*piVar7 == 2) {
LAB_0059ee01:
        bVar2 = true;
      }
      else {
        piVar7 = (int *)FUN_0063aac0();
        if (*piVar7 == 3) goto LAB_0059ee01;
        bVar2 = false;
      }
      if (bVar2) {
        local_118 = -1;
      }
      else {
        local_118 = local_c;
      }
      local_4c = local_118;
      FUN_005dcb00(local_c);
      piVar7 = (int *)FUN_0063aac0();
      if (*piVar7 == 2) {
LAB_0059ee8a:
        bVar1 = 1;
      }
      else {
        piVar7 = (int *)FUN_0063aac0();
        if (*piVar7 == 3) goto LAB_0059ee8a;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x15) + 0x3fd;
      local_14 = 0x3ff0000000000000;
    }
    break;
  case 4:
    local_20 = 170000;
    break;
  case 5:
    local_20 = 0x29816;
  }
  FUN_005a3b40(0xffffffff,0xffffffff);
  if (local_4c == 4) {
    if (local_20 == -1) {
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    FUN_005cd7c0(local_20,*(undefined4 *)(DAT_0162ee80 + 4),0);
    return;
  }
  if (local_24 == -1) goto LAB_0059f217;
  iVar6 = FUN_00636730();
  if (iVar6 == 0) goto LAB_0059f217;
  if (local_4c < 0) goto LAB_0059f23a;
  FUN_005dcb00(local_4c);
  piVar7 = (int *)FUN_0063aac0();
  if (*piVar7 == 2) {
LAB_0059f202:
    bVar2 = true;
  }
  else {
    piVar7 = (int *)FUN_0063aac0();
    if (*piVar7 == 3) goto LAB_0059f202;
    bVar2 = false;
  }
  if (!bVar2) {
LAB_0059f23a:
    if (local_4c == -1) {
      local_13c = FUN_00636c50();
    }
    else {
      local_13c = local_4c;
    }
    local_44 = local_13c;
    local_40 = local_24;
    local_3c = local_50;
    local_34 = local_1c;
    local_2c = local_14;
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
    uVar8 = 1;
    uVar4 = FUN_00637810(2);
    FUN_00639390(&local_44,*(undefined4 *)(DAT_0162ee80 + 4),uVar4,uVar8);
    return;
  }
LAB_0059f217:
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
  return;
}

