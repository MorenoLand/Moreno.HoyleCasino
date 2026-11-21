// FUN_0069a620  0069a620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0069a620(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float local_3c;
  int local_38;
  int local_28;
  int local_24;
  
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[3];
  iVar3 = piVar1[2];
  uVar6 = (piVar1[1] - *piVar1) / iVar3;
  piVar7 = (int *)FUN_00690e40(param_1,param_4 * 4);
  iVar12 = 0;
  if (0 < param_4) {
    do {
      puVar8 = (undefined4 *)FUN_00690e40(param_1,uVar6 << 2);
      piVar7[iVar12] = (int)puVar8;
      for (uVar9 = uVar6 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      iVar12 = iVar12 + 1;
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    } while (iVar12 < param_4);
  }
  local_24 = 0;
  if (0 < (int)uVar6) {
    local_38 = 0;
    do {
      iVar12 = *piVar1;
      if (0 < param_4) {
        piVar11 = piVar7;
        local_28 = param_4;
        do {
          local_3c = 0.0;
          if (0 < iVar3) {
            iVar10 = (iVar12 + local_38) * 4;
            iVar13 = iVar3;
            do {
              iVar4 = *(int *)((param_3 - (int)piVar7) + (int)piVar11);
              fVar5 = ABS(*(float *)(iVar10 + iVar4));
              if (local_3c < fVar5) {
                local_3c = fVar5;
              }
              floor((double)(*(float *)(iVar10 + iVar4) + _DAT_006b3654));
              iVar10 = iVar10 + 4;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          iVar10 = 0;
          if (0 < iVar2 + -1) {
            pfVar14 = (float *)(piVar1 + 0x185);
            do {
              if ((local_3c < pfVar14[-0x40] != (local_3c == pfVar14[-0x40])) &&
                 ((*pfVar14 < _DAT_006c2fe8 || (iVar13 = ftol(), (float)iVar13 < *pfVar14)))) break;
              iVar10 = iVar10 + 1;
              pfVar14 = pfVar14 + 1;
            } while (iVar10 < iVar2 + -1);
          }
          iVar13 = *piVar11;
          piVar11 = piVar11 + 1;
          local_28 = local_28 + -1;
          *(int *)(iVar13 + local_24 * 4) = iVar10;
        } while (local_28 != 0);
      }
      local_24 = local_24 + 1;
      local_38 = local_38 + iVar3;
    } while (local_24 < (int)uVar6);
  }
  param_2[10] = param_2[10] + 1;
  return piVar7;
}

