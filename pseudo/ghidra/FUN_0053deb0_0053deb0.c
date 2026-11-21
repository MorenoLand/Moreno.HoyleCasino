// FUN_0053deb0  0053deb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053deb0(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  CPane *pCVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CSize *pCVar9;
  int local_158;
  int local_14c;
  int local_140;
  int local_134;
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
  local_24 = -1;
  local_50 = 0xffffffff;
  local_1c = 0;
  local_14 = 0x3ff0000000000000;
  local_8 = *(int *)(DAT_007933ec + 0xe8);
  local_20 = -1;
  local_c = -1;
  local_54 = -1;
  local_48 = 0;
  local_4c = *(int *)(DAT_007933ec + 0x104);
  switch(*(undefined4 *)(DAT_007933ec + 0x100)) {
  case 0:
    local_24 = 0x82e;
    local_14 = _DAT_006b2c40;
    break;
  case 1:
    local_24 = 0x803;
    local_14 = _DAT_006b2c40;
    break;
  case 2:
    pCVar9 = (CSize *)&local_5c;
    pCVar4 = (CPane *)FUN_005dcb00(local_8);
    CPane::GetMinSize(pCVar4,pCVar9);
    iVar5 = FUN_005dcb00(local_8);
    if (3 < *(int *)(iVar5 + 0x4a8)) {
      iVar5 = FUN_0062fbf0(2);
      if (iVar5 == 0) {
        FUN_005dcb00(local_8);
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 2) {
LAB_0053e010:
          bVar1 = 1;
        }
        else {
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 3) goto LAB_0053e010;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 0x14) + 0x400;
        local_14 = _DAT_006b2c40;
        break;
      }
    }
    iVar5 = FUN_005dcb00(local_8);
    if (*(int *)(iVar5 + 0x4a8) < -3) {
      iVar5 = FUN_0062fbf0(2);
      if (iVar5 == 0) {
        FUN_005dcb00(local_8);
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 2) {
LAB_0053e0a3:
          bVar1 = 1;
        }
        else {
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 3) goto LAB_0053e0a3;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 10) + 0x3ff;
        local_14 = _DAT_006b2c40;
        break;
      }
    }
    if (*(char *)(DAT_007933ec + local_8 + 0xfb) == '\0') {
      cVar3 = FUN_00541de0(local_8);
      if (cVar3 != '\0') {
        FUN_005dcb00(local_8);
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 2) {
LAB_0053e1cf:
          bVar2 = true;
        }
        else {
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 3) goto LAB_0053e1cf;
          bVar2 = false;
        }
        if ((!bVar2) && ((int)local_5c < 0)) {
          local_24 = 0x82d;
          local_14 = 0x3ff0000000000000;
          break;
        }
      }
      if (-1 < (int)local_5c) {
        if ((int)local_5c < 1) break;
        FUN_005dcb00(local_8);
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 2) {
LAB_0053e2ea:
          bVar1 = 1;
        }
        else {
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 3) goto LAB_0053e2ea;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 0xffffffec) + 0x404;
        local_14 = _DAT_006b2c38;
        break;
      }
      FUN_005dcb00(local_8);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0053e25b:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0053e25b;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0xffffffe6) + 0x402;
      local_14 = _DAT_006b2c38;
    }
    else {
      FUN_005dcb00(local_8);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0053e135:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0053e135;
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
        pCVar4 = (CPane *)FUN_005dcb00(local_c);
        CPane::GetMinSize(pCVar4,pCVar9);
      }
      if ((local_c != -1) && (0 < (int)local_5c)) {
        iVar5 = FUN_0062fbf0(2);
        if (iVar5 == 0) {
          FUN_005dcb00(local_c);
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 2) {
LAB_0053e4fd:
            bVar2 = true;
          }
          else {
            piVar6 = (int *)FUN_0063aac0();
            if (*piVar6 == 3) goto LAB_0053e4fd;
            bVar2 = false;
          }
          if (bVar2) {
            local_140 = -1;
          }
          else {
            local_140 = local_c;
          }
          local_4c = local_140;
          FUN_005dcb00(local_c);
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 2) {
LAB_0053e586:
            bVar1 = 1;
          }
          else {
            piVar6 = (int *)FUN_0063aac0();
            if (*piVar6 == 3) goto LAB_0053e586;
            bVar1 = 0;
          }
          local_24 = (-(uint)bVar1 & 0x19) + 0x3f2;
          local_14 = _DAT_006b2c38;
          break;
        }
      }
      if (local_54 == -1) break;
      FUN_005dcb00(local_54);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0053e615:
        bVar2 = true;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0053e615;
        bVar2 = false;
      }
      if (bVar2) {
        local_14c = -1;
      }
      else {
        local_14c = local_54;
      }
      local_4c = local_14c;
      FUN_005dcb00(local_54);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0053e69e:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0053e69e;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x19) + 0x3f3;
      local_14 = _DAT_006b2c38;
    }
    else {
      FUN_005dcb00(local_c);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0053e3b0:
        bVar2 = true;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0053e3b0;
        bVar2 = false;
      }
      if (bVar2) {
        local_134 = -1;
      }
      else {
        local_134 = local_c;
      }
      local_4c = local_134;
      FUN_005dcb00(local_c);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0053e439:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0053e439;
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
    break;
  case 6:
    cVar3 = FUN_00541790();
    if (cVar3 == '\0') {
      local_20 = 0x29828;
    }
    else {
      local_20 = 0x2982b;
      cVar3 = FUN_00541740();
      if (cVar3 == '\0') {
        local_48 = FUN_0062fc30(1,2);
      }
      else {
        local_48 = FUN_0062fc30(0,2);
      }
      iVar5 = DAT_007933ec;
      *(undefined4 *)(DAT_007933ec + 0x100) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x104) = 0xffffffff;
      if (local_4c == 4) {
        FUN_005cd700(local_20,local_48,*(undefined4 *)(DAT_0162ee80 + 4),0);
        return;
      }
    }
    break;
  case 7:
    local_20 = 0x2982e;
  }
  iVar5 = DAT_007933ec;
  *(undefined4 *)(DAT_007933ec + 0x100) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x104) = 0xffffffff;
  if (local_4c == 4) {
    if (local_20 == -1) {
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    FUN_005cd7c0(local_20,*(undefined4 *)(DAT_0162ee80 + 4),0);
    return;
  }
  if (local_24 == -1) goto LAB_0053e8a8;
  iVar5 = FUN_00636730();
  if (iVar5 == 0) goto LAB_0053e8a8;
  if (local_4c < 0) goto LAB_0053e8cb;
  FUN_005dcb00(local_4c);
  piVar6 = (int *)FUN_0063aac0();
  if (*piVar6 == 2) {
LAB_0053e893:
    bVar2 = true;
  }
  else {
    piVar6 = (int *)FUN_0063aac0();
    if (*piVar6 == 3) goto LAB_0053e893;
    bVar2 = false;
  }
  if (!bVar2) {
LAB_0053e8cb:
    if (local_4c == -1) {
      local_158 = FUN_00636c50();
    }
    else {
      local_158 = local_4c;
    }
    local_44 = local_158;
    local_40 = local_24;
    local_3c = local_50;
    local_34 = local_1c;
    local_2c = local_14;
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
    uVar8 = 1;
    uVar7 = FUN_00637810(2);
    FUN_00639390(&local_44,*(undefined4 *)(DAT_0162ee80 + 4),uVar7,uVar8);
    return;
  }
LAB_0053e8a8:
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
  return;
}

