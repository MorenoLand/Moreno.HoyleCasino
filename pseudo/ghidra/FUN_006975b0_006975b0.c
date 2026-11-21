// FUN_006975b0  006975b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006975b0(int *param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  int local_10;
  int local_c;
  
  iVar9 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
  pvVar1 = malloc(iVar9 * 4);
  pvVar2 = malloc((iVar9 + param_2) * 4);
  fVar15 = (float10)log2((float10)param_2);
  fVar12 = (float10)log2((float10)_PTR_006b3740);
  floor((double)(((float10)0.6931471805599453 * fVar15) / ((float10)0.6931471805599453 * fVar12) +
                (float10)_DAT_006b2c38));
  iVar3 = ftol();
  param_1[1] = iVar3;
  iVar4 = 0;
  *param_1 = param_2;
  param_1[2] = (int)pvVar2;
  param_1[3] = (int)pvVar1;
  if (0 < iVar9) {
    fVar12 = (float10)_DAT_006e57d0;
    local_10 = 0;
    local_c = 1;
    fVar15 = (float10)_DAT_006e57d0;
    pfVar6 = (float *)((int)pvVar2 + (param_2 >> 1) * 4);
    do {
      fVar13 = (float10)local_10;
      iVar4 = iVar4 + 1;
      local_10 = local_10 + 4;
      fVar13 = fVar13 * (fVar12 / (float10)param_2);
      fVar14 = (float10)fcos(fVar13);
      *(float *)((int)pvVar2 + iVar4 * 8 + -8) = (float)fVar14;
      fVar13 = (float10)fsin(fVar13);
      *(float *)((int)pvVar2 + iVar4 * 8 + -4) = (float)-fVar13;
      fVar13 = (float10)local_c * (fVar15 / (float10)(param_2 * 2));
      fVar14 = (float10)fcos(fVar13);
      *pfVar6 = (float)fVar14;
      fVar13 = (float10)fsin(fVar13);
      pfVar6[1] = (float)fVar13;
      pfVar6 = pfVar6 + 2;
      local_c = local_c + 2;
    } while (iVar4 < iVar9);
  }
  iVar4 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  if (0 < iVar4) {
    fVar15 = (float10)_DAT_006e57d0;
    local_c = 2;
    iVar9 = iVar4;
    pfVar6 = (float *)((int)pvVar2 + param_2 * 4);
    do {
      fVar12 = (float10)local_c;
      local_c = local_c + 4;
      iVar9 = iVar9 + -1;
      fVar12 = fVar12 * (fVar15 / (float10)param_2);
      fVar13 = (float10)fcos(fVar12);
      *pfVar6 = (float)(fVar13 * (float10)_DAT_006b2c38);
      fVar12 = (float10)fsin(fVar12);
      pfVar6[1] = (float)(fVar12 * (float10)_DAT_006e57c8);
      pfVar6 = pfVar6 + 2;
    } while (iVar9 != 0);
  }
  uVar11 = 0;
  uVar10 = 1 << ((char)iVar3 - 2U & 0x1f);
  if (0 < iVar4) {
    do {
      uVar8 = 0;
      bVar5 = 0;
      uVar7 = uVar10;
      while (uVar7 != 0) {
        if ((uVar11 & uVar7) != 0) {
          uVar8 = uVar8 | 1 << (bVar5 & 0x1f);
        }
        bVar5 = bVar5 + 1;
        uVar7 = (int)uVar10 >> (bVar5 & 0x1f);
      }
      *(uint *)((int)pvVar1 + uVar11 * 8 + 4) = uVar8;
      *(uint *)((int)pvVar1 + uVar11 * 8) = (~uVar8 & (1 << ((char)iVar3 - 1U & 0x1f)) - 1U) - 1;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar4);
  }
  param_1[4] = (int)(_DAT_006e57c0 / (float)param_2);
  return;
}

