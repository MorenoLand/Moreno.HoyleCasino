// FUN_00693e60  00693e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00693e60(int *param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  double dVar12;
  float local_28;
  int local_24;
  int *local_18;
  int local_14;
  
  iVar2 = param_1[1];
  iVar10 = *param_1;
  iVar3 = *(int *)(iVar2 + 0x200);
  local_24 = 0;
  iVar5 = *(int *)(iVar2 + 0x1fc);
  if (iVar10 < *(int *)(iVar2 + 0x1fc)) {
    iVar5 = iVar10;
  }
  iVar9 = 0;
  if (*(int *)(iVar2 + 500) != 0) {
    if (0 < iVar5) {
      pfVar8 = param_3;
      local_14 = iVar5;
      do {
        dVar12 = floor((double)(*(float *)((param_2 - (int)param_3) + (int)pfVar8) + _DAT_006b3654))
        ;
        *pfVar8 = (float)dVar12;
        pfVar8 = pfVar8 + 1;
        local_14 = local_14 + -1;
        local_24 = iVar5;
      } while (local_14 != 0);
    }
    iVar6 = iVar3 + local_24;
    iVar9 = local_24;
    if (iVar6 <= iVar10) {
      local_14 = param_4 + (local_24 - iVar5) * 4;
      local_28 = _DAT_006c2fe8;
      do {
        while (iVar9 < iVar6) {
          fVar1 = *(float *)(param_2 + -4 + (iVar9 + 1) * 4);
          local_28 = fVar1 * fVar1 + local_28;
          iVar9 = iVar9 + 1;
        }
        iVar9 = 0;
        if (0 < iVar3) {
          local_18 = (int *)local_14;
          do {
            iVar4 = *local_18;
            fVar1 = *(float *)(param_2 + iVar4 * 4);
            if (fVar1 * fVar1 < _DAT_006e5770) {
              if (local_28 < (float)*(double *)(iVar2 + 0x208)) {
                if (iVar9 < iVar3) {
                  piVar7 = (int *)(param_4 + ((iVar9 - iVar5) + local_24) * 4);
                  iVar9 = iVar3 - iVar9;
                  do {
                    iVar4 = *piVar7;
                    piVar7 = piVar7 + 1;
                    iVar9 = iVar9 + -1;
                    param_3[iVar4] = 0.0;
                  } while (iVar9 != 0);
                }
                break;
              }
              fVar11 = (float10)FUN_00694090();
              param_3[iVar4] = (float)fVar11;
              fVar1 = (float)_DAT_006b2c48;
            }
            else {
              dVar12 = floor((double)(*(float *)(param_2 + iVar4 * 4) + _DAT_006b3654));
              param_3[iVar4] = (float)dVar12;
              fVar1 = *(float *)(param_2 + iVar4 * 4);
              fVar1 = fVar1 * fVar1;
            }
            local_28 = local_28 - fVar1;
            iVar9 = iVar9 + 1;
            local_18 = local_18 + 1;
          } while (iVar9 < iVar3);
        }
        local_14 = local_14 + iVar3 * 4;
        iVar6 = iVar6 + iVar3;
        iVar9 = local_24 + iVar3;
        local_28 = _DAT_006c2fe8;
        local_24 = iVar9;
      } while (iVar6 <= iVar10);
    }
  }
  if (iVar9 < iVar10) {
    iVar10 = iVar10 - iVar9;
    pfVar8 = param_3 + iVar9;
    do {
      dVar12 = floor((double)(*(float *)((int)pfVar8 + (param_2 - (int)param_3)) + _DAT_006b3654));
      *pfVar8 = (float)dVar12;
      pfVar8 = pfVar8 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}

