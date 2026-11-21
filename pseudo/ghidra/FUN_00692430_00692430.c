// FUN_00692430  00692430

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00692430(int param_1,float param_2,int param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  void *pvVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar15;
  undefined4 auStack_7f30 [3];
  undefined8 uStack_7f24;
  float local_7f10 [55];
  float afStack_7e34 [7561];
  float local_810 [56];
  undefined1 local_730 [1568];
  float local_110 [56];
  float *local_30;
  undefined8 local_2c;
  int *local_24;
  undefined4 *local_20;
  float *local_1c;
  float *local_18;
  int local_14;
  int local_10;
  float *local_c;
  int local_8;
  
  local_8 = 0x69243d;
  uStack_7f24._4_4_ = 0x692450;
  iVar1 = param_3 * -4;
  local_20 = local_7f10 + (-3 - param_3);
  *(undefined4 *)((int)&uStack_7f24 + iVar1 + 4) = 0x44;
  *(undefined4 *)((int)&uStack_7f24 + iVar1) = 0x69245a;
  local_24 = malloc(*(size_t *)((int)&uStack_7f24 + iVar1 + 4));
  local_10 = 0;
  pfVar4 = local_7f10;
  for (iVar6 = 0x1dc0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar4 = 0.0;
    pfVar4 = pfVar4 + 1;
  }
  local_c = local_7f10;
  local_18 = (float *)&DAT_00781ac8;
  local_1c = (float *)&DAT_00781968;
  do {
    iVar6 = 0;
    pfVar4 = local_1c;
    do {
      iVar8 = local_10 + iVar6;
      iVar11 = 4;
      pfVar7 = pfVar4;
      fVar2 = _DAT_006e57a0;
      do {
        if (iVar8 < 0x58) {
          if (*pfVar7 < fVar2) {
            fVar2 = *pfVar7;
          }
        }
        else if (_DAT_00781ac4 < fVar2) {
          fVar2 = _DAT_00781ac4;
        }
        pfVar7 = pfVar7 + 1;
        iVar8 = iVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      local_110[iVar6] = fVar2;
      iVar6 = iVar6 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar6 < 0x38);
    pfVar4 = local_18;
    pfVar7 = local_c + 0x70;
    for (iVar6 = 0x150; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar7 = pfVar7 + 1;
    }
    pfVar4 = local_18;
    pfVar7 = local_c;
    for (iVar6 = 0x38; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_30 = local_c + 0x38;
    pfVar4 = local_18;
    pfVar7 = local_30;
    for (iVar6 = 0x38; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar7 = pfVar7 + 1;
    }
    iVar6 = 8;
    pfVar4 = local_c;
    do {
      uVar9 = 0x10;
      pfVar7 = pfVar4;
      do {
        fVar2 = (float)(int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) * param_5 +
                param_4;
        if ((fVar2 < (float)_DAT_006b2c50) && (_DAT_006c2fe8 < param_4)) {
          fVar2 = _DAT_006c2fe8;
        }
        if (((float)_DAT_006b2c50 < fVar2) && (param_4 < _DAT_006c2fe8)) {
          fVar2 = _DAT_006c2fe8;
        }
        pfVar4 = pfVar7 + 1;
        uVar9 = uVar9 - 1;
        *pfVar7 = fVar2 + *pfVar7;
        pfVar7 = pfVar4;
      } while (-0x28 < (int)uVar9);
      iVar6 = iVar6 + -1;
      local_2c = (double)CONCAT44(pfVar4,(undefined4)local_2c);
    } while (iVar6 != 0);
    local_8 = 0;
    pfVar4 = local_810;
    do {
      local_14 = 2;
      if (1 < local_8) {
        local_14 = local_8;
      }
      *(int *)((int)&uStack_7f24 + iVar1 + 4) = local_10;
      *(float *)((int)&uStack_7f24 + iVar1 + 4) =
           ((*(float *)(local_10 + param_1) + (float)_DAT_006b4b00) -
           (float)local_14 * (float)_DAT_006be518) - (float)_DAT_006e5798;
      *(float **)((int)&uStack_7f24 + iVar1) = local_c;
      auStack_7f30[2 - param_3] = 0x6925eb;
      FUN_00692c00();
      fVar2 = (float)local_8;
      pfVar7 = local_110;
      pfVar12 = pfVar4;
      for (iVar6 = 0x38; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar12 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar12 = pfVar12 + 1;
      }
      *(float *)((int)&uStack_7f24 + iVar1 + 4) =
           ((float)_DAT_006b4b00 - fVar2 * _DAT_006e5790) - (float)_DAT_006e5798;
      *(float **)((int)&uStack_7f24 + iVar1) = pfVar4;
      auStack_7f30[2 - param_3] = 0x69261b;
      FUN_00692c00();
      pfVar7 = local_c;
      auStack_7f30[2 - param_3] = local_c;
      auStack_7f30[1 - param_3] = pfVar4;
      auStack_7f30[-param_3] = 0x692625;
      FUN_00692bd0();
      local_8 = local_8 + 1;
      local_c = pfVar7 + 0x38;
      pfVar4 = pfVar4 + 0x38;
    } while (local_8 < 8);
    puVar10 = local_730;
    iVar6 = 7;
    pfVar4 = local_30;
    do {
      *(undefined1 **)((int)&uStack_7f24 + iVar1 + 4) = puVar10 + -0xe0;
      *(undefined1 **)((int)&uStack_7f24 + iVar1) = puVar10;
      auStack_7f30[2 - param_3] = 0x692662;
      FUN_00692ba0();
      auStack_7f30[2 - param_3] = puVar10;
      auStack_7f30[1 - param_3] = pfVar4;
      auStack_7f30[-param_3] = 0x692669;
      FUN_00692ba0();
      puVar10 = puVar10 + 0xe0;
      pfVar4 = pfVar4 + 0x38;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_1c = local_1c + 4;
    local_18 = local_18 + 0x150;
    local_10 = local_10 + 4;
    local_c = local_2c._4_4_;
  } while ((int)local_1c < 0x781a78);
  param_4 = 0.0;
  local_c = (float *)local_24;
  do {
    iVar6 = (int)param_4;
    *(undefined4 *)((int)&uStack_7f24 + iVar1 + 4) = 0x20;
    *(undefined4 *)((int)&uStack_7f24 + iVar1) = 0x6926bc;
    pvVar5 = malloc(*(size_t *)((int)&uStack_7f24 + iVar1 + 4));
    *(float **)((int)&uStack_7f24 + iVar1) = local_c;
    fVar14 = (float10)_DAT_006b2c38;
    *local_c = (float)pvVar5;
    local_2c = (double)((float10)(int)param_4 * fVar14);
    fVar15 = (float10)1.4426950408889634 *
             ((float10)(int)param_4 * fVar14 + (float10)_DAT_006e5760) * (float10)_DAT_006e5758;
    fVar14 = ROUND(fVar15);
    fVar15 = (float10)f2xm1(fVar15 - fVar14);
    fVar14 = (float10)fscale((float10)1 + fVar15,fVar14);
    *(double *)((int)&uStack_7f24 + iVar1) = (double)(fVar14 / (float10)param_2);
    auStack_7f30[2 - param_3] = 0x6926fb;
    floor(*(double *)((int)&uStack_7f24 + iVar1));
    auStack_7f30[2 - param_3] = 0x692700;
    iVar11 = ftol();
    fVar14 = (float10)log2((float10)iVar11 * (float10)param_2 + (float10)_DAT_006b3650);
    fVar14 = (float10)0.6931471805599453 * fVar14 * (float10)_DAT_006e5768 - (float10)_DAT_006e5760;
    *(double *)((int)&uStack_7f24 + iVar1) = (double)(fVar14 + fVar14);
    auStack_7f30[2 - param_3] = 0x69272d;
    ceil(*(double *)((int)&uStack_7f24 + iVar1));
    auStack_7f30[2 - param_3] = 0x692732;
    iVar8 = ftol();
    fVar14 = (float10)log2((float10)(iVar11 + 1) * (float10)param_2);
    fVar14 = (float10)0.6931471805599453 * fVar14 * (float10)_DAT_006e5768 - (float10)_DAT_006e5760;
    *(double *)((int)&uStack_7f24 + iVar1) = (double)(fVar14 + fVar14);
    auStack_7f30[2 - param_3] = 0x69275d;
    floor(*(double *)((int)&uStack_7f24 + iVar1));
    *(undefined4 *)((int)&uStack_7f24 + iVar1 + 4) = 0x692765;
    local_14 = ftol();
    if ((int)param_4 < iVar8) {
      iVar8 = (int)param_4;
    }
    param_4 = (float)iVar8;
    if (iVar8 < 0) {
      param_4 = 0.0;
    }
    if (0x10 < local_14) {
      local_14 = 0x10;
    }
    param_1 = 0;
    local_10 = iVar6 + 1;
    do {
      *(undefined4 *)((int)&uStack_7f24 + iVar1 + 4) = 0xe8;
      *(undefined4 *)((int)&uStack_7f24 + iVar1) = 0x69279e;
      pvVar5 = malloc(*(size_t *)((int)&uStack_7f24 + iVar1 + 4));
      puVar3 = local_20;
      *(void **)((int)*local_c + param_1 * 4) = pvVar5;
      iVar6 = param_3;
      puVar13 = local_20;
      if (0 < param_3) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar13 = 0x4479c000;
          puVar13 = puVar13 + 1;
        }
      }
      param_5 = param_4;
      if ((int)param_4 <= local_14) {
        iVar6 = param_1 + (int)param_4 * 8;
        local_1c = (float *)(iVar6 * 0x38);
        local_18 = afStack_7e34 + iVar6 * 0x38;
        do {
          iVar6 = 0;
          local_8 = 0;
          fVar14 = (float10)(int)param_5 * (float10)_DAT_006b2c38;
          do {
            fVar15 = (float10)1.4426950408889634 *
                     ((((float10)local_8 * (float10)_DAT_006bf7d8 + fVar14) - (float10)_DAT_006e5788
                      ) + (float10)_DAT_006e5760) * (float10)_DAT_006e5758;
            fVar14 = ROUND(fVar15);
            fVar15 = (float10)f2xm1(fVar15 - fVar14);
            fscale((float10)1 + fVar15,fVar14);
            *(undefined4 *)((int)&uStack_7f24 + iVar1 + 4) = 0x69283e;
            iVar8 = ftol();
            fVar15 = (float10)1.4426950408889634 *
                     ((extraout_ST0 - (float10)_DAT_006e5780) + (float10)_DAT_006e5760) *
                     (float10)_DAT_006e5758;
            fVar14 = ROUND(fVar15);
            fVar15 = (float10)f2xm1(fVar15 - fVar14);
            fscale((float10)1 + fVar15,fVar14);
            *(undefined4 *)((int)&uStack_7f24 + iVar1 + 4) = 0x692876;
            iVar11 = ftol();
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            if (param_3 < iVar8) {
              iVar8 = param_3;
            }
            if (iVar8 < iVar6) {
              iVar6 = iVar8;
            }
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            if (param_3 < iVar11) {
              iVar11 = param_3;
            }
            for (; (iVar6 < iVar11 && (iVar6 < param_3)); iVar6 = iVar6 + 1) {
              if (local_7f10[(int)local_1c + local_8] < (float)puVar3[iVar6]) {
                puVar3[iVar6] = local_7f10[(int)local_1c + local_8];
              }
            }
            local_8 = local_8 + 1;
            fVar14 = extraout_ST0_00;
          } while (local_8 < 0x38);
          for (; iVar6 < param_3; iVar6 = iVar6 + 1) {
            if (*local_18 < (float)puVar3[iVar6]) {
              puVar3[iVar6] = *local_18;
            }
          }
          param_5 = (float)((int)param_5 + 1);
          local_1c = local_1c + 0x70;
          local_18 = local_18 + 0x1c0;
        } while ((int)param_5 <= local_14);
      }
      if (local_10 < 0x11) {
        iVar6 = 0;
        local_8 = 0;
        do {
          iVar8 = local_8;
          fVar15 = (float10)1.4426950408889634 *
                   ((((float10)local_8 * (float10)_DAT_006bf7d8 + (float10)local_2c) -
                    (float10)_DAT_006e5788) + (float10)_DAT_006e5760) * (float10)_DAT_006e5758;
          fVar14 = ROUND(fVar15);
          fVar15 = (float10)f2xm1(fVar15 - fVar14);
          fscale((float10)1 + fVar15,fVar14);
          *(undefined4 *)((int)&uStack_7f24 + iVar1 + 4) = 0x692977;
          iVar11 = ftol();
          fVar15 = (float10)1.4426950408889634 *
                   ((extraout_ST0_01 - (float10)_DAT_006e5780) + (float10)_DAT_006e5760) *
                   (float10)_DAT_006e5758;
          fVar14 = ROUND(fVar15);
          fVar15 = (float10)f2xm1(fVar15 - fVar14);
          fscale((float10)1 + fVar15,fVar14);
          *(undefined4 *)((int)&uStack_7f24 + iVar1 + 4) = 0x6929af;
          param_5 = (float)ftol();
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          if (param_3 < iVar11) {
            iVar11 = param_3;
          }
          if (iVar11 < iVar6) {
            iVar6 = iVar11;
          }
          if ((int)param_5 < 0) {
            param_5 = 0.0;
          }
          if (param_3 < (int)param_5) {
            param_5 = (float)param_3;
          }
          for (; (iVar6 < (int)param_5 && (iVar6 < param_3)); iVar6 = iVar6 + 1) {
            iVar11 = iVar8 + (param_1 + local_10 * 8) * 0x38;
            if (local_7f10[iVar11] < (float)local_20[iVar6]) {
              local_20[iVar6] = local_7f10[iVar11];
            }
          }
          local_8 = iVar8 + 1;
        } while (local_8 < 0x38);
        if (iVar6 < param_3) {
          do {
            if (afStack_7e34[(param_1 + local_10 * 8) * 0x38] < (float)local_20[iVar6]) {
              local_20[iVar6] = afStack_7e34[(param_1 + local_10 * 8) * 0x38];
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < param_3);
        }
      }
      pfVar4 = local_c;
      local_8 = 0;
      iVar6 = 8;
      do {
        fVar15 = (float10)1.4426950408889634 *
                 ((((float10)local_8 * (float10)_DAT_006bf7d8 + (float10)local_2c) -
                  (float10)_PTR_006b3740) + (float10)_DAT_006e5760) * (float10)_DAT_006e5758;
        fVar14 = ROUND(fVar15);
        fVar15 = (float10)f2xm1(fVar15 - fVar14);
        fscale((float10)1 + fVar15,fVar14);
        *(undefined4 *)((int)&uStack_7f24 + iVar1 + 4) = 0x692abf;
        iVar8 = ftol();
        if (iVar8 < 0) {
          *(undefined4 *)(iVar6 + *(int *)((int)*pfVar4 + param_1 * 4)) = 0xc479c000;
        }
        else if (iVar8 < param_3) {
          *(undefined4 *)(iVar6 + *(int *)((int)*pfVar4 + param_1 * 4)) = local_20[iVar8];
        }
        else {
          *(undefined4 *)(iVar6 + *(int *)((int)*pfVar4 + param_1 * 4)) = 0xc479c000;
        }
        iVar6 = iVar6 + 4;
        local_8 = local_8 + 1;
      } while (iVar6 < 0xe8);
      iVar6 = 0;
      pfVar12 = *(float **)((int)*pfVar4 + param_1 * 4);
      pfVar7 = pfVar12 + 2;
      do {
        if (_DAT_006e5778 < *pfVar7) break;
        iVar6 = iVar6 + 1;
        pfVar7 = pfVar7 + 1;
      } while (iVar6 < 0x10);
      local_8 = 0x37;
      *pfVar12 = (float)iVar6;
      iVar6 = *(int *)((int)*pfVar4 + param_1 * 4);
      pfVar7 = (float *)(iVar6 + 0xe4);
      do {
        if (_DAT_006e5778 < *pfVar7) break;
        local_8 = local_8 + -1;
        pfVar7 = pfVar7 + -1;
      } while (0x11 < local_8);
      param_1 = param_1 + 1;
      *(float *)(iVar6 + 4) = (float)local_8;
    } while (param_1 < 8);
    param_4 = (float)local_10;
    local_c = pfVar4 + 1;
    if (0x10 < local_10) {
      return local_24;
    }
  } while( true );
}

