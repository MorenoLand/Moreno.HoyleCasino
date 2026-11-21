// FUN_00524ec0  00524ec0

/* WARNING: Removing unreachable block (ram,0x00525a95) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524ec0(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_184;
  int local_178;
  int local_15c;
  int local_148;
  int local_60;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_3c;
  double local_34;
  int local_2c;
  int local_28;
  undefined8 local_24;
  int local_18;
  double local_14;
  int local_c;
  undefined4 local_8;
  
  local_2c = -1;
  local_28 = -1;
  local_60 = -1;
  local_24 = 0;
  local_14 = _DAT_006b2c38;
  local_8 = *(undefined4 *)(DAT_00793374 + 0xd38);
  local_c = -1;
  iVar4 = (**(code **)(*DAT_00793370 + 0x2b0))();
  local_18 = (**(code **)(*DAT_00793370 + 0x2b0))();
  iVar6 = DAT_00793374;
  local_18 = local_18 * 5;
  local_50 = *(int *)(DAT_00793374 + 0xdb4);
  switch(*(undefined4 *)(DAT_00793374 + 0xdb0)) {
  case 0:
    local_28 = FUN_00525c10(local_50);
    cVar3 = FUN_005da7b0();
    if ((cVar3 != '\0') && (iVar6 = FUN_0062fbf0(10), 4 < iVar6)) {
      cVar3 = (**(code **)(*DAT_00793370 + 0x2c8))(local_8);
      if (cVar3 != '\0') {
        FUN_005dcb00(local_8);
        cVar3 = FUN_005d5920();
        if (cVar3 != '\0') {
          local_14 = _DAT_006b2c40;
          FUN_005dcb00(local_8);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_28 = (-(uint)bVar1 & 0x19) + 0x3f2;
          break;
        }
      }
      cVar3 = (**(code **)(*DAT_00793370 + 0x2cc))(local_8);
      if (cVar3 != '\0') {
        FUN_005dcb00(local_8);
        cVar3 = FUN_005d58d0();
        if (cVar3 != '\0') {
          local_14 = _DAT_006b2c40;
          FUN_005dcb00(local_8);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_28 = (-(uint)bVar1 & 0x19) + 0x3f3;
          break;
        }
      }
    }
    cVar3 = FUN_00528240(local_8);
    if (cVar3 != '\0') {
      FUN_005dcb00(local_8);
      piVar7 = (int *)FUN_0063aac0();
      if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      local_28 = (-(uint)bVar1 & 0x19) + 0x3f7;
    }
    break;
  case 1:
    iVar6 = FUN_00528660();
    local_c = FUN_00528770();
    if ((iVar6 == -1) || (iVar5 = FUN_005dcb00(iVar6), *(int *)(iVar5 + 0x4cc) <= local_18)) {
      if ((local_c == -1) || (iVar5 = FUN_005dcb00(local_c), -local_18 <= *(int *)(iVar5 + 0x4cc)))
      {
        if ((iVar6 == -1) || (iVar4 = FUN_005dcb00(iVar6), *(int *)(iVar4 + 0x4a8) < 4)) {
          if ((local_c != -1) && (iVar6 = FUN_005dcb00(local_c), *(int *)(iVar6 + 0x4a8) < -3)) {
            FUN_005dcb00(local_c);
            piVar7 = (int *)FUN_0063aac0();
            if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (!bVar2) {
              local_28 = 0x3ff;
              local_60 = 0x3f1;
              local_24 = _DAT_006be6f8;
              local_14 = _DAT_006b2c40;
            }
          }
        }
        else {
          FUN_005dcb00(iVar6);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_28 = (-(uint)bVar1 & 0x14) + 0x400;
          local_14 = _DAT_006b2c40;
        }
      }
      else {
        iVar6 = FUN_005dcb00(local_c);
        if (*(int *)(iVar6 + 0x4cc) < iVar4 * -10) {
          local_14 = 1.0;
        }
        if (local_14 == 1.0) {
          FUN_005dcb00(local_c);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            local_15c = -1;
          }
          else {
            local_15c = local_c;
          }
          local_50 = local_15c;
          FUN_005dcb00(local_c);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_28 = (-(uint)bVar1 & 8) + 0x401;
          FUN_005dcb00(local_c);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_60 = (-(uint)bVar1 & 0x19) + 0x3f6;
          local_24 = _DAT_006b3e38;
        }
        else {
          FUN_005dcb00(local_c);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_28 = (-(uint)bVar1 & 0xffffffe6) + 0x402;
          local_14 = _DAT_006b2c40;
        }
      }
    }
    else {
      iVar5 = FUN_005dcb00(iVar6);
      if (iVar4 * 10 < *(int *)(iVar5 + 0x4cc)) {
        local_14 = 1.0;
      }
      if (local_14 == 1.0) {
        FUN_005dcb00(iVar6);
        piVar7 = (int *)FUN_0063aac0();
        if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        local_148 = iVar6;
        if (bVar2) {
          local_148 = -1;
        }
        local_50 = local_148;
        FUN_005dcb00(iVar6);
        piVar7 = (int *)FUN_0063aac0();
        if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
          bVar1 = 1;
        }
        else {
          bVar1 = 0;
        }
        local_28 = (-(uint)bVar1 & 7) + 0x403;
        FUN_005dcb00(iVar6);
        piVar7 = (int *)FUN_0063aac0();
        if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
          bVar1 = 1;
        }
        else {
          bVar1 = 0;
        }
        local_60 = (-(uint)bVar1 & 0x19) + 0x3f4;
        local_24 = _DAT_006b3e38;
      }
      else {
        FUN_005dcb00(iVar6);
        piVar7 = (int *)FUN_0063aac0();
        if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
          bVar1 = 1;
        }
        else {
          bVar1 = 0;
        }
        local_28 = (-(uint)bVar1 & 0xffffffec) + 0x404;
        local_14 = _DAT_006b2c40;
      }
    }
    break;
  case 2:
    cVar3 = FUN_005db190();
    if ((cVar3 != '\0') && (iVar6 = FUN_005dac90(), iVar6 != -1)) {
      uVar8 = FUN_005dac90();
      FUN_005dcb00(uVar8);
      piVar7 = (int *)FUN_0063aac0();
      if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_178 = -1;
      }
      else {
        local_178 = FUN_005dac90();
      }
      local_50 = local_178;
      uVar8 = FUN_005dac90();
      FUN_005dcb00(uVar8);
      piVar7 = (int *)FUN_0063aac0();
      if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      local_28 = (-(uint)bVar1 & 0x15) + 0x3fd;
      local_14 = 1.0;
    }
    break;
  case 3:
    local_2c = 0xc3b4;
    break;
  case 4:
    *(undefined4 *)(DAT_00793374 + 0xdb0) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0xdb4) = 0xffffffff;
    cVar3 = FUN_00637630();
    if ((cVar3 != '\0') && (DAT_00795f94 == '\0')) {
      FUN_005cd7c0(0xc3cd,0,0);
    }
    FUN_00523590();
    return;
  case 5:
    *(undefined1 *)(*(int *)(DAT_0079337c + 8) + 400) = 1;
    iVar6 = FUN_00528bd0();
    if (iVar6 == 0) {
      local_2c = 0xc398;
    }
    else {
      iVar6 = FUN_00528bd0();
      if (iVar6 == 0x25) {
        local_2c = 0xc399;
      }
      else {
        iVar6 = FUN_00528bd0();
        local_2c = iVar6 * 2 + 0xc34e;
      }
    }
  }
  iVar6 = DAT_00793374;
  *(undefined4 *)(DAT_00793374 + 0xdb0) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0xdb4) = 0xffffffff;
  if (local_50 == 4) {
    if (local_2c == -1) {
      *(undefined1 *)(*(int *)(DAT_0079337c + 8) + 400) = 0;
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    FUN_005cd7c0(local_2c,*(undefined4 *)(DAT_0162ee80 + 4),0);
    return;
  }
  if ((local_28 == -1) || (iVar6 = FUN_00636730(), iVar6 == 0)) {
LAB_00525b49:
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
  }
  else {
    if (-1 < local_50) {
      FUN_005dcb00(local_50);
      piVar7 = (int *)FUN_0063aac0();
      if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) goto LAB_00525b49;
    }
    if (local_50 == -1) {
      local_184 = FUN_00636c50();
    }
    else {
      local_184 = local_50;
    }
    local_4c = local_184;
    local_48 = local_28;
    local_44 = local_60;
    local_3c = local_24;
    local_34 = local_14;
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
    uVar9 = 1;
    uVar8 = FUN_00637810(2);
    FUN_00639390(&local_4c,*(undefined4 *)(DAT_0162ee80 + 4),uVar8,uVar9);
  }
  return;
}

