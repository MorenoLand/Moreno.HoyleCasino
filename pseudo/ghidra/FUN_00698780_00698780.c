// FUN_00698780  00698780

void FUN_00698780(undefined4 *param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  
  param_4 = -(uint)(param_5 != 0) & param_4;
  param_6 = -(uint)(param_5 != 0) & param_6;
  pfVar8 = (float *)(&PTR_DAT_0078f898)[*(int *)(param_2 + param_4 * 4)];
  puVar2 = (&PTR_DAT_0078f898)[*(int *)(param_2 + param_6 * 4)];
  iVar7 = *(int *)(param_3 + param_5 * 4);
  iVar3 = *(int *)(param_3 + param_4 * 4);
  iVar10 = *(int *)(param_3 + param_6 * 4);
  iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
  iVar9 = iVar5 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  iVar5 = (iVar7 / 2 - ((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2)) + iVar5;
  iVar6 = iVar9;
  puVar11 = param_1;
  iVar4 = 0;
  if (0 < iVar9) {
    for (; iVar4 = iVar9, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  }
  for (; iVar4 < iVar3 / 2 + iVar9; iVar4 = iVar4 + 1) {
    fVar1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    param_1[iVar4] = fVar1 * (float)param_1[iVar4];
  }
  iVar3 = iVar10 / 2 + iVar5;
  if (iVar5 < iVar3) {
    pfVar8 = (float *)(puVar2 + (iVar10 / 2) * 4 + -4);
    iVar10 = iVar5;
    do {
      iVar5 = iVar10 + 1;
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + -1;
      param_1[iVar10] = fVar1 * (float)param_1[iVar10];
      iVar10 = iVar5;
    } while (iVar5 < iVar3);
  }
  if (iVar5 < iVar7) {
    puVar11 = param_1 + iVar5;
    for (iVar7 = iVar7 - iVar5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  }
  return;
}

