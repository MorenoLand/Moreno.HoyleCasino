// FUN_00622340  00622340

void FUN_00622340(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 uint param_7,int param_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  byte *_Dst;
  undefined1 *_Src;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *local_c0;
  int *local_bc;
  int *local_b8;
  byte *local_b4;
  int *local_b0;
  int *local_ac;
  int *local_8c;
  int *local_70;
  int *local_6c;
  int local_64;
  undefined1 *local_58;
  int *local_54;
  undefined1 local_4c;
  int *local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int *local_28;
  int local_24;
  byte *local_20;
  int local_10;
  
  iVar8 = FUN_00622d10();
  _Dst = operator_new(param_7 * 4);
  _Src = operator_new(param_7);
  local_b0 = operator_new(param_7 * 4 + 8);
  local_8c = operator_new(param_7 * 4 + 8);
  local_44 = operator_new(param_7 * 4 + 8);
  local_c0 = operator_new(param_7 * 4 + 8);
  local_54 = operator_new(param_7 * 4 + 8);
  local_70 = operator_new(param_7 * 4 + 8);
  memset(local_8c,0,param_7 * 4 + 8);
  memset(local_c0,0,param_7 * 4 + 8);
  memset(local_70,0,param_7 * 4 + 8);
  bVar4 = false;
  for (local_64 = 0; piVar7 = local_44, piVar6 = local_54, piVar5 = local_b0, local_64 < param_8;
      local_64 = local_64 + 1) {
    memcpy(_Dst,(void *)(local_64 * param_7 * 4 + param_4),param_7 * 4);
    local_20 = (byte *)(local_64 * param_7 + param_6);
    local_28 = local_b0;
    local_ac = local_44;
    local_3c = local_54;
    local_bc = local_8c + 1;
    local_6c = local_c0 + 1;
    local_b8 = local_70 + 1;
    if (bVar4) {
      local_38 = -1;
      local_24 = -1;
      local_40 = -4;
      local_20 = local_20 + (param_7 - 1);
      local_28 = local_b0 + param_7 + 1;
      local_ac = local_44 + param_7 + 1;
      local_3c = local_54 + param_7 + 1;
      local_bc = local_bc + param_7;
      local_6c = local_6c + param_7;
      local_b8 = local_b8 + param_7;
      local_3c[-1] = 0;
      local_ac[-1] = 0;
      local_28[-1] = 0;
      local_b4 = _Dst + param_7 * 4 + -4;
      local_58 = _Src + (param_7 - 1);
    }
    else {
      local_38 = 1;
      local_24 = 1;
      local_40 = 4;
      local_54[1] = 0;
      local_44[1] = 0;
      local_b0[1] = 0;
      local_b4 = _Dst;
      local_58 = _Src;
    }
    *local_3c = 0;
    *local_ac = 0;
    *local_28 = 0;
    for (local_10 = 0; local_10 < (int)param_7; local_10 = local_10 + 1) {
      sVar1 = *(short *)(&DAT_0075f748 + ((uint)*local_b4 + *(int *)(iVar8 + *local_bc * 4)) * 2);
      sVar2 = *(short *)(&DAT_0075f748 + ((uint)local_b4[1] + *(int *)(iVar8 + *local_6c * 4)) * 2);
      sVar3 = *(short *)(&DAT_0075f748 + ((uint)local_b4[2] + *(int *)(iVar8 + *local_b8 * 4)) * 2);
      iVar11 = (int)sVar1 >> 2;
      iVar9 = (int)sVar2 >> 2;
      iVar10 = (int)sVar3 >> 3;
      piVar13 = (int *)(param_3 + (iVar9 * 0x20 + iVar11 * 0x800 + iVar10) * 4);
      if (*piVar13 == 0) {
        FUN_00622e00(param_3,iVar11,iVar9,iVar10,param_1,param_2);
      }
      iVar9 = *piVar13 + -1;
      local_4c = (undefined1)iVar9;
      *local_58 = local_4c;
      if (local_b4[3] == 0) {
        *local_58 = 0;
      }
      *local_20 = local_b4[3];
      pbVar12 = (byte *)(iVar9 * 3 + param_1);
      iVar9 = (int)sVar1 - (uint)*pbVar12;
      iVar10 = (int)sVar2 - (uint)pbVar12[1];
      iVar11 = (int)sVar3 - (uint)pbVar12[2];
      if (bVar4) {
        local_bc = local_bc + -1;
        *local_bc = (int)*(short *)(&DAT_0076014e + iVar9 * 2) + *local_bc;
        local_6c = local_6c + -1;
        *local_6c = (int)*(short *)(&DAT_0076014e + iVar10 * 2) + *local_6c;
        local_b8 = local_b8 + -1;
        *local_b8 = (int)*(short *)(&DAT_0076014e + iVar11 * 2) + *local_b8;
        *local_28 = (int)*(short *)(&DAT_00760956 + iVar9 * 2) + *local_28;
        piVar13 = local_28 + -1;
        *local_ac = (int)*(short *)(&DAT_00760956 + iVar10 * 2) + *local_ac;
        piVar14 = local_ac + -1;
        *local_3c = (int)*(short *)(&DAT_00760956 + iVar11 * 2) + *local_3c;
        piVar15 = local_3c + -1;
        *piVar13 = (int)*(short *)(&DAT_0076115e + iVar9 * 2) + *piVar13;
        *piVar14 = (int)*(short *)(&DAT_0076115e + iVar10 * 2) + *piVar14;
        *piVar15 = (int)*(short *)(&DAT_0076115e + iVar11 * 2) + *piVar15;
        local_28[-2] = (int)*(short *)(&DAT_00761966 + iVar9 * 2);
        local_ac[-2] = (int)*(short *)(&DAT_00761966 + iVar10 * 2);
        local_3c[-2] = (int)*(short *)(&DAT_00761966 + iVar11 * 2);
        local_ac = piVar14;
        local_3c = piVar15;
        local_28 = piVar13;
      }
      else {
        local_bc = local_bc + 1;
        *local_bc = (int)*(short *)(&DAT_0076014e + iVar9 * 2) + *local_bc;
        local_6c = local_6c + 1;
        *local_6c = (int)*(short *)(&DAT_0076014e + iVar10 * 2) + *local_6c;
        local_b8 = local_b8 + 1;
        *local_b8 = (int)*(short *)(&DAT_0076014e + iVar11 * 2) + *local_b8;
        *local_28 = (int)*(short *)(&DAT_00760956 + iVar9 * 2) + *local_28;
        piVar13 = local_28 + 1;
        *local_ac = (int)*(short *)(&DAT_00760956 + iVar10 * 2) + *local_ac;
        piVar14 = local_ac + 1;
        *local_3c = (int)*(short *)(&DAT_00760956 + iVar11 * 2) + *local_3c;
        piVar15 = local_3c + 1;
        *piVar13 = (int)*(short *)(&DAT_0076115e + iVar9 * 2) + *piVar13;
        *piVar14 = (int)*(short *)(&DAT_0076115e + iVar10 * 2) + *piVar14;
        *piVar15 = (int)*(short *)(&DAT_0076115e + iVar11 * 2) + *piVar15;
        local_28[2] = (int)*(short *)(&DAT_00761966 + iVar9 * 2);
        local_ac[2] = (int)*(short *)(&DAT_00761966 + iVar10 * 2);
        local_3c[2] = (int)*(short *)(&DAT_00761966 + iVar11 * 2);
        local_ac = piVar14;
        local_3c = piVar15;
        local_28 = piVar13;
      }
      local_58 = local_58 + local_38;
      local_20 = local_20 + local_24;
      local_b4 = local_b4 + local_40;
    }
    local_b0 = local_8c;
    local_8c = piVar5;
    local_44 = local_c0;
    local_c0 = piVar7;
    local_54 = local_70;
    local_70 = piVar6;
    bVar4 = !bVar4;
    memcpy((void *)(local_64 * param_7 + param_5),_Src,param_7);
  }
  operator_delete((void *)(iVar8 + -0x3fc));
  operator_delete(local_b0);
  operator_delete(local_8c);
  operator_delete(local_44);
  operator_delete(local_c0);
  operator_delete(local_54);
  operator_delete(local_70);
  operator_delete(_Dst);
  operator_delete(_Src);
  return;
}

