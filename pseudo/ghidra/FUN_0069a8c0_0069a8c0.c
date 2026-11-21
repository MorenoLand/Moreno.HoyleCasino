// FUN_0069a8c0  0069a8c0

int * FUN_0069a8c0(float param_1,int *param_2,int *param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int local_c;
  
  iVar5 = (int)param_4;
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[3];
  iVar10 = piVar1[1];
  iVar3 = piVar1[2];
  iVar12 = *piVar1;
  iVar6 = (iVar10 - iVar12) / iVar3;
  piVar7 = (int *)FUN_00690e40(param_1,4);
  uVar8 = ((iVar10 - iVar12) * (int)param_4) / iVar3;
  puVar9 = (undefined4 *)FUN_00690e40(param_1,uVar8 << 2);
  *piVar7 = (int)puVar9;
  local_c = 0;
  for (uVar8 = uVar8 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  iVar10 = *piVar1 / (int)param_4;
  if (0 < iVar6) {
    do {
      iVar12 = 0;
      param_1 = 0.0;
      param_4 = 0.0;
      if (0 < iVar3) {
        do {
          fVar4 = ABS(*(float *)(*param_3 + iVar10 * 4));
          if (param_1 < fVar4) {
            param_1 = fVar4;
          }
          iVar11 = 1;
          if (1 < iVar5) {
            do {
              fVar4 = ABS(*(float *)(param_3[iVar11] + iVar10 * 4));
              if (param_4 < fVar4) {
                param_4 = fVar4;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar5);
          }
          iVar12 = iVar12 + iVar5;
          iVar10 = iVar10 + 1;
        } while (iVar12 < iVar3);
      }
      iVar12 = 0;
      if (0 < iVar2 + -1) {
        pfVar13 = (float *)(piVar1 + 0x185);
        do {
          if ((param_1 < pfVar13[-0x40] != (param_1 == pfVar13[-0x40])) &&
             (param_4 < *pfVar13 != (param_4 == *pfVar13))) break;
          iVar12 = iVar12 + 1;
          pfVar13 = pfVar13 + 1;
        } while (iVar12 < iVar2 + -1);
      }
      local_c = local_c + 1;
      *(int *)(*piVar7 + -4 + local_c * 4) = iVar12;
    } while (local_c < iVar6);
  }
  param_2[10] = param_2[10] + 1;
  return piVar7;
}

