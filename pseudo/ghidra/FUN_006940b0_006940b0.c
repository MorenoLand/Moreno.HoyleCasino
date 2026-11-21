// FUN_006940b0  006940b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006940b0(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,
                 int *param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int extraout_ECX;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float10 fVar19;
  double dVar20;
  float local_68;
  int *local_60;
  int local_54;
  int local_4c;
  int local_38;
  int local_30;
  int local_2c;
  
  iVar6 = *param_3;
  local_2c = 0;
  if (0 < *(int *)(param_4 + 0x484)) {
    piVar13 = (int *)(param_4 + 0x888);
    local_60 = param_7;
    iVar15 = iVar6;
    do {
      iVar14 = piVar13[-0x100] * 4;
      if ((*(int *)(iVar14 + param_9) != 0) || (*(int *)(param_9 + *piVar13 * 4) != 0)) {
        iVar7 = *(int *)(iVar14 + param_5);
        iVar8 = *(int *)(*piVar13 * 4 + param_5);
        iVar1 = iVar7 + iVar6 * 4;
        iVar9 = *(int *)(iVar14 + param_8);
        iVar10 = *(int *)(*piVar13 * 4 + param_8);
        dVar4 = *(double *)(&DAT_00787408 + *(int *)(param_2 + 0xfc + param_1 * 4) * 8);
        dVar5 = *(double *)(&DAT_00787408 + *(int *)(param_2 + 0x138 + param_1 * 4) * 8);
        piVar11 = (int *)param_3[1];
        iVar16 = iVar15;
        if (piVar11[0x7e] != 0) {
          iVar16 = piVar11[0x80];
        }
        iVar12 = *(int *)(param_2 + 0x84 + (param_1 + *piVar11 * 0xf) * 4);
        *(undefined4 *)(iVar14 + param_9) = 1;
        *(undefined4 *)(param_9 + *piVar13 * 4) = 1;
        iVar15 = *param_3;
        local_30 = 0;
        if (0 < iVar15) {
          local_4c = 0;
          do {
            local_68 = 0.0;
            if (0 < iVar16) {
              pfVar18 = (float *)(local_4c + iVar8);
              iVar14 = iVar7 - iVar8;
              iVar17 = iVar1 - iVar8;
              iVar15 = local_30;
              local_54 = local_4c;
              local_38 = iVar16;
              do {
                if (iVar15 < param_10) {
                  if ((((iVar12 <= iVar15) &&
                       (ABS(*(float *)(iVar14 + (int)pfVar18)) < (float)dVar5)) &&
                      (ABS(*pfVar18) < (float)dVar5)) ||
                     ((ABS(*(float *)(iVar14 + (int)pfVar18)) < (float)dVar4 &&
                      (ABS(*pfVar18) < (float)dVar4)))) {
                    pfVar2 = (float *)(iVar17 + (int)pfVar18);
                    puVar3 = (undefined4 *)((iVar9 - iVar8) + (int)pfVar18);
                    FUN_00694560(*(undefined4 *)
                                  (*(int *)((int)local_60 + (param_6 - (int)param_7)) + local_54),
                                 *puVar3,*(undefined4 *)((int)puVar3 + (iVar10 - iVar9)),pfVar2,
                                 pfVar18 + iVar6);
                    dVar20 = floor((double)(*pfVar2 + _DAT_006b3654));
                    if (dVar20 == _DAT_006b2c50) {
                      local_68 = *pfVar2 * *pfVar2 + local_68;
                    }
                  }
                  else {
                    FUN_00694480(*(undefined4 *)(iVar14 + (int)pfVar18),*pfVar18,
                                 iVar17 + (int)pfVar18,pfVar18 + iVar6);
                  }
                }
                else {
                  *(undefined4 *)(iVar17 + (int)pfVar18) = 0;
                  pfVar18[iVar6] = 0.0;
                }
                local_54 = local_54 + 4;
                pfVar18 = pfVar18 + 1;
                iVar15 = iVar15 + 1;
                local_38 = local_38 + -1;
              } while (local_38 != 0);
            }
            if ((*(int *)(param_3[1] + 0x1f8) != 0) && (local_38 = 0, iVar15 = local_4c, 0 < iVar16)
               ) {
              do {
                if (local_68 < (float)*(double *)(param_3[1] + 0x208)) break;
                iVar14 = *(int *)(iVar15 + *local_60);
                if (((iVar14 < param_10) && (iVar12 <= iVar14)) &&
                   (dVar20 = floor((double)(*(float *)(iVar1 + iVar14 * 4) + _DAT_006b3654)),
                   dVar20 == _DAT_006b2c50)) {
                  fVar19 = (float10)FUN_00694090();
                  *(float *)(extraout_ECX + iVar14 * 4) = (float)fVar19;
                  local_68 = local_68 - _DAT_006b3650;
                }
                local_38 = local_38 + 1;
                iVar15 = iVar15 + 4;
              } while (local_38 < iVar16);
            }
            local_30 = local_30 + iVar16;
            local_4c = local_4c + iVar16 * 4;
            iVar15 = *param_3;
          } while (local_30 < iVar15);
        }
      }
      local_2c = local_2c + 1;
      piVar13 = piVar13 + 1;
      local_60 = local_60 + 1;
    } while (local_2c < *(int *)(param_4 + 0x484));
  }
  return;
}

