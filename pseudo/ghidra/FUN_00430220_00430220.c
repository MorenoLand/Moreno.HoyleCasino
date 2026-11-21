// FUN_00430220  00430220

/* WARNING: Removing unreachable block (ram,0x00430fbe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430220(void)

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
  int local_1c0;
  int local_1b4;
  int local_1a4;
  int local_194;
  int local_178;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  int local_2c;
  int local_28;
  undefined8 local_24;
  int local_18;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_2c = -1;
  local_28 = -1;
  local_24 = 0;
  local_14 = _DAT_006b2c38;
  local_8 = *(int *)(DAT_007906d4 + 0xad8);
  iVar4 = (**(code **)(*DAT_007906d0 + 0x2b0))();
  local_18 = (**(code **)(*DAT_007906d0 + 0x2b0))();
  local_18 = local_18 * 5;
  cVar3 = FUN_005cd890();
  iVar6 = DAT_007906d4;
  if (cVar3 != '\0') {
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
    return;
  }
  local_50 = *(int *)(DAT_007906d4 + 0xae8);
  switch(*(undefined4 *)(DAT_007906d4 + 0xae4)) {
  case 0:
    if ((-1 < *(int *)(DAT_007906d4 + 0xab4)) && (*(int *)(DAT_007906d4 + 0xab4) < 4)) {
      local_14 = _DAT_006b2c38;
      FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xab4));
      piVar7 = (int *)FUN_0063aac0();
      if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      local_28 = (-(uint)bVar1 & 2) + 0x7e1;
      FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xab4));
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
        local_178 = *(int *)(DAT_007906d4 + 0xab4);
      }
      local_50 = local_178;
    }
    break;
  case 1:
    local_14 = _DAT_006b2c40;
    iVar6 = FUN_0043b310();
    local_c = FUN_0043b3f0();
    if ((iVar6 == -1) || (iVar5 = FUN_005dcb00(iVar6), *(int *)(iVar5 + 0x4cc) <= local_18)) {
      if ((local_c != -1) && (iVar6 = FUN_005dcb00(local_c), *(int *)(iVar6 + 0x4cc) < -local_18)) {
        FUN_005dcb00(local_c);
        piVar7 = (int *)FUN_0063aac0();
        if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          local_1a4 = -1;
        }
        else {
          local_1a4 = local_c;
        }
        local_50 = local_1a4;
        iVar6 = FUN_005dcb00(local_c);
        if (*(int *)(iVar6 + 0x4cc) < iVar4 * -10) {
          local_14 = 0x3ff0000000000000;
          FUN_005dcb00(local_c);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_28 = (-(uint)bVar1 & 8) + 0x401;
        }
        else {
          local_14 = _DAT_006b2c38;
          FUN_005dcb00(local_c);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_28 = (-(uint)bVar1 & 0xffffffe6) + 0x402;
        }
      }
    }
    else {
      FUN_005dcb00(iVar6);
      piVar7 = (int *)FUN_0063aac0();
      if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      local_194 = iVar6;
      if (bVar2) {
        local_194 = -1;
      }
      local_50 = local_194;
      iVar5 = FUN_005dcb00(iVar6);
      if (iVar4 * 10 < *(int *)(iVar5 + 0x4cc)) {
        local_14 = 0x3ff0000000000000;
        FUN_005dcb00(iVar6);
        piVar7 = (int *)FUN_0063aac0();
        if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
          bVar1 = 1;
        }
        else {
          bVar1 = 0;
        }
        local_28 = (-(uint)bVar1 & 7) + 0x403;
      }
      else {
        local_14 = _DAT_006b2c38;
        FUN_005dcb00(iVar6);
        piVar7 = (int *)FUN_0063aac0();
        if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
          bVar1 = 1;
        }
        else {
          bVar1 = 0;
        }
        local_28 = (-(uint)bVar1 & 0xffffffec) + 0x404;
      }
    }
    break;
  case 2:
    local_14 = _DAT_006b2c38;
    FUN_005dcb00(local_50);
    piVar7 = (int *)FUN_0063aac0();
    if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      local_50 = -1;
    }
    cVar3 = FUN_005da7b0();
    if ((cVar3 != '\0') && (iVar6 = FUN_0062fbf0(10), 4 < iVar6)) {
      cVar3 = (**(code **)(*DAT_007906d0 + 0x2c8))(local_8);
      if (cVar3 != '\0') {
        FUN_005dcb00(local_8);
        cVar3 = FUN_005d5920();
        if (cVar3 != '\0') {
          local_14 = 0x3ff0000000000000;
          FUN_005dcb00(local_8);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_28 = (-(uint)bVar1 & 0x19) + 0x3f2;
        }
      }
      cVar3 = (**(code **)(*DAT_007906d0 + 0x2cc))(local_8);
      if (cVar3 != '\0') {
        FUN_005dcb00(local_8);
        cVar3 = FUN_005d58d0();
        if (cVar3 != '\0') {
          local_14 = 0x3ff0000000000000;
          FUN_005dcb00(local_8);
          piVar7 = (int *)FUN_0063aac0();
          if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
            bVar1 = 1;
          }
          else {
            bVar1 = 0;
          }
          local_28 = (-(uint)bVar1 & 0x19) + 0x3f3;
        }
      }
    }
    cVar3 = FUN_0043b5e0(local_8);
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
    if ((2 < *(int *)(DAT_007906d4 + 0xadc)) && (*(int *)(DAT_007906d4 + 0xab4) == local_8)) {
      local_14 = _DAT_006b2c38;
      FUN_005dcb00(local_8);
      piVar7 = (int *)FUN_0063aac0();
      if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      local_28 = (-(uint)bVar1 & 2) + 0x7e2;
    }
    break;
  case 3:
    cVar3 = FUN_005db190();
    if (((cVar3 != '\0') && (*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0) == 7))
       && (iVar6 = FUN_005dac90(), iVar6 != -1)) {
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
        local_1b4 = -1;
      }
      else {
        local_1b4 = FUN_005dac90();
      }
      local_50 = local_1b4;
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
      local_14 = 0x3ff0000000000000;
    }
    break;
  case 4:
    *(undefined4 *)(DAT_007906d4 + 0xae4) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0xae8) = 0xffffffff;
    piVar7 = (int *)DAT_007906d0[1];
    FUN_0062fde0("*** Stickman saying NewShooterBanter()\n");
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(1);
    }
    FUN_005cd800(0xd01b,piVar7,0);
    return;
  case 5:
    *(undefined4 *)(DAT_007906d4 + 0xae4) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0xae8) = 0xffffffff;
    FUN_0042df00(DAT_007906d0[1],1);
    return;
  case 6:
    *(undefined4 *)(DAT_007906d4 + 0xae4) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0xae8) = 0xffffffff;
    FUN_0042e250(*(undefined4 *)(DAT_0162ee80 + 4),1);
    return;
  case 7:
    *(undefined4 *)(DAT_007906d4 + 0xae4) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0xae8) = 0xffffffff;
    FUN_0042eef0(*(undefined4 *)(DAT_0162ee80 + 4),1);
    return;
  case 8:
    *(undefined4 *)(DAT_007906d4 + 0xae4) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0xae8) = 0xffffffff;
    piVar7 = *(int **)(DAT_0162ee80 + 4);
    FUN_0062fde0("*** Stickman saying OddsReturned()\n");
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(1);
    }
    FUN_005cd800(0xd4e4,piVar7,0);
    return;
  }
  iVar6 = DAT_007906d4;
  *(undefined4 *)(DAT_007906d4 + 0xae4) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0xae8) = 0xffffffff;
  if (local_50 == 4) {
    if (local_2c == -1) {
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    FUN_005cd7c0(local_2c,*(undefined4 *)(DAT_0162ee80 + 4),0);
  }
  if ((local_28 == -1) || (iVar6 = FUN_00636730(), iVar6 == 0)) {
LAB_00431070:
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
      if (bVar2) goto LAB_00431070;
    }
    if (local_50 == -1) {
      local_1c0 = FUN_00636c50();
    }
    else {
      local_1c0 = local_50;
    }
    local_4c = local_1c0;
    local_48 = local_28;
    local_44 = 0xffffffff;
    local_3c = local_24;
    local_34 = local_14;
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
    uVar9 = 1;
    uVar8 = FUN_00637810(2);
    FUN_00639390(&local_4c,*(undefined4 *)(DAT_0162ee80 + 4),uVar8,uVar9);
  }
  return;
}

