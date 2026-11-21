// FUN_00691ee0  00691ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00691ee0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  float *pfVar1;
  size_t _Size;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  float10 fVar17;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 fVar18;
  float10 extraout_ST1_00;
  int local_24;
  int local_20;
  
  iVar7 = param_5;
  iVar6 = param_4;
  piVar5 = param_1;
  piVar16 = param_1;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *piVar16 = 0;
    piVar16 = piVar16 + 1;
  }
  local_24 = -99;
  iVar15 = 1;
  param_1[9] = *param_3;
  fVar17 = (float10)log2((float10)*param_3 * (float10)_DAT_006e5774);
  fVar18 = (float10)log2((float10)_PTR_006b3740);
  floor((double)(((float10)0.6931471805599453 * fVar17) / ((float10)0.6931471805599453 * fVar18) +
                (float10)_DAT_006b2c38));
  iVar12 = ftol();
  fVar17 = (float10)param_4;
  param_1[8] = iVar12;
  log2(((float10)param_5 * (float10)_DAT_006e5770 * (float10)_DAT_006b2c38) / fVar17);
  iVar12 = ftol();
  param_1[7] = iVar12;
  log2((((float10)param_4 + (float10)_DAT_006e5770) * fVar17 * (float10)_DAT_006b2c38) /
       extraout_ST1);
  iVar8 = ftol();
  _Size = param_4 * 4;
  param_1[10] = (iVar8 - iVar12) + 1;
  pvVar9 = malloc(_Size);
  param_1[4] = (int)pvVar9;
  pvVar9 = malloc(_Size);
  param_1[5] = (int)pvVar9;
  pvVar9 = malloc(_Size);
  param_1[6] = (int)pvVar9;
  *param_1 = param_4;
  param_1[1] = param_2;
  param_1[0xb] = param_5;
  iVar8 = 0;
  iVar12 = 0;
  do {
    iVar14 = iVar12 + 1;
    fVar18 = (float10)1.4426950408889634 *
             (((float10)iVar14 * (float10)_DAT_006bf7d8 - (float10)_PTR_006b3740) +
             (float10)_DAT_006e5760) * (float10)_DAT_006e5758;
    fVar17 = ROUND(fVar18);
    fVar18 = (float10)f2xm1(fVar18 - fVar17);
    fVar17 = (float10)fscale((float10)1 + fVar18,fVar17);
    floor((double)((fVar17 * (float10)param_4 + fVar17 * (float10)param_4) / (float10)param_5 +
                  (float10)_DAT_006b2c38));
    iVar10 = ftol();
    fVar3 = (float)(&DAT_00781968)[iVar12];
    if (iVar8 < iVar10) {
      iVar13 = iVar10 - iVar8;
      fVar4 = (float)(&DAT_0078196c)[iVar12] - fVar3;
      do {
        if (param_4 <= iVar8) break;
        iVar8 = iVar8 + 1;
        *(float *)(param_1[4] + -4 + iVar8 * 4) = (float)_DAT_006b4b00 + fVar3;
        fVar3 = fVar3 + fVar4 / (float)iVar13;
      } while (iVar8 < iVar10);
    }
    iVar12 = iVar14;
  } while (iVar14 < 0x57);
  iVar12 = 0;
  if (0 < param_4) {
    iVar8 = param_5 / (param_4 * 2);
    iVar14 = iVar8 * iVar8;
    param_3 = (int *)0x0;
    param_1 = (int *)0x0;
    do {
      local_20 = *(int *)(param_2 + 0x78) + local_24;
      fVar17 = (float10)fpatan((float10)((int)param_1 * iVar12) * (float10)_DAT_006e5754,(float10)1)
      ;
      fVar18 = (float10)fpatan((float10)(int)param_3 * (float10)_DAT_006e5750,(float10)1);
      fVar3 = (float)((float10)(int)param_3 * (float10)_DAT_006e574c +
                     fVar18 * (float10)_DAT_006e5730 + fVar17 * (float10)_DAT_006e5738);
      if (local_20 < iVar12) {
        param_5 = iVar8 * local_24;
        iVar10 = iVar14 * local_24;
        do {
          fVar17 = (float10)fpatan((float10)(iVar10 * local_24) * (float10)_DAT_006e5754,(float10)1)
          ;
          fVar18 = (float10)fpatan((float10)param_5 * (float10)_DAT_006e5750,(float10)1);
          if ((float10)(fVar3 - *(float *)(param_2 + 0x70)) <=
              (float10)param_5 * (float10)_DAT_006e574c +
              fVar18 * (float10)_DAT_006e5730 + fVar17 * (float10)_DAT_006e5738) break;
          iVar10 = iVar10 + iVar14;
          local_24 = local_24 + 1;
          param_5 = param_5 + iVar8;
          local_20 = local_20 + 1;
        } while (local_20 < iVar12);
      }
      if (iVar15 <= param_4) {
        param_5 = iVar8 * iVar15;
        iVar10 = iVar14 * iVar15;
        do {
          if (*(int *)(param_2 + 0x7c) + iVar12 <= iVar15) {
            fVar17 = (float10)fpatan((float10)(iVar10 * iVar15) * (float10)_DAT_006e5754,(float10)1)
            ;
            fVar18 = (float10)fpatan((float10)param_5 * (float10)_DAT_006e5750,(float10)1);
            if ((float10)fVar3 + (float10)*(float *)(param_2 + 0x74) <=
                (float10)param_5 * (float10)_DAT_006e574c +
                fVar18 * (float10)_DAT_006e5730 + fVar17 * (float10)_DAT_006e5738) break;
          }
          iVar15 = iVar15 + 1;
          param_5 = param_5 + iVar8;
          iVar10 = iVar10 + iVar14;
        } while (iVar15 <= param_4);
      }
      iVar12 = iVar12 + 1;
      *(int *)(piVar5[6] + -4 + iVar12 * 4) = local_24 * 0x10000 + -0x10001 + iVar15;
      param_1 = (int *)((int)param_1 + iVar14);
      param_3 = (int *)((int)param_3 + iVar8);
    } while (iVar12 < param_4);
  }
  param_4 = 0;
  if (0 < iVar6) {
    do {
      log2((((float10)param_4 + (float10)_DAT_006e5770) * (float10)iVar7 * (float10)_DAT_006b2c38) /
           (float10)iVar6);
      uVar11 = ftol();
      param_4 = param_4 + 1;
      *(undefined4 *)(piVar5[5] + -4 + param_4 * 4) = uVar11;
    } while (param_4 < iVar6);
  }
  iVar12 = FUN_00692430(param_2 + 0x24,((float)iVar7 * (float)_DAT_006b2c38) / (float)iVar6,iVar6,
                        *(undefined4 *)(param_2 + 0x18));
  piVar5[2] = iVar12;
  pvVar9 = malloc(0xc);
  piVar5[3] = (int)pvVar9;
  iVar12 = 0;
  do {
    pvVar9 = malloc(iVar6 * 4);
    iVar8 = iVar12 + 4;
    *(void **)(iVar12 + piVar5[3]) = pvVar9;
    iVar12 = iVar8;
  } while (iVar8 < 0xc);
  param_4 = 0;
  if (0 < iVar6) {
    fVar17 = (float10)iVar6 + (float10)iVar6;
    do {
      log2((((float10)param_4 + (float10)_DAT_006b2c38) * (float10)iVar7) / fVar17);
      iVar8 = ftol();
      iVar15 = 0;
      iVar12 = iVar8 * 4 + 0x88;
      fVar17 = (float10)_DAT_006b2c48;
      do {
        iVar15 = iVar15 + 4;
        pfVar2 = (float *)(piVar5[1] + -4 + iVar12);
        pfVar1 = (float *)(piVar5[1] + iVar12);
        iVar12 = iVar12 + 0x44;
        *(float *)(*(int *)(piVar5[3] + -4 + iVar15) + param_4 * 4) =
             (float)((extraout_ST0 - (float10)iVar8) * (float10)*pfVar1 +
                    (float10)*pfVar2 * (fVar17 - (extraout_ST0 - (float10)iVar8)));
      } while (iVar15 < 0xc);
      param_4 = param_4 + 1;
      fVar17 = extraout_ST1_00;
    } while (param_4 < iVar6);
  }
  return;
}

