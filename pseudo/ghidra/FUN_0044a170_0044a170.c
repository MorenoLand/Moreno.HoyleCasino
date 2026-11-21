// FUN_0044a170  0044a170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a170(void)

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
  int local_140;
  int local_134;
  int local_128;
  int local_11c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
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
  int local_c;
  int local_8;
  
  local_58 = FUN_0064c8a0(0,0);
  local_24 = -1;
  local_4c = 0xffffffff;
  local_1c = 0;
  local_14 = 0x3ff0000000000000;
  local_8 = *(int *)(DAT_00790710 + 0xc4);
  local_20 = -1;
  local_c = -1;
  local_50 = -1;
  local_48 = *(int *)(DAT_00790710 + 0xf8);
  switch(*(undefined4 *)(DAT_00790710 + 0xf4)) {
  case 0:
    local_24 = 0x7e8;
    local_14 = _DAT_006b2c40;
    break;
  case 1:
    local_24 = 0x7eb;
    local_14 = _DAT_006b2c40;
    break;
  case 2:
    pCVar9 = (CSize *)&local_58;
    pCVar4 = (CPane *)FUN_005dcb00(local_8);
    CPane::GetMinSize(pCVar4,pCVar9);
    iVar5 = FUN_005dcb00(local_8);
    if (3 < *(int *)(iVar5 + 0x4a8)) {
      iVar5 = FUN_0062fbf0(2);
      if (iVar5 == 0) {
        FUN_005dcb00(local_8);
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 2) {
LAB_0044a320:
          bVar1 = 1;
        }
        else {
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 3) goto LAB_0044a320;
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
LAB_0044a3b3:
          bVar1 = 1;
        }
        else {
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 3) goto LAB_0044a3b3;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 10) + 0x3ff;
        local_14 = _DAT_006b2c40;
        break;
      }
    }
    if (*(char *)(DAT_00790710 + local_8 + 0xec) == '\0') {
      if (-1 < (int)local_58) {
        if ((int)local_58 < 1) break;
        FUN_005dcb00(local_8);
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 2) {
LAB_0044a558:
          bVar1 = 1;
        }
        else {
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 3) goto LAB_0044a558;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 0xffffffec) + 0x404;
        local_14 = _DAT_006b2c38;
        break;
      }
      FUN_005dcb00(local_8);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0044a4c9:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0044a4c9;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0xffffffe6) + 0x402;
      local_14 = _DAT_006b2c38;
    }
    else {
      FUN_005dcb00(local_8);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0044a43f:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0044a43f;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x15) + 0x3fe;
      local_14 = 0x3ff0000000000000;
    }
    break;
  case 3:
    local_48 = FUN_0044d820();
    if (local_48 == -1) {
      local_48 = FUN_0044dc20();
      if (local_48 != -1) {
        local_24 = 0x7e9;
        local_14 = _DAT_006b2c40;
      }
    }
    else {
      local_24 = 0x7ea;
      local_14 = _DAT_006b2c40;
    }
    break;
  case 4:
    local_c = FUN_005dac90();
    local_50 = FUN_005dada0();
    cVar3 = FUN_005db190();
    if ((cVar3 == '\0') || (local_c == -1)) {
      if (local_c != -1) {
        pCVar9 = (CSize *)&local_58;
        pCVar4 = (CPane *)FUN_005dcb00(local_c);
        CPane::GetMinSize(pCVar4,pCVar9);
      }
      if ((local_c != -1) && (0 < (int)local_58)) {
        iVar5 = FUN_0062fbf0(2);
        if (iVar5 == 0) {
          FUN_005dcb00(local_c);
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 2) {
LAB_0044a76b:
            bVar2 = true;
          }
          else {
            piVar6 = (int *)FUN_0063aac0();
            if (*piVar6 == 3) goto LAB_0044a76b;
            bVar2 = false;
          }
          if (bVar2) {
            local_128 = -1;
          }
          else {
            local_128 = local_c;
          }
          local_48 = local_128;
          FUN_005dcb00(local_c);
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 2) {
LAB_0044a7f4:
            bVar1 = 1;
          }
          else {
            piVar6 = (int *)FUN_0063aac0();
            if (*piVar6 == 3) goto LAB_0044a7f4;
            bVar1 = 0;
          }
          local_24 = (-(uint)bVar1 & 0x19) + 0x3f2;
          local_14 = _DAT_006b2c38;
          break;
        }
      }
      if (local_50 == -1) break;
      FUN_005dcb00(local_50);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0044a883:
        bVar2 = true;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0044a883;
        bVar2 = false;
      }
      if (bVar2) {
        local_134 = -1;
      }
      else {
        local_134 = local_50;
      }
      local_48 = local_134;
      FUN_005dcb00(local_50);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0044a90c:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0044a90c;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x19) + 0x3f3;
      local_14 = _DAT_006b2c38;
    }
    else {
      FUN_005dcb00(local_c);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0044a61e:
        bVar2 = true;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0044a61e;
        bVar2 = false;
      }
      if (bVar2) {
        local_11c = -1;
      }
      else {
        local_11c = local_c;
      }
      local_48 = local_11c;
      FUN_005dcb00(local_c);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0044a6a7:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0044a6a7;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x15) + 0x3fd;
      local_14 = 0x3ff0000000000000;
    }
    break;
  case 5:
    local_20 = 170000;
    break;
  case 6:
    local_20 = 0x29816;
  }
  iVar5 = DAT_00790710;
  *(undefined4 *)(DAT_00790710 + 0xf4) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0xf8) = 0xffffffff;
  if (local_48 == 4) {
    if (local_20 == -1) {
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    FUN_005cd7c0(local_20,*(undefined4 *)(DAT_0162ee80 + 4),0);
    return;
  }
  if (local_24 == -1) goto LAB_0044aa53;
  iVar5 = FUN_00636730();
  if (iVar5 == 0) goto LAB_0044aa53;
  if (local_48 < 0) goto LAB_0044aa76;
  FUN_005dcb00(local_48);
  piVar6 = (int *)FUN_0063aac0();
  if (*piVar6 == 2) {
LAB_0044aa3e:
    bVar2 = true;
  }
  else {
    piVar6 = (int *)FUN_0063aac0();
    if (*piVar6 == 3) goto LAB_0044aa3e;
    bVar2 = false;
  }
  if (!bVar2) {
LAB_0044aa76:
    if (local_48 == -1) {
      local_140 = FUN_00636c50();
    }
    else {
      local_140 = local_48;
    }
    local_44 = local_140;
    local_40 = local_24;
    local_3c = local_4c;
    local_34 = local_1c;
    local_2c = local_14;
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
    uVar8 = 1;
    uVar7 = FUN_00637810(2);
    FUN_00639390(&local_44,*(undefined4 *)(DAT_0162ee80 + 4),uVar7,uVar8);
    return;
  }
LAB_0044aa53:
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
  return;
}

