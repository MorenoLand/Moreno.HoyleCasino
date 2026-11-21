// FUN_004230d0  004230d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004230d0(void)

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
  int local_174;
  int local_168;
  int local_15c;
  int local_150;
  undefined8 local_5c;
  int local_54;
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
  int local_c;
  int local_8;
  
  local_5c = FUN_0064c8a0(0,0);
  local_24 = -1;
  local_50 = 0xffffffff;
  local_1c = 0;
  local_14 = 0x3ff0000000000000;
  local_8 = *(int *)(DAT_00790358 + 0xa0);
  local_20 = -1;
  local_4c = -1;
  local_c = -1;
  local_54 = -1;
  local_48 = *(int *)(DAT_00790358 + 0xe4);
  switch(*(undefined4 *)(DAT_00790358 + 0xe0)) {
  case 0:
    local_24 = 0x7dd;
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
    cVar3 = FUN_004275a0(local_8);
    if (cVar3 == '\0') {
      cVar3 = FUN_00427600(local_8);
      if (cVar3 == '\0') {
        cVar3 = FUN_00427670(local_8);
        if (cVar3 == '\0') {
          iVar5 = FUN_005dcb00(local_8);
          if (3 < *(int *)(iVar5 + 0x4a8)) {
            iVar5 = FUN_0062fbf0(2);
            if (iVar5 == 0) {
              FUN_005dcb00(local_8);
              piVar6 = (int *)FUN_0063aac0();
              if (*piVar6 == 2) {
LAB_004233eb:
                bVar1 = 1;
              }
              else {
                piVar6 = (int *)FUN_0063aac0();
                if (*piVar6 == 3) goto LAB_004233eb;
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
LAB_0042349b:
                bVar1 = 1;
              }
              else {
                piVar6 = (int *)FUN_0063aac0();
                if (*piVar6 == 3) goto LAB_0042349b;
                bVar1 = 0;
              }
              local_24 = (-(uint)bVar1 & 10) + 0x3ff;
              local_14 = _DAT_006b2c40;
              break;
            }
          }
          if (*(char *)(DAT_00790358 + local_8 + 0xd0) == '\0') {
            if (-1 < (int)local_5c) {
              if ((int)local_5c < 1) break;
              FUN_005dcb00(local_8);
              piVar6 = (int *)FUN_0063aac0();
              if (*piVar6 == 2) {
LAB_00423650:
                bVar1 = 1;
              }
              else {
                piVar6 = (int *)FUN_0063aac0();
                if (*piVar6 == 3) goto LAB_00423650;
                bVar1 = 0;
              }
              local_24 = (-(uint)bVar1 & 0xffffffec) + 0x404;
              local_14 = _DAT_006b2c38;
              break;
            }
            FUN_005dcb00(local_8);
            piVar6 = (int *)FUN_0063aac0();
            if (*piVar6 == 2) {
LAB_004235c1:
              bVar1 = 1;
            }
            else {
              piVar6 = (int *)FUN_0063aac0();
              if (*piVar6 == 3) goto LAB_004235c1;
              bVar1 = 0;
            }
            local_24 = (-(uint)bVar1 & 0xffffffe6) + 0x402;
            local_14 = _DAT_006b2c38;
            break;
          }
          FUN_005dcb00(local_8);
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 2) {
LAB_00423537:
            bVar1 = 1;
          }
          else {
            piVar6 = (int *)FUN_0063aac0();
            if (*piVar6 == 3) goto LAB_00423537;
            bVar1 = 0;
          }
          local_24 = (-(uint)bVar1 & 0x15) + 0x3fe;
          local_14 = 0x3ff0000000000000;
          break;
        }
        FUN_005dcb00(local_8);
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 2) {
LAB_0042333c:
          bVar1 = 1;
        }
        else {
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 3) goto LAB_0042333c;
          bVar1 = 0;
        }
        local_24 = (-(uint)bVar1 & 0xfffffc2f) + 0x7de;
        local_14 = 0x3ff0000000000000;
        break;
      }
      FUN_005dcb00(local_8);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_004232a8:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_004232a8;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0xfffff81f) + 0x7e0;
      local_14 = 0x3ff0000000000000;
    }
    else {
      FUN_005dcb00(local_8);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_00423223:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_00423223;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0xfffff820) + 0x7df;
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
LAB_00423863:
            bVar2 = true;
          }
          else {
            piVar6 = (int *)FUN_0063aac0();
            if (*piVar6 == 3) goto LAB_00423863;
            bVar2 = false;
          }
          if (bVar2) {
            local_15c = -1;
          }
          else {
            local_15c = local_c;
          }
          local_48 = local_15c;
          FUN_005dcb00(local_c);
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 2) {
LAB_004238ec:
            bVar1 = 1;
          }
          else {
            piVar6 = (int *)FUN_0063aac0();
            if (*piVar6 == 3) goto LAB_004238ec;
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
LAB_0042397b:
        bVar2 = true;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0042397b;
        bVar2 = false;
      }
      if (bVar2) {
        local_168 = -1;
      }
      else {
        local_168 = local_54;
      }
      local_48 = local_168;
      FUN_005dcb00(local_54);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_00423a04:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_00423a04;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x19) + 0x3f3;
      local_14 = _DAT_006b2c38;
    }
    else {
      FUN_005dcb00(local_c);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_00423716:
        bVar2 = true;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_00423716;
        bVar2 = false;
      }
      if (bVar2) {
        local_150 = -1;
      }
      else {
        local_150 = local_c;
      }
      local_48 = local_150;
      FUN_005dcb00(local_c);
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_0042379f:
        bVar1 = 1;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_0042379f;
        bVar1 = 0;
      }
      local_24 = (-(uint)bVar1 & 0x15) + 0x3fd;
      local_14 = 0x3ff0000000000000;
    }
    break;
  case 4:
    iVar5 = FUN_0062fbf0(5);
    if (iVar5 == 1) {
      local_20 = 0x2981f;
    }
    else {
      local_20 = 170000;
    }
    break;
  case 5:
    local_20 = 0x29816;
    break;
  case 6:
    local_20 = 0x29822;
    break;
  case 7:
    local_20 = 0x29825;
  }
  iVar5 = DAT_00790358;
  *(undefined4 *)(DAT_00790358 + 0xe0) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0xe4) = 0xffffffff;
  if (local_48 == 4) {
    if (local_20 == -1) {
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    if (local_20 == 7) {
      *(undefined1 *)(*(int *)(DAT_00790360 + 0x38) + 400) = 1;
    }
    if (local_4c == -1) {
      FUN_005cd7c0(local_20,*(undefined4 *)(DAT_0162ee80 + 4),0);
      return;
    }
    FUN_005cd700(local_20,local_4c,*(undefined4 *)(DAT_0162ee80 + 4),0);
    return;
  }
  if (local_24 == -1) goto LAB_00423bb7;
  iVar5 = FUN_00636730();
  if (iVar5 == 0) goto LAB_00423bb7;
  if (local_48 < 0) goto LAB_00423bd8;
  FUN_005dcb00(local_48);
  piVar6 = (int *)FUN_0063aac0();
  if (*piVar6 == 2) {
LAB_00423ba2:
    bVar2 = true;
  }
  else {
    piVar6 = (int *)FUN_0063aac0();
    if (*piVar6 == 3) goto LAB_00423ba2;
    bVar2 = false;
  }
  if (!bVar2) {
LAB_00423bd8:
    if (local_48 == -1) {
      local_174 = FUN_00636c50();
    }
    else {
      local_174 = local_48;
    }
    local_44 = local_174;
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
LAB_00423bb7:
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
  return;
}

