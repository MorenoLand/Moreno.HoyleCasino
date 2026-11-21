// FUN_0043c120  0043c120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0043c120(int param_1,uint *param_2,undefined4 param_3,undefined1 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint local_178;
  char local_170;
  undefined1 local_154 [8];
  undefined8 local_14c;
  uint local_144;
  uint local_140;
  double local_13c;
  uint local_134;
  uint local_130;
  double local_12c;
  char local_121;
  int local_120;
  undefined8 local_11c;
  char local_114 [256];
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (((int)*param_2 < 0) || ((int)*param_2 < 0)) {
    local_170 = '\0';
  }
  else {
    local_170 = '\x01';
  }
  local_121 = local_170;
  local_120 = (**(code **)(*DAT_007906d0 + 0x25c))();
  if (local_120 == 0) goto LAB_0043cd21;
  local_10 = (**(code **)(*DAT_007906d0 + 0x2b0))();
  local_14c = FUN_0064c8a0(0,0);
  local_11c = local_14c;
  sprintf(local_114,"CRAPS: adding %d dollars and %d cents to bet.\n",*param_2,param_2[1]);
  FUN_0062fde0();
  iVar3 = FUN_005f5400();
  if (iVar3 == 0x2b) {
LAB_0043c253:
    if (*param_2 == 0) {
      if (*(int *)(local_120 + 0x4bc) < 1) {
        *param_2 = local_10;
        while (((int)*param_2 % 5 != 0 || ((int)*param_2 < (int)local_10))) {
          *param_2 = *param_2 + 1;
        }
      }
      else if (((int)(local_10 * 5) < *(int *)(local_120 + 0x4bc)) &&
              (*(int *)(local_120 + 0x4bc) % 5 == 0)) {
        *param_2 = *(uint *)(local_120 + 0x4bc);
      }
      else {
        *param_2 = *(uint *)(local_120 + 0x4bc);
        while (((int)*param_2 % 5 != 0 || ((int)*param_2 < (int)local_10))) {
          *param_2 = *param_2 + 1;
        }
      }
    }
    else if ((int)*param_2 < 0) {
      *param_2 = -*param_2;
      while (((int)*param_2 % 5 != 0 || ((int)*param_2 < (int)local_10))) {
        *param_2 = *param_2 + 1;
      }
      *param_2 = -*param_2;
    }
  }
  else {
    iVar3 = FUN_005f5400();
    if (iVar3 == 0x2c) goto LAB_0043c253;
    iVar3 = FUN_005f5400();
    if (iVar3 == 0x2f) goto LAB_0043c253;
    iVar3 = FUN_005f5400();
    if (iVar3 == 0x30) goto LAB_0043c253;
  }
  iVar3 = FUN_005f5400();
  if (iVar3 == 0x2d) {
LAB_0043c38e:
    if (*param_2 == 0) {
      if (*(int *)(local_120 + 0x4bc) < 1) {
        *param_2 = local_10;
        while (((int)*param_2 % 6 != 0 || ((int)*param_2 < (int)local_10))) {
          *param_2 = *param_2 + 1;
        }
      }
      else if (((int)(local_10 * 6) < *(int *)(local_120 + 0x4bc)) &&
              (*(int *)(local_120 + 0x4bc) % 6 == 0)) {
        *param_2 = *(uint *)(local_120 + 0x4bc);
      }
      else {
        *param_2 = *(uint *)(local_120 + 0x4bc);
        while (((int)*param_2 % 6 != 0 || ((int)*param_2 < (int)local_10))) {
          *param_2 = *param_2 + 1;
        }
      }
    }
    else if ((int)*param_2 < 0) {
      *param_2 = -*param_2;
      while (((int)*param_2 % 6 != 0 || ((int)*param_2 < (int)local_10))) {
        *param_2 = *param_2 + 1;
      }
      *param_2 = -*param_2;
    }
  }
  else {
    iVar3 = FUN_005f5400();
    if (iVar3 == 0x2e) goto LAB_0043c38e;
  }
  FUN_005f5400();
  cVar2 = FUN_00435ca0();
  if (cVar2 == '\0') {
    FUN_005f5400();
    cVar2 = FUN_00435cf0();
    if (cVar2 != '\0') goto LAB_0043c4e5;
  }
  else {
LAB_0043c4e5:
    if ((*param_2 == 0) && (local_121 != '\0')) {
      iVar3 = FUN_005d5a50();
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_0063aac0();
        if (*piVar4 == 2) {
LAB_0043c557:
          bVar1 = true;
        }
        else {
          piVar4 = (int *)FUN_0063aac0();
          if (*piVar4 == 3) goto LAB_0043c557;
          bVar1 = false;
        }
        if (bVar1) {
          cVar2 = FUN_004342d0();
          if (cVar2 == '\0') goto LAB_0043c5ad;
          uVar5 = FUN_00434820();
          uVar6 = FUN_00436570(*(undefined4 *)(local_120 + 4),uVar5);
          *param_2 = uVar6;
        }
        else {
LAB_0043c5ad:
          *param_2 = *(uint *)(local_120 + 0x4bc);
        }
        piVar4 = (int *)(param_1 + 0x48 + *(int *)(local_120 + 4) * 0x20);
        local_c = *piVar4;
        local_8 = piVar4[1];
        uVar5 = FUN_00434820();
        iVar3 = FUN_00436570(*(undefined4 *)(local_120 + 4),uVar5);
        if (local_c == iVar3) goto LAB_0043cd21;
        iVar8 = local_c + *param_2;
        uVar5 = FUN_00434820();
        iVar3 = FUN_00436570(*(undefined4 *)(local_120 + 4),uVar5);
        if (iVar3 < iVar8) {
          uVar5 = FUN_00434820();
          iVar3 = FUN_00436570(*(undefined4 *)(local_120 + 4),uVar5);
          *param_2 = iVar3 - local_c;
          if ((int)*param_2 < 1) {
            FUN_005e9f20("deltaBet.dollars > 0","..\\Casino\\crapsstate.cpp",0xac1);
          }
          if ((int)*param_2 < 1) goto LAB_0043cd21;
        }
        iVar3 = FUN_005d5a50();
        if (iVar3 < (int)*param_2) {
          local_178 = FUN_005d5a50();
        }
        else {
          local_178 = *param_2;
        }
        *param_2 = local_178;
        param_4 = 0;
      }
    }
  }
  iVar3 = FUN_005f5400();
  if (iVar3 == 0x12) {
    if (*param_2 == 0) {
      if (*(int *)(local_120 + 0x4bc) < 1) {
        *param_2 = local_10 << 2;
      }
      else {
        if ((int)(local_10 * 4) < *(int *)(local_120 + 0x4bc)) {
          uVar6 = *(uint *)(local_120 + 0x4bc) & 0x80000003;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
          }
          if (uVar6 == 0) {
            *param_2 = *(uint *)(local_120 + 0x4bc);
            goto LAB_0043c80a;
          }
        }
        *param_2 = *(uint *)(local_120 + 0x4bc);
        while( true ) {
          uVar6 = *param_2 & 0x80000003;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
          }
          if ((uVar6 == 0) && ((int)local_10 <= (int)*param_2)) break;
          *param_2 = *param_2 + 1;
        }
      }
    }
    else if ((int)*param_2 < 0) {
      *param_2 = -*param_2;
      while( true ) {
        uVar6 = *param_2 & 0x80000003;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar6 == 0) && ((int)local_10 <= (int)*param_2)) break;
        *param_2 = *param_2 + 1;
      }
      *param_2 = -*param_2;
    }
  }
LAB_0043c80a:
  if (local_121 != '\0') {
    FUN_005f5400();
    cVar2 = FUN_004388a0();
    if (cVar2 == '\0') {
      FUN_005f5400();
      cVar2 = FUN_004388d0();
      if (cVar2 == '\0') goto LAB_0043ca80;
    }
    if (*param_2 == 0) {
      if (*(int *)(local_120 + 0x4bc) < 1) {
        *param_2 = local_10;
      }
      else {
        *param_2 = *(uint *)(local_120 + 0x4bc);
      }
    }
    FUN_005f5400();
    cVar2 = FUN_004388d0();
    if (cVar2 == '\0') {
      FUN_005f5400();
      iVar3 = FUN_0043adc0();
      FUN_005f5400();
      iVar8 = FUN_0043aff0();
      local_12c = (double)iVar3 / (double)iVar8;
      local_134 = *param_2;
      local_130 = param_2[1];
      FUN_0064c560(local_12c);
      local_11c._0_4_ = local_134;
      local_11c._4_4_ = local_130;
      FUN_0064c560(_DAT_006b8188);
    }
    else {
      local_11c._0_4_ = *param_2;
      local_11c._4_4_ = param_2[1];
      FUN_0064c560(_DAT_006b8188);
    }
    iVar8 = *param_2 + (uint)local_11c;
    iVar3 = FUN_005d5a50();
    if (iVar3 < iVar8) {
      iVar8 = *param_2 + (uint)local_11c;
      iVar3 = FUN_005d5a50();
      if (iVar3 < iVar8) {
        piVar4 = (int *)FUN_0063aac0();
        if (*piVar4 == 2) {
LAB_0043ca0b:
          bVar1 = true;
        }
        else {
          piVar4 = (int *)FUN_0063aac0();
          if (*piVar4 == 3) goto LAB_0043ca0b;
          bVar1 = false;
        }
        if (bVar1) {
          uVar5 = FUN_00630f40("SID_CASINO_BANKEXCEEDED",0);
          uVar5 = FUN_00630f40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET",uVar5);
          FUN_0062ff10(uVar5);
        }
        goto LAB_0043cd21;
      }
    }
    local_11c._0_4_ = -(uint)local_11c;
    local_11c._4_4_ = -local_11c._4_4_;
    FUN_005d5cf0((uint)local_11c,local_11c._4_4_);
  }
LAB_0043ca80:
  if (local_121 == '\0') {
    FUN_005f5400();
    cVar2 = FUN_004388a0();
    if (cVar2 == '\0') {
      FUN_005f5400();
      cVar2 = FUN_004388d0();
      if (cVar2 == '\0') goto LAB_0043cc48;
    }
    puVar7 = (uint *)FUN_005cb880(local_154,*(undefined4 *)(local_120 + 4));
    uVar6 = puVar7[1];
    *param_2 = *puVar7;
    param_2[1] = uVar6;
    FUN_005f5400();
    cVar2 = FUN_004388d0();
    if (cVar2 == '\0') {
      FUN_005f5400();
      iVar3 = FUN_0043adc0();
      FUN_005f5400();
      iVar8 = FUN_0043aff0();
      local_13c = (double)iVar3 / (double)iVar8;
      local_144 = *param_2;
      local_140 = param_2[1];
      FUN_0064c560(local_13c);
      local_11c._0_4_ = local_144;
      local_11c._4_4_ = local_140;
      FUN_0064c560(_DAT_006b8188);
    }
    else {
      local_11c._0_4_ = *param_2;
      local_11c._4_4_ = param_2[1];
      FUN_0064c560(_DAT_006b8188);
    }
    FUN_005d5cf0((uint)local_11c,local_11c._4_4_);
    if (((uint)local_11c == 0) && (local_11c._4_4_ == 0)) {
      *param_2 = 5;
    }
    *param_2 = -*param_2;
    param_2[1] = -param_2[1];
  }
LAB_0043cc48:
  iVar3 = FUN_005f5400();
  if (iVar3 == 8) {
LAB_0043cc88:
    param_4 = 0;
  }
  else {
    iVar3 = FUN_005f5400();
    if (iVar3 == 9) goto LAB_0043cc88;
    iVar3 = FUN_005f5400();
    if (iVar3 == 10) goto LAB_0043cc88;
    iVar3 = FUN_005f5400();
    if (iVar3 == 0xb) goto LAB_0043cc88;
  }
  iVar3 = FUN_005f5400();
  if (iVar3 == 0x11) {
LAB_0043ccac:
    param_4 = 0;
  }
  else {
    iVar3 = FUN_005f5400();
    if (iVar3 == 0xe) goto LAB_0043ccac;
  }
  iVar3 = FUN_005f5400();
  if (iVar3 == 0x10) {
LAB_0043ccf0:
    param_4 = 0;
  }
  else {
    iVar3 = FUN_005f5400();
    if (iVar3 == 0xc) goto LAB_0043ccf0;
    iVar3 = FUN_005f5400();
    if (iVar3 == 0xf) goto LAB_0043ccf0;
    iVar3 = FUN_005f5400();
    if (iVar3 == 0xd) goto LAB_0043ccf0;
  }
  FUN_005cba10(param_2,param_3,param_4);
  if (local_121 == '\0') {
    FUN_005da460();
  }
LAB_0043cd21:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

