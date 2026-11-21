// FUN_005cba10  005cba10

void __thiscall FUN_005cba10(int *param_1,int *param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  CPane *this;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *_Format;
  int extraout_EDX;
  undefined8 uVar8;
  longlong lVar9;
  byte local_164;
  int local_fc;
  int local_f8;
  int local_f0;
  undefined8 local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  char local_d4 [200];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  this = (CPane *)(**(code **)(*DAT_007947e4 + 0x25c))();
  lVar9 = CONCAT44(local_e8._4_4_,(int)local_e8);
  if (this == (CPane *)0x0) goto LAB_005cc1bc;
  iVar5 = (**(code **)(*DAT_007947e4 + 0x2b0))();
  local_8 = (**(code **)(*DAT_007947e4 + 0x2b4))();
  local_e0 = *(int *)(this + 4);
  if ((*param_2 < 0) || (*param_2 < 0)) {
    local_164 = 0;
  }
  else {
    local_164 = 1;
  }
  FUN_0064c8a0(0,0);
  FUN_0064c8a0(0,0);
  FUN_005d5ac0(&local_dc);
  if ((*param_2 == 0) && (param_2[1] == 0)) {
    CPane::GetMinSize(this,(CSize *)&local_e8);
  }
  else {
    local_e8._0_4_ = *param_2;
    local_e8._4_4_ = param_2[1];
  }
  iVar1 = param_1[local_e0 * 8 + param_3 * 2 + 0x12];
  iVar2 = param_1[local_e0 * 8 + param_3 * 2 + 0x13];
  lVar9 = CONCAT44(local_e8._4_4_,(int)local_e8);
  if (((int)local_e8 == 0) && (lVar9 = CONCAT44(local_e8._4_4_,(int)local_e8), local_e8._4_4_ == 0))
  {
    uVar8 = FUN_0064c8a0(iVar5,0);
    FUN_005d5e10(uVar8);
    lVar9 = CONCAT44(local_e8._4_4_,(int)local_e8);
    if (local_164 == 0) {
      lVar9 = FUN_0064c8a0(iVar5,0);
    }
  }
  local_e8._4_4_ = (int)((ulonglong)lVar9 >> 0x20);
  local_e8._0_4_ = (int)lVar9;
  if ((((((local_164 & param_4) != 0) && (iVar1 + (int)local_e8 < iVar5)) && (local_e8._4_4_ == 0))
      && (iVar5 <= local_dc)) && (((int)local_e8 == 0 || ((iVar1 == 0 && (iVar2 == 0)))))) {
    local_e8._0_4_ = iVar5;
    FUN_005d5e10(iVar5,0);
    lVar9 = CONCAT44(local_e8._4_4_,(int)local_e8);
  }
  local_e8._4_4_ = (int)((ulonglong)lVar9 >> 0x20);
  local_e8._0_4_ = (int)lVar9;
  local_f8 = extraout_EDX;
  local_e8 = lVar9;
  if (local_164 != 0) {
    if (param_4 == 0) {
      if (((int)local_e8 <= local_dc) &&
         (((int)local_e8 != local_dc || (local_e8._4_4_ <= local_d8)))) {
LAB_005cbf93:
        if ((local_8 < iVar1 + (int)local_e8) && (param_4 != 0)) {
          local_fc = local_8;
        }
        else {
          local_fc = iVar1 + (int)local_e8;
          local_f8 = iVar2 + local_e8._4_4_;
          FUN_0064c540();
        }
        FUN_0064c540();
        lVar4 = CONCAT44(-(local_f8 - iVar2),-(local_fc - iVar1));
        goto LAB_005cc0d6;
      }
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_005cbf53:
        bVar3 = true;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_005cbf53;
        bVar3 = false;
      }
      lVar9 = local_e8;
      if (bVar3) {
        uVar7 = FUN_00630f40("SID_CASINO_BANKEXCEEDED",0);
        uVar7 = FUN_00630f40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET",uVar7);
        FUN_0062ff10(uVar7);
        lVar9 = local_e8;
      }
      goto LAB_005cc1bc;
    }
    if (iVar1 != local_8) {
      if (((int)local_e8 <= local_dc) &&
         (((int)local_e8 != local_dc || (local_e8._4_4_ <= local_d8)))) {
        if ((iVar5 <= (int)local_e8) || (iVar1 != 0)) goto LAB_005cbf93;
        _Format = (char *)FUN_00630f40("SID_CASINO_MINBETAMOUNT_FORMAT",iVar5);
        sprintf(local_d4,_Format);
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 2) {
LAB_005cbe9f:
          bVar3 = true;
        }
        else {
          piVar6 = (int *)FUN_0063aac0();
          if (*piVar6 == 3) goto LAB_005cbe9f;
          bVar3 = false;
        }
        lVar9 = local_e8;
        if (bVar3) {
          uVar7 = FUN_00630f40("SID_CASINO_MINBET",0);
          FUN_0062ff10(local_d4,uVar7);
          lVar9 = local_e8;
        }
        goto LAB_005cc1bc;
      }
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 2) {
LAB_005cbdd7:
        bVar3 = true;
      }
      else {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 == 3) goto LAB_005cbdd7;
        bVar3 = false;
      }
      lVar9 = local_e8;
      if (bVar3) {
        uVar7 = FUN_00630f40("SID_CASINO_BANKEXCEEDED",0);
        uVar7 = FUN_00630f40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET",uVar7);
        FUN_0062ff10(uVar7);
        lVar9 = local_e8;
      }
      goto LAB_005cc1bc;
    }
    piVar6 = (int *)FUN_0063aac0();
    if (*piVar6 == 2) {
LAB_005cbd21:
      bVar3 = true;
    }
    else {
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 3) goto LAB_005cbd21;
      bVar3 = false;
    }
    lVar9 = local_e8;
    if (bVar3) {
      uVar7 = FUN_00630f40("SID_CASINO_MAXBET",0);
      uVar7 = FUN_00630f40("SID_CASINO_BETMAXIMUM",uVar7);
      FUN_0062ff10(uVar7);
      lVar9 = local_e8;
    }
    goto LAB_005cc1bc;
  }
  if (iVar1 == 0) goto LAB_005cc1bc;
  if (iVar1 + (int)local_e8 < iVar5) {
    local_fc = 0;
    lVar4 = CONCAT44(iVar2,iVar1);
  }
  else {
    local_fc = iVar1 + (int)local_e8;
    local_f8 = iVar2 + local_e8._4_4_;
    FUN_0064c540();
    lVar4 = local_e8;
    if ((int)local_e8 < 0) {
      lVar4 = CONCAT44(-local_e8._4_4_,-(int)local_e8);
    }
  }
LAB_005cc0d6:
  local_f0 = (int)lVar4;
  FUN_005d5cf0(lVar4);
  (**(code **)(*param_1 + 0xb8))(local_fc,local_f8,local_e0,param_3);
  piVar6 = (int *)FUN_0063aac0();
  if (*piVar6 == 2) {
LAB_005cc162:
    bVar3 = true;
  }
  else {
    piVar6 = (int *)FUN_0063aac0();
    if (*piVar6 == 3) goto LAB_005cc162;
    bVar3 = false;
  }
  lVar9 = local_e8;
  if (((bVar3) && (this[0x4a0] == (CPane)0x0)) && ((local_f0 < 0 || (lVar4 < 0)))) {
    (**(code **)(*DAT_007947e4 + 0x28c))();
    lVar9 = local_e8;
  }
LAB_005cc1bc:
  local_e8 = lVar9;
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

