// FUN_00698320  00698320

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00698320(int *param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  uint auStack_44 [4];
  undefined4 uStack_34;
  float local_24 [4];
  int local_14;
  float *local_10;
  
  iVar15 = *param_1;
  iVar16 = iVar15 >> 1;
  iVar10 = iVar15 >> 2;
  iVar18 = iVar15 >> 3;
  uStack_34 = 0x698355;
  iVar6 = iVar15 * -4;
  pfVar12 = (float *)(&stack0xffffffd0 + iVar6);
  iVar1 = iVar16 * 4;
  pfVar8 = (float *)(&stack0xffffffd0 + iVar1 + iVar6);
  pfVar14 = (float *)(param_2 + (iVar10 + iVar16) * 4);
  local_10 = pfVar14 + 1;
  pfVar7 = (float *)(param_1[2] + iVar1);
  iVar11 = 0;
  pfVar19 = pfVar7;
  iVar20 = iVar11;
  pfVar13 = pfVar14;
  if (0 < iVar18) {
    do {
      pfVar14 = pfVar13 + -4;
      pfVar7 = pfVar19 + -2;
      iVar11 = iVar20 + 2;
      fVar2 = pfVar13[-2];
      fVar3 = *local_10;
      fVar4 = local_10[2];
      fVar5 = *pfVar14;
      local_10 = local_10 + 4;
      pfVar8[iVar20] = (fVar2 + fVar3) * *pfVar7 + (fVar4 + fVar5) * pfVar19[-1];
      pfVar8[iVar20 + 1] = (fVar4 + fVar5) * *pfVar7 - (fVar2 + fVar3) * pfVar19[-1];
      pfVar19 = pfVar7;
      iVar20 = iVar11;
      pfVar13 = pfVar14;
    } while (iVar11 < iVar18);
  }
  pfVar19 = (float *)(param_2 + 4);
  for (; iVar11 < iVar16 - iVar18; iVar11 = iVar11 + 2) {
    fVar2 = pfVar14[-2];
    fVar3 = *pfVar19;
    fVar4 = pfVar14[-4];
    pfVar14 = pfVar14 + -4;
    pfVar13 = pfVar7 + -2;
    fVar5 = pfVar19[2];
    pfVar19 = pfVar19 + 4;
    pfVar8[iVar11] = (fVar2 - fVar3) * *pfVar13 + (fVar4 - fVar5) * pfVar7[-1];
    pfVar8[iVar11 + 1] = (fVar4 - fVar5) * *pfVar13 - (fVar2 - fVar3) * pfVar7[-1];
    pfVar7 = pfVar13;
  }
  pfVar14 = (float *)(iVar15 * 4 + param_2);
  for (; iVar11 < iVar16; iVar11 = iVar11 + 2) {
    fVar2 = pfVar14[-2];
    pfVar14 = pfVar14 + -4;
    pfVar13 = pfVar7 + -2;
    fVar3 = *pfVar19;
    fVar4 = *pfVar14;
    fVar5 = pfVar19[2];
    pfVar19 = pfVar19 + 4;
    pfVar8[iVar11] = (-fVar2 - fVar3) * *pfVar13 + (-fVar4 - fVar5) * pfVar7[-1];
    pfVar8[iVar11 + 1] = (-fVar4 - fVar5) * *pfVar13 - (-fVar2 - fVar3) * pfVar7[-1];
    pfVar7 = pfVar13;
  }
  local_14 = param_1[1];
  iVar11 = param_1[2];
  if (0 < local_14 + -6) {
    pfVar14 = pfVar8 + iVar10 + -8 + (iVar16 - iVar10) + 7;
    pfVar7 = pfVar8 + iVar10 + -8;
    pfVar19 = (float *)(iVar11 + 0x10);
    do {
      fVar2 = pfVar14[-1];
      fVar3 = pfVar7[6];
      fVar4 = *pfVar14;
      fVar5 = pfVar7[7];
      pfVar14[-1] = pfVar14[-1] + pfVar7[6];
      *pfVar14 = pfVar7[7] + *pfVar14;
      pfVar7[6] = (fVar2 - fVar3) * pfVar19[-4] + (fVar4 - fVar5) * pfVar19[-3];
      pfVar7[7] = (fVar4 - fVar5) * pfVar19[-4] - (fVar2 - fVar3) * pfVar19[-3];
      fVar2 = pfVar14[-3];
      fVar3 = pfVar7[4];
      fVar4 = pfVar14[-2];
      fVar5 = pfVar7[5];
      pfVar14[-3] = pfVar7[4] + pfVar14[-3];
      pfVar14[-2] = pfVar14[-2] + pfVar7[5];
      pfVar7[4] = (fVar2 - fVar3) * *pfVar19 + (fVar4 - fVar5) * pfVar19[1];
      pfVar7[5] = (fVar4 - fVar5) * *pfVar19 - (fVar2 - fVar3) * pfVar19[1];
      fVar2 = pfVar14[-5];
      fVar3 = pfVar7[2];
      fVar4 = pfVar14[-4];
      fVar5 = pfVar7[3];
      pfVar14[-5] = pfVar7[2] + pfVar14[-5];
      pfVar14[-4] = pfVar14[-4] + pfVar7[3];
      pfVar7[2] = (fVar2 - fVar3) * pfVar19[4] + (fVar4 - fVar5) * pfVar19[5];
      pfVar7[3] = (fVar4 - fVar5) * pfVar19[4] - (fVar2 - fVar3) * pfVar19[5];
      fVar2 = pfVar14[-7];
      fVar3 = *pfVar7;
      fVar4 = pfVar14[-6];
      fVar5 = pfVar7[1];
      pfVar14[-7] = *pfVar7 + pfVar14[-7];
      pfVar14[-6] = pfVar7[1] + pfVar14[-6];
      pfVar13 = pfVar7 + -8;
      pfVar14 = pfVar14 + -8;
      *pfVar7 = (fVar2 - fVar3) * pfVar19[8] + (fVar4 - fVar5) * pfVar19[9];
      pfVar7[1] = (fVar4 - fVar5) * pfVar19[8] - (fVar2 - fVar3) * pfVar19[9];
      pfVar7 = pfVar13;
      pfVar19 = pfVar19 + 0x10;
    } while (pfVar8 <= pfVar13);
  }
  local_14 = local_14 + -7;
  bVar9 = 1;
  if (0 < local_14) {
    do {
      param_2 = 1 << (bVar9 & 0x1f);
      if (0 < param_2) {
        iVar20 = iVar16 >> (bVar9 & 0x1f);
        pfVar14 = pfVar8;
        do {
          auStack_44[4 - iVar15] = 4 << (bVar9 & 0x1f);
          auStack_44[3 - iVar15] = iVar20;
          auStack_44[2 - iVar15] = (uint)pfVar14;
          auStack_44[1 - iVar15] = iVar11;
          auStack_44[-iVar15] = 0x6985b6;
          FUN_00698200();
          pfVar14 = pfVar14 + iVar20;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      bVar9 = bVar9 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (0 < iVar16) {
    iVar11 = (iVar16 - 1U >> 5) + 1;
    do {
      auStack_44[4 - iVar15] = (uint)pfVar8;
      auStack_44[3 - iVar15] = 0x6985f2;
      FUN_00697cc0();
      pfVar8 = pfVar8 + 0x20;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  piVar17 = (int *)param_1[3];
  iVar20 = *param_1 >> 1;
  pfVar8 = (float *)(param_1[2] + *param_1 * 4);
  iVar11 = iVar20 * 4 + iVar6 + -0x30;
  pfVar14 = local_24 + (iVar20 - iVar15);
  pfVar7 = (float *)(&stack0xffffffd8 + iVar6);
  do {
    pfVar19 = (float *)(&stack0xffffffd0 + *piVar17 * 4 + iVar11 + 0x30);
    pfVar13 = (float *)(&stack0xffffffd0 + piVar17[1] * 4 + iVar11 + 0x30);
    fVar3 = (*pfVar13 + *pfVar19) * *pfVar8 + (pfVar19[1] - pfVar13[1]) * pfVar8[1];
    fVar2 = (*pfVar13 + *pfVar19) * pfVar8[1] - (pfVar19[1] - pfVar13[1]) * *pfVar8;
    fVar4 = (pfVar13[1] + pfVar19[1]) * _DAT_006b3654;
    fVar5 = (*pfVar19 - *pfVar13) * _DAT_006b3654;
    pfVar7[-2] = fVar3 + fVar4;
    pfVar14[-5] = fVar4 - fVar3;
    pfVar7[-1] = fVar5 + fVar2;
    pfVar14[-4] = fVar2 - fVar5;
    pfVar19 = (float *)(&stack0xffffffd0 + piVar17[2] * 4 + iVar11 + 0x30);
    pfVar13 = (float *)(&stack0xffffffd0 + piVar17[3] * 4 + iVar11 + 0x30);
    fVar3 = (pfVar19[1] - pfVar13[1]) * pfVar8[3] + (*pfVar13 + *pfVar19) * pfVar8[2];
    fVar2 = (*pfVar13 + *pfVar19) * pfVar8[3] - (pfVar19[1] - pfVar13[1]) * pfVar8[2];
    fVar4 = (pfVar13[1] + pfVar19[1]) * _DAT_006b3654;
    fVar5 = (*pfVar19 - *pfVar13) * _DAT_006b3654;
    *pfVar7 = fVar3 + fVar4;
    pfVar19 = pfVar14 + -7;
    pfVar8 = pfVar8 + 4;
    piVar17 = piVar17 + 4;
    pfVar13 = pfVar7 + 2;
    pfVar14[-7] = fVar4 - fVar3;
    pfVar7[1] = fVar5 + fVar2;
    pfVar14[-6] = fVar2 - fVar5;
    pfVar14 = pfVar14 + -4;
    pfVar7 = pfVar7 + 4;
  } while (pfVar13 < pfVar19);
  iVar15 = 0;
  pfVar8 = (float *)(param_1[2] + iVar1);
  pfVar14 = (float *)(iVar1 + param_3);
  if (0 < iVar10) {
    do {
      pfVar14 = pfVar14 + -1;
      iVar15 = iVar15 + 1;
      *(float *)(param_3 + -4 + iVar15 * 4) =
           (pfVar8[1] * pfVar12[1] + *pfVar8 * *pfVar12) * (float)param_1[4];
      *pfVar14 = (pfVar8[1] * *pfVar12 - *pfVar8 * pfVar12[1]) * (float)param_1[4];
      pfVar8 = pfVar8 + 2;
      pfVar12 = pfVar12 + 2;
    } while (iVar15 < iVar10);
  }
  return;
}

