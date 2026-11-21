// FUN_00696060  00696060

void FUN_00696060(float *param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *local_14;
  int local_10;
  int local_8;
  
  uVar3 = (uint)param_1;
  iVar12 = (int)param_1 * param_2;
  if (0 < param_2) {
    local_14 = param_4;
    pfVar9 = param_3 + iVar12;
    param_1 = param_4 + (int)param_1 * 2 + -1;
    local_10 = param_2;
    pfVar4 = param_3;
    do {
      *local_14 = *pfVar4 + *pfVar9;
      *param_1 = *pfVar4 - *pfVar9;
      local_14 = local_14 + uVar3 * 2;
      pfVar4 = pfVar4 + uVar3;
      pfVar9 = pfVar9 + uVar3;
      param_1 = param_1 + uVar3 * 2;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (1 < (int)uVar3) {
    if (uVar3 != 2) {
      if (0 < param_2) {
        pfVar9 = param_3 + iVar12;
        local_14 = param_3;
        param_1 = param_4 + uVar3 * 2;
        local_8 = param_2;
        pfVar4 = param_4;
        do {
          if (2 < (int)uVar3) {
            iVar13 = (uVar3 - 3 >> 1) + 1;
            pfVar5 = pfVar9;
            pfVar7 = local_14;
            pfVar10 = (float *)(param_5 + 4);
            pfVar11 = pfVar4;
            pfVar14 = param_1;
            do {
              pfVar8 = pfVar7 + 2;
              iVar13 = iVar13 + -1;
              fVar1 = pfVar5[2] * *pfVar10 + pfVar5[1] * pfVar10[-1];
              fVar2 = pfVar5[2] * pfVar10[-1] - *pfVar10 * pfVar5[1];
              pfVar11[2] = fVar2 + *pfVar8;
              pfVar14[-2] = fVar2 - *pfVar8;
              pfVar11[1] = fVar1 + pfVar7[1];
              pfVar14[-3] = pfVar7[1] - fVar1;
              pfVar5 = pfVar5 + 2;
              pfVar7 = pfVar8;
              pfVar10 = pfVar10 + 2;
              pfVar11 = pfVar11 + 2;
              pfVar14 = pfVar14 + -2;
            } while (iVar13 != 0);
          }
          param_1 = param_1 + uVar3 * 2;
          local_14 = local_14 + uVar3;
          pfVar4 = pfVar4 + uVar3 * 2;
          pfVar9 = pfVar9 + uVar3;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      uVar6 = uVar3 & 0x80000001;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
      }
      if (uVar6 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      pfVar9 = param_3 + (uVar3 - 1);
      param_4 = param_4 + uVar3;
      param_3 = param_3 + (uVar3 - 1) + iVar12;
      do {
        *param_4 = -*param_3;
        param_3 = param_3 + uVar3;
        param_4[-1] = *pfVar9;
        param_4 = param_4 + uVar3 * 2;
        pfVar9 = pfVar9 + uVar3;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}

