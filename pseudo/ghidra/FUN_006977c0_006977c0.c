// FUN_006977c0  006977c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006977c0(int *param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  byte bVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int *piVar16;
  float *pfVar17;
  int iVar18;
  int local_18;
  
  iVar18 = *param_1 >> 1;
  iVar7 = *param_1 >> 2;
  pfVar11 = (float *)(param_3 + (iVar7 + iVar18) * 4);
  iVar1 = iVar7 * 4;
  pfVar8 = (float *)(param_1[2] + iVar1);
  pfVar10 = param_2 + iVar18 + -7;
  pfVar9 = pfVar11;
  do {
    pfVar15 = pfVar10 + -8;
    pfVar9[-4] = -(pfVar10[2] * pfVar8[3]) - *pfVar10 * pfVar8[2];
    pfVar9[-3] = *pfVar10 * pfVar8[3] - pfVar10[2] * pfVar8[2];
    pfVar9[-2] = -(pfVar8[1] * pfVar10[6]) - pfVar10[4] * *pfVar8;
    pfVar9[-1] = pfVar8[1] * pfVar10[4] - *pfVar8 * pfVar10[6];
    pfVar8 = pfVar8 + 4;
    pfVar10 = pfVar15;
    pfVar9 = pfVar9 + -4;
  } while (param_2 <= pfVar15);
  pfVar8 = (float *)(param_1[2] + iVar1);
  pfVar10 = param_2 + iVar18 + -8;
  pfVar9 = pfVar11;
  do {
    pfVar15 = pfVar8 + -4;
    pfVar17 = pfVar10 + -8;
    *pfVar9 = pfVar8[-2] * pfVar10[6] + pfVar10[4] * pfVar8[-1];
    pfVar9[1] = pfVar10[4] * pfVar8[-2] - pfVar8[-1] * pfVar10[6];
    pfVar9[2] = *pfVar10 * pfVar8[-3] + pfVar10[2] * *pfVar15;
    pfVar9[3] = *pfVar10 * *pfVar15 - pfVar8[-3] * pfVar10[2];
    pfVar8 = pfVar15;
    pfVar10 = pfVar17;
    pfVar9 = pfVar9 + 4;
  } while (param_2 <= pfVar17);
  iVar6 = param_1[2];
  pfVar8 = (float *)(param_3 + iVar18 * 4);
  local_18 = param_1[1];
  if (0 < local_18 + -6) {
    pfVar10 = pfVar8 + iVar7 + -8 + (iVar18 - iVar7) + 7;
    pfVar9 = pfVar8 + iVar7 + -8;
    pfVar15 = (float *)(iVar6 + 0x10);
    do {
      fVar2 = pfVar10[-1];
      fVar3 = pfVar9[6];
      fVar4 = *pfVar10;
      fVar5 = pfVar9[7];
      pfVar10[-1] = pfVar10[-1] + pfVar9[6];
      *pfVar10 = pfVar9[7] + *pfVar10;
      pfVar9[6] = (fVar4 - fVar5) * pfVar15[-3] + (fVar2 - fVar3) * pfVar15[-4];
      pfVar9[7] = (fVar4 - fVar5) * pfVar15[-4] - (fVar2 - fVar3) * pfVar15[-3];
      fVar2 = pfVar10[-3];
      fVar3 = pfVar9[4];
      fVar4 = pfVar10[-2];
      fVar5 = pfVar9[5];
      pfVar10[-3] = pfVar10[-3] + pfVar9[4];
      pfVar10[-2] = pfVar10[-2] + pfVar9[5];
      pfVar9[4] = (fVar2 - fVar3) * *pfVar15 + (fVar4 - fVar5) * pfVar15[1];
      pfVar9[5] = (fVar4 - fVar5) * *pfVar15 - (fVar2 - fVar3) * pfVar15[1];
      fVar2 = pfVar10[-5];
      fVar3 = pfVar9[2];
      fVar4 = pfVar10[-4];
      fVar5 = pfVar9[3];
      pfVar10[-5] = pfVar9[2] + pfVar10[-5];
      pfVar10[-4] = pfVar9[3] + pfVar10[-4];
      pfVar9[2] = (fVar2 - fVar3) * pfVar15[4] + (fVar4 - fVar5) * pfVar15[5];
      pfVar9[3] = (fVar4 - fVar5) * pfVar15[4] - (fVar2 - fVar3) * pfVar15[5];
      fVar2 = pfVar10[-7];
      fVar3 = *pfVar9;
      fVar4 = pfVar10[-6];
      fVar5 = pfVar9[1];
      pfVar10[-7] = pfVar10[-7] + *pfVar9;
      pfVar10[-6] = pfVar9[1] + pfVar10[-6];
      pfVar17 = pfVar9 + -8;
      pfVar10 = pfVar10 + -8;
      *pfVar9 = (fVar2 - fVar3) * pfVar15[8] + (fVar4 - fVar5) * pfVar15[9];
      pfVar9[1] = (fVar4 - fVar5) * pfVar15[8] - (fVar2 - fVar3) * pfVar15[9];
      pfVar9 = pfVar17;
      pfVar15 = pfVar15 + 0x10;
    } while (pfVar8 <= pfVar17);
  }
  local_18 = local_18 + -7;
  bVar12 = 1;
  if (0 < local_18) {
    do {
      param_2 = (float *)(1 << (bVar12 & 0x1f));
      if (0 < (int)param_2) {
        iVar7 = iVar18 >> (bVar12 & 0x1f);
        pfVar10 = pfVar8;
        do {
          FUN_00698200(iVar6,pfVar10,iVar7,4 << (bVar12 & 0x1f));
          pfVar10 = pfVar10 + iVar7;
          param_2 = (float *)((int)param_2 + -1);
        } while (param_2 != (float *)0x0);
      }
      bVar12 = bVar12 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (0 < iVar18) {
    iVar7 = (iVar18 - 1U >> 5) + 1;
    pfVar10 = pfVar8;
    do {
      FUN_00697cc0(pfVar10);
      pfVar10 = pfVar10 + 0x20;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  piVar16 = (int *)param_1[3];
  iVar7 = param_3 + (*param_1 >> 1) * 4;
  pfVar10 = (float *)(param_1[2] + *param_1 * 4);
  pfVar9 = (float *)(iVar7 + 0xc);
  pfVar15 = (float *)(param_3 + 8);
  do {
    iVar6 = piVar16[1];
    fVar2 = *(float *)(iVar7 + 4 + *piVar16 * 4) - *(float *)(iVar7 + 4 + iVar6 * 4);
    pfVar17 = (float *)(iVar7 + *piVar16 * 4);
    pfVar13 = (float *)(iVar7 + iVar6 * 4);
    fVar3 = *(float *)(iVar7 + iVar6 * 4) + *pfVar17;
    fVar4 = fVar2 * pfVar10[1] + fVar3 * *pfVar10;
    fVar2 = fVar3 * pfVar10[1] - fVar2 * *pfVar10;
    fVar3 = (pfVar13[1] + pfVar17[1]) * _DAT_006b3654;
    fVar5 = (*pfVar17 - *pfVar13) * _DAT_006b3654;
    pfVar15[-2] = fVar4 + fVar3;
    pfVar9[-5] = fVar3 - fVar4;
    pfVar15[-1] = fVar5 + fVar2;
    pfVar9[-4] = fVar2 - fVar5;
    iVar6 = piVar16[3];
    fVar2 = *(float *)(iVar7 + 4 + piVar16[2] * 4) - *(float *)(iVar7 + 4 + iVar6 * 4);
    pfVar17 = (float *)(iVar7 + piVar16[2] * 4);
    pfVar13 = (float *)(iVar7 + iVar6 * 4);
    fVar3 = *(float *)(iVar7 + iVar6 * 4) + *pfVar17;
    fVar4 = fVar2 * pfVar10[3] + fVar3 * pfVar10[2];
    fVar2 = fVar3 * pfVar10[3] - fVar2 * pfVar10[2];
    fVar3 = (pfVar13[1] + pfVar17[1]) * _DAT_006b3654;
    fVar5 = (*pfVar17 - *pfVar13) * _DAT_006b3654;
    *pfVar15 = fVar4 + fVar3;
    pfVar9[-7] = fVar3 - fVar4;
    pfVar15[1] = fVar5 + fVar2;
    pfVar17 = pfVar9 + -7;
    pfVar10 = pfVar10 + 4;
    piVar16 = piVar16 + 4;
    pfVar13 = pfVar15 + 2;
    pfVar9[-6] = fVar2 - fVar5;
    pfVar9 = pfVar9 + -4;
    pfVar15 = pfVar15 + 4;
  } while (pfVar13 < pfVar17);
  pfVar10 = (float *)(param_1[2] + iVar18 * 4);
  pfVar9 = (float *)(param_3 + 0xc);
  pfVar15 = pfVar11;
  pfVar17 = pfVar11;
  do {
    pfVar14 = pfVar15 + -4;
    pfVar13 = pfVar9 + 5;
    pfVar15[-1] = pfVar10[1] * pfVar9[-3] - *pfVar10 * pfVar9[-2];
    *pfVar17 = -(pfVar9[-3] * *pfVar10 + pfVar10[1] * pfVar9[-2]);
    pfVar15[-2] = pfVar9[-1] * pfVar10[3] - *pfVar9 * pfVar10[2];
    pfVar17[1] = -(*pfVar9 * pfVar10[3] + pfVar9[-1] * pfVar10[2]);
    pfVar15[-3] = pfVar9[1] * pfVar10[5] - pfVar9[2] * pfVar10[4];
    pfVar17[2] = -(pfVar9[2] * pfVar10[5] + pfVar9[1] * pfVar10[4]);
    *pfVar14 = pfVar9[3] * pfVar10[7] - pfVar9[4] * pfVar10[6];
    pfVar17[3] = -(pfVar9[4] * pfVar10[7] + pfVar9[3] * pfVar10[6]);
    pfVar10 = pfVar10 + 8;
    pfVar9 = pfVar9 + 8;
    pfVar15 = pfVar14;
    pfVar17 = pfVar17 + 4;
  } while (pfVar13 < pfVar14);
  pfVar10 = pfVar11;
  pfVar9 = (float *)(iVar1 + 8 + param_3);
  pfVar15 = pfVar11 + (2 - iVar18);
  do {
    fVar2 = pfVar10[-1];
    pfVar14 = pfVar10 + -4;
    pfVar15[-3] = fVar2;
    pfVar9[-2] = -fVar2;
    fVar2 = pfVar10[-2];
    pfVar17 = pfVar9 + 2;
    pfVar15[-4] = fVar2;
    pfVar9[-1] = -fVar2;
    fVar2 = pfVar10[-3];
    pfVar15[-5] = fVar2;
    *pfVar9 = -fVar2;
    fVar2 = *pfVar14;
    pfVar15[-6] = fVar2;
    pfVar9[1] = -fVar2;
    pfVar10 = pfVar14;
    pfVar13 = pfVar11;
    pfVar9 = pfVar9 + 4;
    pfVar15 = pfVar15 + -4;
  } while (pfVar17 < pfVar14);
  do {
    pfVar10 = pfVar11 + -4;
    *pfVar10 = pfVar13[3];
    pfVar11[-3] = pfVar13[2];
    pfVar11[-2] = pfVar13[1];
    pfVar11[-1] = *pfVar13;
    pfVar11 = pfVar10;
    pfVar13 = pfVar13 + 4;
  } while (pfVar8 < pfVar10);
  return;
}

