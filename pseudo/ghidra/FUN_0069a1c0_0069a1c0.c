// FUN_0069a1c0  0069a1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0069a1c0(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_20;
  float local_18;
  
  iVar6 = *param_1;
  piVar10 = *(int **)(param_1[3] + 0x28);
  local_20 = 0;
  if (0 < iVar6) {
    iVar9 = *piVar10;
    iVar4 = piVar10[3] >> 1;
    pfVar3 = param_2 + iVar6;
    local_18 = (float)iVar6;
    do {
      fVar1 = pfVar3[-1];
      pfVar3 = pfVar3 + -1;
      if (*(float *)(iVar9 + iVar4 * 4) <= fVar1) {
        iVar5 = iVar4 + 1;
        iVar8 = piVar10[3] + -1;
        if (iVar5 < iVar8) {
          pfVar7 = (float *)(iVar9 + iVar5 * 4);
          do {
            if (fVar1 < *pfVar7) break;
            iVar5 = iVar5 + 1;
            pfVar7 = pfVar7 + 1;
          } while (iVar5 < iVar8);
        }
      }
      else {
        iVar5 = iVar4;
        if ((fVar1 < *(float *)(iVar9 + -4 + iVar4 * 4)) && (iVar5 = iVar4 + -1, 0 < iVar5)) {
          pfVar7 = (float *)(iVar9 + -4 + iVar5 * 4);
          do {
            if (*pfVar7 <= fVar1) break;
            iVar5 = iVar5 + -1;
            pfVar7 = pfVar7 + -1;
          } while (0 < iVar5);
        }
      }
      local_20 = piVar10[2] * local_20 + *(int *)(piVar10[1] + iVar5 * 4);
      local_18 = (float)((int)local_18 + -1);
    } while (local_18 != 0.0);
  }
  if (*(int *)(*(int *)(param_1[3] + 8) + local_20 * 4) < 1) {
    iVar9 = 0;
    local_18 = 0.0;
    local_20 = -1;
    if (0 < param_1[1]) {
      iVar4 = param_1[4] - (int)param_2;
      piVar10 = *(int **)(param_1[3] + 8);
      do {
        iVar5 = local_20;
        fVar1 = local_18;
        if (0 < *piVar10) {
          pfVar3 = param_2;
          iVar5 = iVar6;
          fVar1 = _DAT_006c2fe8;
          if (0 < iVar6) {
            do {
              fVar2 = *(float *)(iVar4 + (int)pfVar3) - *pfVar3;
              iVar5 = iVar5 + -1;
              fVar1 = fVar2 * fVar2 + fVar1;
              pfVar3 = pfVar3 + 1;
            } while (iVar5 != 0);
          }
          iVar5 = iVar9;
          if ((local_20 != -1) && (local_18 <= fVar1)) {
            iVar5 = local_20;
            fVar1 = local_18;
          }
        }
        local_18 = fVar1;
        local_20 = iVar5;
        iVar4 = iVar4 + iVar6 * 4;
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar9 < param_1[1]);
    }
  }
  pfVar3 = (float *)(param_1[4] + local_20 * iVar6 * 4);
  if (0 < iVar6) {
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar6 = iVar6 + -1;
      *param_2 = *param_2 - fVar1;
      param_2 = param_2 + 1;
    } while (iVar6 != 0);
  }
  return local_20;
}

