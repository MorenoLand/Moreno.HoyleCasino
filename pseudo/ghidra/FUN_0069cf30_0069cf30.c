// FUN_0069cf30  0069cf30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069cf30(int param_1,int param_2,int param_3,int param_4,float *param_5,uint param_6,
                 float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  int local_4;
  
  iVar9 = 0;
  fVar4 = _DAT_006e57d0 / (float)param_4;
  if (0 < (int)param_6) {
    do {
      fVar10 = (float10)FUN_0069d0b0(param_5[iVar9]);
      param_5[iVar9] = (float)fVar10;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)param_6);
  }
  iVar9 = 0;
  if (0 < param_3) {
    do {
      iVar3 = *(int *)(param_2 + iVar9 * 4);
      fVar10 = (float10)FUN_0069d0b0((float)iVar3 * fVar4);
      fVar1 = (float)fVar10;
      fVar5 = 0.70710677;
      fVar2 = 0.70710677;
      pfVar7 = param_5;
      iVar8 = (int)param_6 >> 1;
      do {
        pfVar6 = pfVar7 + 2;
        iVar8 = iVar8 + -1;
        fVar5 = (*pfVar7 - fVar1) * fVar5;
        fVar2 = (pfVar7[1] - fVar1) * fVar2;
        pfVar7 = pfVar6;
      } while (iVar8 != 0);
      if ((param_6 & 1) == 0) {
        fVar5 = (fVar1 + _DAT_006b3650) * fVar5 * fVar5;
      }
      else {
        fVar5 = (*pfVar6 - fVar1) * fVar5;
        fVar5 = fVar5 * fVar5;
        fVar1 = fVar1 * fVar1;
      }
      dVar12 = frexp((double)(fVar5 + (_DAT_006b3650 - fVar1) * fVar2 * fVar2),&local_4);
      fVar10 = (float10)FUN_0069d160(local_4 + param_6);
      fVar11 = (float10)FUN_0069d100((float)dVar12);
      fVar10 = (float10)FUN_0069d170((float)(fVar11 * (float10)(float)fVar10 * (float10)param_7 -
                                            (float10)param_8));
      pfVar7 = (float *)(param_1 + iVar9 * 4);
      do {
        pfVar6 = pfVar7 + 1;
        iVar9 = iVar9 + 1;
        *pfVar7 = (float)(fVar10 * (float10)*pfVar7);
        pfVar7 = pfVar6;
      } while (*(int *)((param_2 - param_1) + (int)pfVar6) == iVar3);
    } while (iVar9 < param_3);
  }
  return;
}

