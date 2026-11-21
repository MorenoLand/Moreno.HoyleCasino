// FUN_00696230  00696230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00696230(uint param_1,int param_2,int param_3,float *param_4,int param_5,int param_6,
                 float *param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *local_5c;
  float *local_58;
  float *local_54;
  float *local_50;
  float *local_4c;
  float *local_48;
  float *local_44;
  int local_20;
  int local_18;
  int local_14;
  
  iVar16 = param_1 * param_2;
  local_5c = (float *)0x0;
  if (0 < param_2) {
    pfVar13 = (float *)(param_3 + iVar16 * 4);
    local_54 = (float *)(param_3 + iVar16 * 0xc);
    local_58 = (float *)(param_3 + iVar16 * 8);
    local_48 = (float *)param_2;
    do {
      fVar2 = *pfVar13;
      fVar3 = *local_54;
      fVar4 = *(float *)(param_3 + (int)local_5c * 4) + *local_58;
      param_4[(int)local_5c * 4] = fVar4 + fVar2 + fVar3;
      param_4[param_1 * 4 + (int)local_5c * 4 + -1] = fVar4 - (fVar2 + fVar3);
      iVar12 = (int)local_5c * 4 + param_1 * 2;
      param_4[iVar12 + -1] = *(float *)(param_3 + (int)local_5c * 4) - *local_58;
      fVar2 = *pfVar13;
      pfVar13 = pfVar13 + param_1;
      param_4[iVar12] = *local_54 - fVar2;
      local_5c = (float *)((int)local_5c + param_1);
      local_58 = local_58 + param_1;
      local_54 = local_54 + param_1;
      local_48 = (float *)((int)local_48 + -1);
    } while (local_48 != (float *)0x0);
  }
  if (1 < (int)param_1) {
    if (param_1 != 2) {
      local_18 = 0;
      if (0 < param_2) {
        iVar12 = param_1 * 2;
        local_4c = param_4;
        local_44 = (float *)(param_3 + iVar16 * 0xc);
        local_48 = (float *)(param_3 + iVar16 * 4);
        local_14 = param_2;
        do {
          iVar1 = iVar12 + local_18 * 4;
          if (2 < (int)param_1) {
            pfVar10 = (float *)(param_5 + 4);
            local_54 = local_4c;
            local_20 = (param_1 - 3 >> 1) + 1;
            pfVar13 = local_48;
            pfVar15 = param_7;
            pfVar11 = (float *)(param_3 + local_18 * 4);
            pfVar18 = (float *)(param_3 + (local_18 + iVar16 * 2) * 4);
            pfVar20 = local_44;
            local_5c = param_4 + iVar12 + local_18 * 4;
            local_58 = param_4 + iVar1;
            local_50 = param_4 + iVar1 + iVar12;
            do {
              pfVar14 = pfVar13 + 2;
              pfVar19 = pfVar18 + 2;
              pfVar21 = pfVar20 + 2;
              fVar2 = *pfVar14 * *pfVar10 + pfVar10[-1] * pfVar13[1];
              pfVar17 = pfVar11 + 2;
              fVar5 = pfVar10[-1] * *pfVar14 - *pfVar10 * pfVar13[1];
              fVar6 = *(float *)((param_6 - param_5) + (int)pfVar10) * *pfVar19 +
                      *(float *)((param_6 - (int)param_7) + (int)pfVar15) * pfVar18[1];
              fVar7 = *(float *)((param_6 - (int)param_7) + (int)pfVar15) * *pfVar19 -
                      pfVar18[1] * *(float *)((param_6 - param_5) + (int)pfVar10);
              fVar4 = *(float *)(((int)param_7 - param_5) + (int)pfVar10) * *pfVar21 +
                      *pfVar15 * pfVar20[1];
              fVar8 = *pfVar15 * *pfVar21 -
                      pfVar20[1] * *(float *)(((int)param_7 - param_5) + (int)pfVar10);
              fVar3 = fVar4 + fVar2;
              fVar4 = fVar4 - fVar2;
              fVar2 = fVar8 + fVar5;
              fVar5 = fVar5 - fVar8;
              fVar8 = fVar7 + *pfVar17;
              fVar7 = *pfVar17 - fVar7;
              fVar9 = fVar6 + pfVar11[1];
              fVar6 = pfVar11[1] - fVar6;
              local_54[1] = fVar9 + fVar3;
              local_54[2] = fVar8 + fVar2;
              pfVar10 = pfVar10 + 2;
              pfVar15 = pfVar15 + 2;
              local_58[-3] = fVar6 - fVar5;
              local_58[-2] = fVar4 - fVar7;
              local_5c[1] = fVar6 + fVar5;
              local_5c[2] = fVar7 + fVar4;
              local_50[-3] = fVar9 - fVar3;
              local_50[-2] = fVar2 - fVar8;
              local_20 = local_20 + -1;
              pfVar13 = pfVar14;
              pfVar11 = pfVar17;
              pfVar18 = pfVar19;
              pfVar20 = pfVar21;
              local_5c = local_5c + 2;
              local_58 = local_58 + -2;
              local_54 = local_54 + 2;
              local_50 = local_50 + -2;
            } while (local_20 != 0);
          }
          local_4c = local_4c + param_1 * 4;
          local_48 = local_48 + param_1;
          local_18 = local_18 + param_1;
          local_44 = local_44 + param_1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      if ((param_1 & 1) != 0) {
        return;
      }
    }
    iVar12 = (param_1 - 1) + iVar16;
    if (0 < param_2) {
      pfVar13 = param_4 + param_1;
      param_4 = param_4 + param_1 * 3;
      param_7 = (float *)(param_3 + (iVar12 + iVar16 * 2) * 4);
      pfVar15 = (float *)(param_3 + iVar12 * 4);
      pfVar11 = (float *)(param_3 + (iVar12 + iVar16) * 4);
      pfVar18 = (float *)(param_3 + (iVar12 - iVar16) * 4);
      do {
        fVar4 = -((*pfVar15 + *param_7) * _DAT_007878fc);
        fVar2 = *pfVar15;
        fVar3 = *param_7;
        param_7 = param_7 + param_1;
        pfVar15 = pfVar15 + param_1;
        fVar3 = (fVar2 - fVar3) * _DAT_007878fc;
        pfVar13[-1] = fVar3 + *pfVar18;
        fVar2 = *pfVar18;
        pfVar18 = pfVar18 + param_1;
        param_4[-1] = fVar2 - fVar3;
        *pfVar13 = fVar4 - *pfVar11;
        pfVar13 = pfVar13 + param_1 * 4;
        fVar2 = *pfVar11;
        pfVar11 = pfVar11 + param_1;
        *param_4 = fVar4 + fVar2;
        param_4 = param_4 + param_1 * 4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}

