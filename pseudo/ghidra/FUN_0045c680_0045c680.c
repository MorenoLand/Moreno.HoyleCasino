// FUN_0045c680  0045c680

/* WARNING: Removing unreachable block (ram,0x0045d040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c680(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int local_130;
  char local_f9;
  char local_f8;
  int local_5c;
  int local_50;
  byte local_45;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  int local_24;
  int local_20;
  undefined8 local_1c;
  undefined8 local_14;
  char local_9;
  int local_8;
  
  local_24 = -1;
  local_20 = -1;
  local_5c = -1;
  local_1c = 0;
  local_14 = 0x3ff0000000000000;
  local_8 = *(int *)(DAT_00790738 + 0x104);
  if ((local_8 < 0) || (3 < local_8)) {
    local_f9 = '\0';
  }
  else {
    FUN_005dcb00(local_8);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      local_f8 = '\x01';
    }
    else {
      local_f8 = '\0';
    }
    local_f9 = local_f8;
  }
  local_9 = local_f9;
  local_45 = 1;
  local_50 = *(int *)(DAT_00790738 + 0x128);
  switch(*(undefined4 *)(DAT_00790738 + 0x124)) {
  case 0:
    local_45 = 0;
    FUN_005dcb00(local_8);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      cVar3 = FUN_0044eaf0(local_8);
      if (cVar3 != '\0') {
        local_20 = 0x7f3;
        local_5c = 0x404;
        local_1c = _DAT_006b3e40;
        local_14 = _DAT_006b2c40;
      }
      cVar3 = FUN_0044ebc0(local_8);
      if (cVar3 != '\0') {
        local_20 = 0x7f4;
        local_5c = 0x402;
        local_1c = _DAT_006b3e40;
        local_14 = _DAT_006b2c40;
      }
    }
    break;
  case 1:
    cVar3 = FUN_005db190();
    if (cVar3 == '\0') {
      if (2 < *(int *)(DAT_007947e0 + 0x4ef8)) {
        iVar7 = FUN_005dada0();
        iVar5 = FUN_005dac90();
        if ((iVar5 == -1) || (iVar6 = FUN_004605c0(iVar5), iVar6 != 1)) {
          if ((iVar7 != -1) && (iVar5 = FUN_004605c0(iVar7), iVar5 == 0)) {
            FUN_005dcb00(iVar7);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) {
              local_50 = iVar7;
            }
            FUN_005dcb00(iVar7);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar2 = 1;
            }
            else {
              bVar2 = 0;
            }
            local_20 = (-(uint)bVar2 & 0x19) + 0x3f3;
            local_14 = _DAT_006b2c38;
          }
        }
        else {
          FUN_005dcb00(iVar5);
          piVar4 = (int *)FUN_0063aac0();
          if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) {
            local_50 = iVar5;
          }
          FUN_005dcb00(iVar5);
          piVar4 = (int *)FUN_0063aac0();
          if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
            bVar2 = 1;
          }
          else {
            bVar2 = 0;
          }
          local_20 = (-(uint)bVar2 & 0x19) + 0x3f2;
          local_14 = _DAT_006b2c38;
        }
      }
    }
    else {
      iVar7 = FUN_005dac90();
      if (iVar7 != -1) {
        uVar8 = FUN_005dac90();
        FUN_005dcb00(uVar8);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_20 = 0x412;
        }
        else {
          local_50 = FUN_005dac90();
          local_20 = 0x3fd;
        }
        local_14 = 0x3ff0000000000000;
      }
    }
    break;
  case 2:
    if ((local_8 != 4) && (local_8 != -1)) {
      cVar3 = FUN_0044eaf0(local_8);
      if ((cVar3 == '\0') || (iVar7 = FUN_004605c0(local_8), iVar7 != 0)) {
        cVar3 = FUN_0044ebc0(local_8);
        if ((cVar3 == '\0') || (iVar7 = FUN_004605c0(local_8), iVar7 != 1)) {
          iVar7 = FUN_004605c0(local_8);
          if (iVar7 == 1) {
            local_20 = (-(uint)(local_9 != '\0') & 0xfffffff4) + 0x3fc;
            local_5c = (-(uint)(local_9 != '\0') & 0xfffffbfb) + 0x404;
            local_1c = _DAT_006b2c38;
            local_14 = _DAT_006b2c38;
          }
          else {
            iVar7 = FUN_004605c0(local_8);
            if (iVar7 == 0) {
              if (local_9 != '\0') {
                FUN_005dcb00(local_8);
                iVar7 = FUN_005d5a50();
                iVar5 = (**(code **)(*DAT_00790734 + 0x2b0))();
                if (iVar5 < iVar7) {
                  FUN_005dcb00(local_8);
                  iVar7 = FUN_005d5a50();
                  iVar5 = (**(code **)(*DAT_00790734 + 0x2b0))();
                  if (iVar7 < iVar5 * 10) {
                    local_20 = 0x410;
                    local_14 = _DAT_006b2c40;
                    break;
                  }
                }
              }
              FUN_005dcb00(local_8);
              iVar7 = FUN_005d5a50();
              if (iVar7 == 0) {
                FUN_005dcb00(local_8);
                iVar7 = FUN_005d5a70();
                if (iVar7 == 0) {
                  if (local_9 == '\0') {
                    local_20 = 0x3f5;
                  }
                  else {
                    local_20 = 0x40e;
                  }
                  local_14 = _DAT_006b2c40;
                  break;
                }
              }
              FUN_005dcb00(local_8);
              piVar4 = (int *)FUN_0063aac0();
              if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
                bVar2 = 1;
              }
              else {
                bVar2 = 0;
              }
              local_20 = (-(uint)bVar2 & 0xffffffe6) + 0x402;
              local_14 = _DAT_006b2c38;
              local_1c = _DAT_006b2c38;
            }
          }
        }
        else {
          local_20 = (-(uint)(local_9 != '\0') & 4) + 0x7f8;
          local_5c = (-(uint)(local_9 != '\0') & 0x19) + 0x3f4;
          local_1c = _DAT_006b3e40;
          local_14 = _DAT_006b2c40;
        }
      }
      else {
        FUN_005dcb00(local_8);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        local_20 = (-(uint)bVar2 & 4) + 0x7f5;
        FUN_005dcb00(local_8);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        local_5c = (-(uint)bVar2 & 0x19) + 0x3f6;
        local_1c = _DAT_006b3e40;
        local_14 = _DAT_006b2c40;
      }
    }
    break;
  case 3:
    local_24 = 0xcb52;
    break;
  case 4:
    if (*(int *)(DAT_00790738 + 0x10c) == 4) {
      cVar3 = FUN_0044eaf0(4);
      if (cVar3 != '\0') {
        local_24 = 0xcc33;
      }
      cVar3 = FUN_0044ebc0(4);
      if (cVar3 != '\0') {
        local_24 = 0xcc4c;
      }
    }
    break;
  case 5:
    if (*(int *)(DAT_00790738 + 0x10c) == 4) {
      iVar7 = FUN_004605c0(local_8);
      if (iVar7 == 0) {
        local_24 = 0xcb6b;
      }
      else if (iVar7 == 1) {
        local_24 = 0xcc01;
      }
      else if (iVar7 == 2) {
        local_24 = 0xcbcf;
      }
    }
  }
  iVar7 = DAT_00790738;
  *(undefined4 *)(DAT_00790738 + 0x124) = 0xffffffff;
  *(undefined4 *)(iVar7 + 0x128) = 0xffffffff;
  if (local_50 == 4) {
    if (local_24 == -1) {
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    FUN_005cd7c0(local_24,*(undefined4 *)(DAT_0162ee80 + 4),0);
    return;
  }
  if ((local_20 == -1) || (iVar7 = FUN_00636730(), iVar7 == 0)) {
LAB_0045d0f4:
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
  }
  else {
    if (-1 < local_50) {
      FUN_005dcb00(local_50);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) goto LAB_0045d0f4;
    }
    if (local_50 == -1) {
      local_130 = FUN_00636c50();
    }
    else {
      local_130 = local_50;
    }
    local_44 = local_130;
    local_40 = local_20;
    local_3c = local_5c;
    local_34 = local_1c;
    local_2c = local_14;
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
    uVar9 = (uint)local_45;
    uVar8 = FUN_00637810(2);
    FUN_00639390(&local_44,*(undefined4 *)(DAT_0162ee80 + 4),uVar8,uVar9);
  }
  return;
}

