// FUN_00696660  00696660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00696660(int param_1,float *param_2,int param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  int iVar24;
  float *pfVar25;
  float *pfVar26;
  float10 fVar27;
  float10 fVar28;
  float *local_44;
  float *local_3c;
  float *local_38;
  int local_30;
  int local_2c;
  float *local_28;
  int local_24;
  int local_20;
  
  iVar24 = param_1;
  local_20 = (int)param_2 + 1 >> 1;
  iVar6 = param_1 + -1 >> 1;
  iVar7 = param_1 * param_3;
  fVar27 = (float10)fcos((float10)_DAT_00787900 / (float10)(int)param_2);
  iVar8 = param_1 * (int)param_2;
  fVar28 = (float10)fsin((float10)_DAT_00787900 / (float10)(int)param_2);
  if (param_1 != 1) {
    if (0 < (int)param_4) {
      pfVar22 = param_9;
      iVar20 = (int)param_4;
      do {
        *pfVar22 = *(float *)(((int)param_7 - (int)param_9) + (int)pfVar22);
        pfVar22 = pfVar22 + 1;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    if (1 < (int)param_2) {
      local_38 = (float *)((int)param_2 + -1);
      pfVar22 = param_8;
      do {
        pfVar22 = pfVar22 + iVar7;
        if (0 < param_3) {
          pfVar13 = pfVar22;
          iVar20 = param_3;
          do {
            *pfVar13 = *(float *)(((int)param_6 - (int)param_8) + (int)pfVar13);
            pfVar13 = pfVar13 + param_1;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        local_38 = (float *)((int)local_38 + -1);
      } while (local_38 != (float *)0x0);
    }
    local_3c = (float *)-param_1;
    if (param_3 < iVar6) {
      if (1 < (int)param_2) {
        param_10 = (float *)((int)param_10 + -4 + param_1 * -4);
        pfVar22 = param_8 + -param_1;
        pfVar13 = (float *)((int)param_6 - (param_1 * 4 + 4));
        local_28 = (float *)((int)param_2 + -1);
        do {
          pfVar22 = pfVar22 + iVar7;
          pfVar13 = pfVar13 + iVar7;
          param_10 = param_10 + param_1;
          if (0 < param_3) {
            local_2c = param_3;
            pfVar18 = pfVar22;
            local_44 = pfVar13;
            do {
              pfVar18 = pfVar18 + param_1;
              local_44 = local_44 + param_1;
              if (2 < param_1) {
                iVar20 = (param_1 - 3U >> 1) + 1;
                pfVar12 = local_44;
                pfVar19 = param_10;
                pfVar9 = pfVar18;
                do {
                  pfVar25 = pfVar12 + 2;
                  pfVar10 = pfVar19 + 2;
                  pfVar9 = pfVar9 + 2;
                  iVar20 = iVar20 + -1;
                  *(float *)(((int)param_8 - (int)param_6) + (int)pfVar25) =
                       pfVar12[3] * *pfVar10 + pfVar12[2] * pfVar19[1];
                  *pfVar9 = pfVar12[3] * pfVar19[1] - *pfVar10 * *pfVar25;
                  pfVar12 = pfVar25;
                  pfVar19 = pfVar10;
                } while (iVar20 != 0);
              }
              local_2c = local_2c + -1;
            } while (local_2c != 0);
          }
          local_28 = (float *)((int)local_28 + -1);
        } while (local_28 != (float *)0x0);
      }
    }
    else if (1 < (int)param_2) {
      pfVar13 = (float *)((int)param_10 + -4 + param_1 * -4);
      pfVar22 = param_6 + -1;
      local_28 = (float *)((int)param_2 + -1);
      pfVar18 = param_8;
      do {
        pfVar13 = pfVar13 + param_1;
        pfVar18 = pfVar18 + iVar7;
        pfVar22 = pfVar22 + iVar7;
        if (2 < param_1) {
          iVar20 = (param_1 - 3U >> 1) + 1;
          pfVar12 = pfVar22;
          pfVar19 = pfVar13;
          pfVar9 = pfVar18;
          do {
            pfVar25 = pfVar19 + 2;
            pfVar9 = pfVar9 + 2;
            pfVar12 = pfVar12 + 2;
            if (0 < param_3) {
              pfVar10 = pfVar12;
              pfVar16 = pfVar9;
              iVar14 = param_3;
              do {
                *(float *)((int)pfVar10 + ((int)param_8 - (int)param_6)) =
                     pfVar19[1] * *pfVar10 + pfVar10[1] * *pfVar25;
                pfVar23 = pfVar10 + 1;
                fVar1 = *pfVar10;
                pfVar10 = pfVar10 + param_1;
                *pfVar16 = pfVar19[1] * *pfVar23 - fVar1 * *pfVar25;
                pfVar16 = pfVar16 + param_1;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
            iVar20 = iVar20 + -1;
            pfVar19 = pfVar25;
          } while (iVar20 != 0);
        }
        local_28 = (float *)((int)local_28 + -1);
      } while (local_28 != (float *)0x0);
    }
    iVar20 = iVar7 * (int)param_2;
    param_10 = (float *)0x0;
    if (iVar6 < param_3) {
      if (1 < local_20) {
        pfVar13 = param_6 + -param_1;
        pfVar22 = (float *)((int)param_8 - (param_1 * 4 + 4));
        local_24 = local_20 + -1;
        do {
          param_10 = (float *)((int)param_10 + iVar7);
          iVar20 = iVar20 - iVar7;
          pfVar13 = pfVar13 + iVar7;
          pfVar22 = pfVar22 + iVar7;
          local_3c = (float *)((int)local_3c + iVar7);
          if (2 < param_1) {
            iVar21 = (param_1 - 3U >> 1) + 1;
            pfVar18 = pfVar22;
            iVar14 = (int)local_3c;
            pfVar12 = pfVar13;
            do {
              pfVar12 = pfVar12 + 2;
              pfVar18 = pfVar18 + 2;
              iVar14 = iVar14 + 2;
              if (0 < param_3) {
                iVar15 = iVar14 + (iVar20 - (int)param_10);
                local_28 = param_6 + iVar15;
                pfVar19 = param_8 + iVar15 + -1;
                local_2c = param_3;
                pfVar9 = pfVar18;
                pfVar25 = pfVar12;
                do {
                  pfVar10 = pfVar9 + param_1;
                  pfVar16 = pfVar19 + param_1;
                  pfVar9 = pfVar9 + param_1;
                  pfVar19 = pfVar19 + param_1;
                  pfVar25 = pfVar25 + param_1;
                  local_28 = local_28 + param_1;
                  *(float *)((int)pfVar9 + ((int)param_6 - (int)param_8)) = *pfVar10 + *pfVar16;
                  *(float *)((int)pfVar19 + ((int)param_6 - (int)param_8)) = pfVar9[1] - pfVar19[1];
                  *pfVar25 = pfVar19[1] + pfVar9[1];
                  *local_28 = *pfVar19 - *pfVar9;
                  local_2c = local_2c + -1;
                } while (local_2c != 0);
              }
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
          }
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
    }
    else if (1 < local_20) {
      pfVar13 = param_6 + iVar20;
      pfVar18 = param_8 + iVar20 + -1;
      pfVar22 = param_8 + -1;
      local_38 = (float *)(local_20 + -1);
      pfVar12 = param_6;
      do {
        pfVar12 = pfVar12 + iVar7;
        pfVar22 = pfVar22 + iVar7;
        pfVar13 = pfVar13 + -iVar7;
        pfVar18 = pfVar18 + -iVar7;
        if (0 < param_3) {
          local_30 = param_3;
          pfVar19 = pfVar18;
          pfVar9 = pfVar13;
          pfVar25 = pfVar12;
          param_10 = pfVar22;
          do {
            if (2 < param_1) {
              iVar20 = (param_1 - 3U >> 1) + 1;
              pfVar10 = param_10;
              pfVar16 = pfVar19;
              pfVar23 = pfVar9;
              pfVar26 = pfVar25;
              do {
                pfVar11 = pfVar10 + 2;
                pfVar17 = pfVar16 + 2;
                pfVar26 = pfVar26 + 2;
                pfVar23 = pfVar23 + 2;
                iVar20 = iVar20 + -1;
                *(float *)((int)pfVar11 + ((int)param_6 - (int)param_8)) = pfVar10[2] + pfVar16[2];
                *(float *)((int)pfVar17 + ((int)param_6 - (int)param_8)) = pfVar10[3] - pfVar16[3];
                *pfVar26 = pfVar16[3] + pfVar10[3];
                *pfVar23 = *pfVar17 - *pfVar11;
                pfVar10 = pfVar11;
                pfVar16 = pfVar17;
              } while (iVar20 != 0);
            }
            param_10 = param_10 + param_1;
            pfVar25 = pfVar25 + param_1;
            pfVar9 = pfVar9 + param_1;
            pfVar19 = pfVar19 + param_1;
            local_30 = local_30 + -1;
          } while (local_30 != 0);
        }
        local_38 = (float *)((int)local_38 + -1);
      } while (local_38 != (float *)0x0);
    }
  }
  if (0 < (int)param_4) {
    pfVar22 = param_7;
    iVar20 = (int)param_4;
    do {
      *pfVar22 = *(float *)(((int)param_9 - (int)param_7) + (int)pfVar22);
      pfVar22 = pfVar22 + 1;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  iVar20 = 0;
  if (1 < local_20) {
    pfVar22 = param_8 + -param_1;
    iVar21 = -param_1;
    local_28 = (float *)(local_20 + -1);
    iVar14 = (int)param_2 * (int)param_4;
    do {
      iVar20 = iVar20 + iVar7;
      pfVar22 = pfVar22 + iVar7;
      iVar21 = iVar21 + iVar7;
      iVar14 = iVar14 - iVar7;
      if (0 < param_3) {
        pfVar13 = param_8 + (iVar21 - iVar20) + iVar14;
        local_24 = param_3;
        pfVar18 = pfVar22;
        do {
          pfVar18 = pfVar18 + param_1;
          pfVar13 = pfVar13 + param_1;
          local_24 = local_24 + -1;
          *(float *)((int)pfVar18 + ((int)param_6 - (int)param_8)) = *pfVar18 + *pfVar13;
          *(float *)((int)pfVar13 + ((int)param_6 - (int)param_8)) = *pfVar13 - *pfVar18;
        } while (local_24 != 0);
      }
      local_28 = (float *)((int)local_28 + -1);
    } while (local_28 != (float *)0x0);
  }
  iVar20 = ((int)param_2 + -1) * (int)param_4;
  if (1 < local_20) {
    local_30 = local_20 + -1;
    param_10 = param_9 + (int)param_2 * (int)param_4;
    local_44 = param_9;
    fVar1 = 1.0;
    fVar2 = _DAT_006c2fe8;
    do {
      iVar14 = 0;
      fVar3 = (float)fVar27 * fVar1 - fVar2 * (float)fVar28;
      local_44 = local_44 + (int)param_4;
      param_10 = param_10 + -(int)param_4;
      fVar2 = fVar2 * (float)fVar27 + fVar1 * (float)fVar28;
      if (0 < (int)param_4) {
        pfVar12 = param_7 + (int)param_4;
        pfVar22 = local_44;
        pfVar13 = param_7 + iVar20;
        pfVar18 = param_10;
        do {
          fVar1 = *pfVar12;
          pfVar12 = pfVar12 + 1;
          pfVar19 = param_7 + iVar14;
          iVar14 = iVar14 + 1;
          *pfVar22 = fVar3 * fVar1 + *pfVar19;
          *pfVar18 = fVar2 * *pfVar13;
          pfVar22 = pfVar22 + 1;
          pfVar13 = pfVar13 + 1;
          pfVar18 = pfVar18 + 1;
        } while (iVar14 < (int)param_4);
      }
      if (2 < local_20) {
        local_3c = param_7 + (int)param_4;
        local_2c = local_20 + -2;
        local_38 = param_7 + iVar20;
        fVar1 = fVar3;
        fVar4 = fVar2;
        do {
          fVar5 = fVar3 * fVar1 - fVar4 * fVar2;
          local_3c = local_3c + (int)param_4;
          local_38 = local_38 + -(int)param_4;
          fVar4 = fVar1 * fVar2 + fVar4 * fVar3;
          pfVar22 = local_44;
          pfVar13 = param_10;
          pfVar18 = local_3c;
          pfVar12 = local_38;
          iVar14 = (int)param_4;
          if (0 < (int)param_4) {
            do {
              iVar14 = iVar14 + -1;
              *pfVar22 = fVar5 * *pfVar18 + *pfVar22;
              *pfVar13 = fVar4 * *pfVar12 + *pfVar13;
              pfVar22 = pfVar22 + 1;
              pfVar13 = pfVar13 + 1;
              pfVar18 = pfVar18 + 1;
              pfVar12 = pfVar12 + 1;
            } while (iVar14 != 0);
          }
          local_2c = local_2c + -1;
          fVar1 = fVar5;
        } while (local_2c != 0);
      }
      local_30 = local_30 + -1;
      fVar1 = fVar3;
    } while (local_30 != 0);
  }
  if (1 < local_20) {
    param_6 = (float *)(local_20 + -1);
    do {
      param_7 = param_7 + (int)param_4;
      iVar20 = 0;
      pfVar22 = param_7;
      if (0 < (int)param_4) {
        do {
          iVar14 = iVar20 + 1;
          param_9[iVar20] = param_9[iVar20] + *pfVar22;
          iVar20 = iVar14;
          pfVar22 = pfVar22 + 1;
        } while (iVar14 < (int)param_4);
      }
      param_6 = (float *)((int)param_6 + -1);
    } while (param_6 != (float *)0x0);
  }
  if (param_1 < param_3) {
    if (0 < param_1) {
      param_6 = (float *)param_1;
      pfVar22 = param_8;
      do {
        if (0 < param_3) {
          pfVar18 = (float *)(((int)param_5 - (int)param_8) + (int)pfVar22);
          pfVar13 = pfVar22;
          iVar20 = param_3;
          do {
            *pfVar18 = *pfVar13;
            pfVar13 = pfVar13 + param_1;
            pfVar18 = pfVar18 + iVar8;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        pfVar22 = pfVar22 + 1;
        param_6 = (float *)((int)param_6 + -1);
      } while (param_6 != (float *)0x0);
    }
  }
  else if (0 < param_3) {
    param_4 = (float *)param_3;
    pfVar22 = param_5;
    pfVar13 = param_8;
    do {
      pfVar18 = pfVar13;
      pfVar12 = pfVar22;
      iVar20 = param_1;
      if (0 < param_1) {
        do {
          *pfVar12 = *pfVar18;
          iVar20 = iVar20 + -1;
          pfVar18 = pfVar18 + 1;
          pfVar12 = pfVar12 + 1;
        } while (iVar20 != 0);
      }
      pfVar22 = pfVar22 + iVar8;
      pfVar13 = pfVar13 + param_1;
      param_4 = (float *)((int)param_4 + -1);
    } while (param_4 != (float *)0x0);
  }
  iVar20 = iVar7 * (int)param_2;
  if (1 < local_20) {
    param_6 = (float *)(local_20 + -1);
    pfVar22 = param_8 + iVar20;
    pfVar13 = param_5;
    pfVar18 = param_8;
    do {
      pfVar13 = pfVar13 + param_1 * 2;
      pfVar18 = pfVar18 + iVar7;
      pfVar22 = pfVar22 + -iVar7;
      pfVar12 = pfVar13;
      pfVar19 = pfVar18;
      pfVar9 = pfVar22;
      iVar14 = param_3;
      if (0 < param_3) {
        do {
          pfVar12[-1] = *pfVar19;
          *pfVar12 = *pfVar9;
          iVar14 = iVar14 + -1;
          pfVar12 = pfVar12 + iVar8;
          pfVar19 = pfVar19 + param_1;
          pfVar9 = pfVar9 + param_1;
        } while (iVar14 != 0);
      }
      param_6 = (float *)((int)param_6 + -1);
    } while (param_6 != (float *)0x0);
  }
  if (param_1 != 1) {
    if (iVar6 < param_3) {
      local_44 = (float *)0x0;
      if (1 < local_20) {
        param_6 = param_8 + iVar20 + 2;
        param_8 = param_8 + 2;
        iVar6 = 4;
        iVar24 = -2;
        local_20 = local_20 + -1;
        pfVar22 = param_5 + -2;
        do {
          pfVar22 = pfVar22 + param_1 * 2;
          local_44 = (float *)((int)local_44 + param_1 * 2);
          iVar24 = iVar24 + param_1 * 2;
          iVar6 = iVar6 + param_1 * -2;
          param_8 = param_8 + iVar7;
          param_6 = param_6 + -iVar7;
          if (2 < param_1) {
            iVar20 = (param_1 - 3U >> 1) + 1;
            pfVar13 = pfVar22;
            param_2 = param_8;
            param_4 = param_6;
            param_7 = (float *)iVar24;
            param_9 = (float *)iVar6;
            do {
              if (0 < param_3) {
                pfVar18 = param_5 + (int)param_7 + (int)param_9 + (int)local_44;
                pfVar12 = param_4;
                pfVar19 = param_2;
                iVar14 = param_3;
                pfVar9 = pfVar13;
                do {
                  pfVar18[-1] = pfVar12[-1] + pfVar19[-1];
                  pfVar9[-1] = pfVar19[-1] - pfVar12[-1];
                  *pfVar18 = *pfVar12 + *pfVar19;
                  fVar1 = *pfVar12;
                  fVar2 = *pfVar19;
                  pfVar18 = pfVar18 + iVar8;
                  pfVar12 = pfVar12 + param_1;
                  pfVar19 = pfVar19 + param_1;
                  *pfVar9 = fVar1 - fVar2;
                  pfVar9 = pfVar9 + iVar8;
                  iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
              }
              param_2 = param_2 + 2;
              param_4 = param_4 + 2;
              pfVar13 = pfVar13 + -2;
              param_7 = (float *)((int)param_7 + -2);
              param_9 = (float *)((int)param_9 + 4);
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          local_20 = local_20 + -1;
        } while (local_20 != 0);
        return;
      }
    }
    else if (1 < local_20) {
      param_4 = param_8 + iVar20 + 2;
      param_8 = param_8 + 2;
      param_2 = param_5 + 2;
      param_6 = param_5 + -2;
      param_1 = local_20 + -1;
      do {
        param_6 = param_6 + iVar24 * 2;
        param_2 = param_2 + iVar24 * 2;
        param_8 = param_8 + iVar7;
        param_4 = param_4 + -iVar7;
        if (0 < param_3) {
          param_10 = (float *)param_3;
          pfVar22 = param_2;
          param_5 = param_8;
          param_7 = param_6;
          param_9 = param_4;
          do {
            if (2 < iVar24) {
              iVar6 = (iVar24 - 3U >> 1) + 1;
              pfVar13 = param_9;
              pfVar18 = param_5;
              pfVar12 = pfVar22;
              pfVar19 = param_7;
              do {
                iVar6 = iVar6 + -1;
                pfVar12[-1] = pfVar18[-1] + pfVar13[-1];
                pfVar19[-1] = pfVar18[-1] - pfVar13[-1];
                *pfVar12 = *pfVar18 + *pfVar13;
                *pfVar19 = *pfVar13 - *pfVar18;
                pfVar13 = pfVar13 + 2;
                pfVar18 = pfVar18 + 2;
                pfVar12 = pfVar12 + 2;
                pfVar19 = pfVar19 + -2;
              } while (iVar6 != 0);
            }
            pfVar22 = pfVar22 + iVar8;
            param_7 = param_7 + iVar8;
            param_5 = param_5 + iVar24;
            param_9 = param_9 + iVar24;
            param_10 = (float *)((int)param_10 + -1);
          } while (param_10 != (float *)0x0);
        }
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}

