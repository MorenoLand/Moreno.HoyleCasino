// FUN_00698bf0  00698bf0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00698bf0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  int *piVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  float *pfVar27;
  int iVar28;
  float10 fVar29;
  int aiStack_c8 [14];
  float fStack_90;
  int aiStack_8c [4];
  undefined4 local_6c;
  int *local_50;
  undefined1 *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  float local_3c;
  undefined1 *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  float *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  piVar8 = param_1;
  iVar28 = *(int *)(param_1[0x10] + 4);
  local_c = *(int *)(param_1[0x10] + 0x68);
  local_44 = (int *)param_1[0x1a];
  iVar19 = *(int *)(iVar28 + 4);
  local_18 = *(int *)(iVar28 + 0x1c);
  local_24 = (undefined1 *)param_1[9];
  aiStack_8c[3] = 0x698c2f;
  iVar6 = iVar19 * -4;
  local_4c = &stack0xffffff84 + iVar6;
  local_14 = iVar28;
  aiStack_8c[3 - iVar19] = iVar19 * 4;
  aiStack_8c[2 - iVar19] = (int)param_1;
  aiStack_8c[1 - iVar19] = 0x698c39;
  local_2c = FUN_00690e40();
  aiStack_8c[1 - iVar19] = *(int *)(iVar28 + 4) << 2;
  aiStack_8c[-iVar19] = (int)param_1;
  (&fStack_90)[-iVar19] = 9.693052e-39;
  puVar10 = (undefined4 *)FUN_00690e40();
  (&fStack_90)[-iVar19] = (float)(*(int *)(iVar28 + 4) << 2);
  aiStack_c8[0xd - iVar19] = (int)param_1;
  aiStack_c8[0xc - iVar19] = 0x698c59;
  local_48 = (int *)FUN_00690e40();
  piVar13 = local_44;
  iVar20 = *(int *)(iVar28 + 4);
  local_3c = (float)local_44[1];
  aiStack_8c[3 - iVar19] = 0x698c78;
  iVar7 = iVar20 * -4;
  local_28 = &stack0xffffff84 + iVar7 + iVar6;
  iVar3 = param_1[7];
  local_8 = *(int **)(local_18 + 0x220 + iVar3 * 4);
  param_1 = (int *)0x0;
  local_10 = ((-(uint)(iVar3 != 0) & 2) + piVar13[2]) * 0x30 + *(int *)(local_c + 0x38);
  piVar8[10] = iVar3;
  if (0 < *(int *)(iVar28 + 4)) {
    piVar13 = (int *)(_DAT_006e57c0 / (float)(int)local_24);
    local_1c = (int)local_24 / 2 << 2;
    local_30 = local_2c - (int)(&stack0xffffff84 + iVar7 + iVar6);
    local_28 = &stack0xffffff84 + iVar7 + iVar6;
    local_20 = (float *)(&stack0xffffff84 + iVar7 + iVar6);
    do {
      iVar12 = *piVar8;
      local_50 = piVar13;
      aiStack_8c[(3 - iVar20) - iVar19] = local_1c;
      aiStack_8c[(2 - iVar20) - iVar19] = (int)piVar8;
      pfVar27 = *(float **)(iVar12 + (int)param_1 * 4);
      aiStack_8c[(1 - iVar20) - iVar19] = 0x698cff;
      uVar11 = FUN_00690e40();
      *(undefined4 *)(local_30 + (int)local_20) = uVar11;
      aiStack_8c[(1 - iVar20) - iVar19] = (int)&local_50;
      aiStack_8c[-iVar19 - iVar20] = 0x698d11;
      fVar29 = (float10)FUN_00699560();
      iVar12 = piVar8[7];
      iVar14 = piVar8[6];
      aiStack_8c[-iVar19 - iVar20] = piVar8[8];
      iVar16 = local_18;
      (&fStack_90)[-iVar19 - iVar20] = (float)iVar12;
      iVar12 = local_c;
      aiStack_c8[(0xd - iVar20) - iVar19] = iVar14;
      local_40 = (int *)(float)fVar29;
      aiStack_c8[(0xc - iVar20) - iVar19] = iVar16;
      aiStack_c8[(0xb - iVar20) - iVar19] = iVar12 + 4;
      aiStack_c8[(10 - iVar20) - iVar19] = (int)pfVar27;
      aiStack_c8[(9 - iVar20) - iVar19] = 0x698d31;
      FUN_00698780();
      iVar14 = local_c;
      iVar12 = piVar8[7];
      aiStack_c8[(9 - iVar20) - iVar19] = *(undefined4 *)(local_30 + (int)local_20);
      aiStack_c8[(8 - iVar20) - iVar19] = (int)pfVar27;
      aiStack_c8[(7 - iVar20) - iVar19] = **(undefined4 **)(iVar14 + 0xc + iVar12 * 4);
      aiStack_c8[(6 - iVar20) - iVar19] = 0x698d4e;
      FUN_00698320();
      iVar14 = local_c;
      iVar12 = piVar8[7];
      aiStack_c8[(6 - iVar20) - iVar19] = (int)pfVar27;
      aiStack_c8[(5 - iVar20) - iVar19] = iVar14 + 0x14 + iVar12 * 0xc;
      aiStack_c8[(4 - iVar20) - iVar19] = 0x698d62;
      FUN_00695e90();
      aiStack_c8[(4 - iVar20) - iVar19] = (int)pfVar27;
      aiStack_c8[(3 - iVar20) - iVar19] = 0x698d68;
      fVar29 = (float10)FUN_00699560();
      pfVar21 = local_20;
      iVar12 = 1;
      puVar17 = local_24 + -1;
      local_38 = (undefined1 *)0x1;
      *pfVar27 = (float)(fVar29 + (float10)(float)local_40);
      *local_20 = (float)(fVar29 + (float10)(float)local_40);
      if (1 < (int)puVar17) {
        do {
          fVar1 = pfVar27[iVar12 + 1];
          fVar2 = pfVar27[iVar12];
          aiStack_8c[(3 - iVar20) - iVar19] = (int)&local_34;
          local_34 = (int *)(fVar1 * fVar1 + fVar2 * fVar2);
          aiStack_8c[(2 - iVar20) - iVar19] = 0x698dab;
          fVar29 = (float10)FUN_00699560();
          fVar29 = fVar29 * (float10)_DAT_006b3654 + (float10)(float)local_40;
          pfVar27[(int)local_38 + 1 >> 1] = (float)fVar29;
          if ((float10)*local_20 < fVar29) {
            *local_20 = (float)fVar29;
          }
          iVar12 = (int)local_38 + 2;
          pfVar21 = local_20;
          local_38 = (undefined1 *)iVar12;
        } while (iVar12 < (int)(local_24 + -1));
      }
      if (_DAT_006c2fe8 < *pfVar21) {
        *pfVar21 = 0.0;
      }
      if (local_3c < *pfVar21) {
        local_3c = *pfVar21;
      }
      param_1 = (int *)((int)param_1 + 1);
      local_20 = pfVar21 + 1;
    } while ((int)param_1 < *(int *)(iVar28 + 4));
  }
  iVar12 = local_10;
  piVar13 = (int *)((int)local_24 / 2);
  aiStack_8c[(3 - iVar20) - iVar19] = (int)piVar13 << 2;
  aiStack_8c[(2 - iVar20) - iVar19] = (int)piVar8;
  local_1c = (int)piVar13 << 2;
  aiStack_8c[(1 - iVar20) - iVar19] = 0x698e48;
  local_38 = (undefined1 *)FUN_00690e40();
  aiStack_8c[(1 - iVar20) - iVar19] = local_1c;
  aiStack_8c[-iVar19 - iVar20] = (int)piVar8;
  (&fStack_90)[-iVar19 - iVar20] = 9.693786e-39;
  local_34 = (int *)FUN_00690e40();
  param_1 = (int *)0x0;
  if (0 < *(int *)(iVar28 + 4)) {
    local_30 = local_2c - (int)local_28;
    iVar14 = (int)local_28 - (int)local_48;
    piVar22 = local_48;
    local_40 = local_8;
    do {
      iVar28 = local_30;
      local_40 = local_40 + 1;
      piVar9 = local_40;
      aiStack_8c[(3 - iVar20) - iVar19] = 0x3c;
      aiStack_8c[(2 - iVar20) - iVar19] = (int)piVar8;
      local_28 = (undefined1 *)*piVar9;
      local_50 = *(int **)((int)piVar22 + iVar28 + iVar14);
      iVar28 = *(int *)(*piVar8 + (int)param_1 * 4);
      local_20 = (float *)(local_1c + iVar28);
      piVar8[10] = iVar3;
      aiStack_8c[(1 - iVar20) - iVar19] = 0x698ec4;
      puVar15 = (undefined4 *)FUN_00690e40();
      *piVar22 = (int)puVar15;
      for (iVar12 = 0xf; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      if (0 < (int)piVar13) {
        iVar12 = (int)local_50 - (int)local_20;
        pfVar27 = local_20;
        local_50 = piVar13;
        do {
          aiStack_8c[(3 - iVar20) - iVar19] = iVar12 + (int)pfVar27;
          aiStack_8c[(2 - iVar20) - iVar19] = 0x698ef6;
          fVar29 = (float10)FUN_00699560();
          *pfVar27 = (float)fVar29;
          pfVar27 = pfVar27 + 1;
          local_50 = (int *)((int)local_50 + -1);
        } while (local_50 != (int *)0x0);
      }
      iVar12 = local_10;
      pfVar27 = local_20;
      aiStack_8c[(3 - iVar20) - iVar19] = (int)local_38;
      aiStack_8c[(2 - iVar20) - iVar19] = (int)pfVar27;
      aiStack_8c[(1 - iVar20) - iVar19] = iVar12;
      aiStack_8c[-iVar19 - iVar20] = 0x698f18;
      FUN_00692d40();
      piVar9 = local_34;
      fVar1 = local_3c;
      aiStack_8c[-iVar19 - iVar20] = *(undefined4 *)(iVar14 + (int)piVar22);
      iVar12 = local_10;
      (&fStack_90)[-iVar19 - iVar20] = fVar1;
      aiStack_c8[(0xd - iVar20) - iVar19] = (int)piVar9;
      aiStack_c8[(0xc - iVar20) - iVar19] = iVar28;
      aiStack_c8[(0xb - iVar20) - iVar19] = iVar12;
      aiStack_c8[(10 - iVar20) - iVar19] = 0x698f35;
      FUN_006933e0();
      iVar12 = local_10;
      piVar9 = local_34;
      puVar17 = local_38;
      aiStack_c8[(10 - iVar20) - iVar19] = iVar28;
      aiStack_c8[(9 - iVar20) - iVar19] = 1;
      aiStack_c8[(8 - iVar20) - iVar19] = (int)piVar9;
      aiStack_c8[(7 - iVar20) - iVar19] = (int)puVar17;
      aiStack_c8[(6 - iVar20) - iVar19] = iVar12;
      aiStack_c8[(5 - iVar20) - iVar19] = 0x698f49;
      FUN_006938c0();
      iVar16 = local_c;
      pfVar27 = local_20;
      iVar12 = local_8[(int)(local_28 + 0x101)];
      if (*(int *)(local_18 + 800 + iVar12 * 4) != 1) {
        return 0xffffffff;
      }
      aiStack_8c[(3 - iVar20) - iVar19] = iVar28;
      aiStack_8c[(2 - iVar20) - iVar19] = (int)pfVar27;
      aiStack_8c[(1 - iVar20) - iVar19] = *(undefined4 *)(*(int *)(iVar16 + 0x30) + iVar12 * 4);
      aiStack_8c[-iVar19 - iVar20] = (int)piVar8;
      (&fStack_90)[-iVar19 - iVar20] = 9.694204e-39;
      uVar11 = FUN_0069b3a0();
      iVar12 = *piVar22;
      (&fStack_90)[-iVar19 - iVar20] = (float)piVar8;
      *(undefined4 *)(iVar12 + 0x1c) = uVar11;
      aiStack_c8[(0xd - iVar20) - iVar19] = 0x698f8a;
      iVar16 = FUN_00695e10();
      iVar12 = local_10;
      piVar9 = local_34;
      puVar17 = local_38;
      if ((iVar16 != 0) && (*(int *)(*piVar22 + 0x1c) != 0)) {
        aiStack_8c[(3 - iVar20) - iVar19] = iVar28;
        aiStack_8c[(2 - iVar20) - iVar19] = 2;
        aiStack_8c[(1 - iVar20) - iVar19] = (int)piVar9;
        aiStack_8c[-iVar19 - iVar20] = (int)puVar17;
        (&fStack_90)[-iVar19 - iVar20] = (float)iVar12;
        aiStack_c8[(0xd - iVar20) - iVar19] = 0x698fb6;
        FUN_006938c0();
        piVar9 = local_8;
        pfVar27 = local_20;
        puVar17 = local_28;
        aiStack_c8[(0xd - iVar20) - iVar19] = iVar28;
        aiStack_c8[(0xc - iVar20) - iVar19] = (int)pfVar27;
        aiStack_c8[(0xb - iVar20) - iVar19] =
             *(undefined4 *)(*(int *)(local_c + 0x30) + piVar9[(int)(puVar17 + 0x101)] * 4);
        aiStack_c8[(10 - iVar20) - iVar19] = (int)piVar8;
        aiStack_c8[(9 - iVar20) - iVar19] = 0x698fd8;
        uVar11 = FUN_0069b3a0();
        piVar9 = local_34;
        iVar12 = *piVar22;
        aiStack_c8[(9 - iVar20) - iVar19] = iVar28;
        aiStack_c8[(8 - iVar20) - iVar19] = 0;
        iVar16 = local_10;
        puVar17 = local_38;
        *(undefined4 *)(iVar12 + 0x38) = uVar11;
        aiStack_c8[(7 - iVar20) - iVar19] = (int)piVar9;
        aiStack_c8[(6 - iVar20) - iVar19] = (int)puVar17;
        aiStack_c8[(5 - iVar20) - iVar19] = iVar16;
        aiStack_c8[(4 - iVar20) - iVar19] = 0x698ff1;
        FUN_006938c0();
        piVar9 = local_8;
        pfVar27 = local_20;
        puVar17 = local_28;
        aiStack_c8[(4 - iVar20) - iVar19] = iVar28;
        aiStack_c8[(3 - iVar20) - iVar19] = (int)pfVar27;
        aiStack_c8[(2 - iVar20) - iVar19] =
             *(undefined4 *)(*(int *)(local_c + 0x30) + piVar9[(int)(puVar17 + 0x101)] * 4);
        aiStack_c8[(1 - iVar20) - iVar19] = (int)piVar8;
        aiStack_c8[-iVar19 - iVar20] = 0x699013;
        uVar11 = FUN_0069b3a0();
        local_50 = (int *)0x4;
        iVar28 = 0x10000;
        *(undefined4 *)*piVar22 = uVar11;
        do {
          puVar15 = (undefined4 *)*piVar22;
          uVar11 = *puVar15;
          aiStack_8c[(3 - iVar20) - iVar19] = iVar28 / 7;
          piVar9 = local_8;
          aiStack_8c[(2 - iVar20) - iVar19] = puVar15[7];
          puVar17 = local_28;
          aiStack_8c[(1 - iVar20) - iVar19] = uVar11;
          aiStack_8c[-iVar19 - iVar20] =
               *(undefined4 *)(*(int *)(local_c + 0x30) + piVar9[(int)(puVar17 + 0x101)] * 4);
          (&fStack_90)[-iVar19 - iVar20] = (float)piVar8;
          aiStack_c8[(0xd - iVar20) - iVar19] = 0x699060;
          uVar11 = FUN_0069bf10();
          iVar28 = iVar28 + 0x10000;
          *(undefined4 *)((int)local_50 + *piVar22) = uVar11;
          local_50 = local_50 + 1;
        } while (iVar28 < 0x70000);
        local_50 = (int *)0x20;
        iVar28 = 0x10000;
        do {
          iVar12 = *piVar22;
          uVar11 = *(undefined4 *)(iVar12 + 0x1c);
          aiStack_8c[(3 - iVar20) - iVar19] = iVar28 / 7;
          piVar9 = local_8;
          aiStack_8c[(2 - iVar20) - iVar19] = *(undefined4 *)(iVar12 + 0x38);
          puVar17 = local_28;
          aiStack_8c[(1 - iVar20) - iVar19] = uVar11;
          aiStack_8c[-iVar19 - iVar20] =
               *(undefined4 *)(*(int *)(local_c + 0x30) + piVar9[(int)(puVar17 + 0x101)] * 4);
          (&fStack_90)[-iVar19 - iVar20] = (float)piVar8;
          aiStack_c8[(0xd - iVar20) - iVar19] = 0x6990c6;
          uVar11 = FUN_0069bf10();
          iVar28 = iVar28 + 0x10000;
          *(undefined4 *)((int)local_50 + *piVar22) = uVar11;
          local_50 = local_50 + 1;
        } while (iVar28 < 0x70000);
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar22 = piVar22 + 1;
      iVar12 = local_10;
      iVar28 = local_14;
    } while ((int)param_1 < *(int *)(local_14 + 4));
  }
  local_44[1] = (int)local_3c;
  iVar14 = *(int *)(iVar28 + 4);
  aiStack_8c[(3 - iVar20) - iVar19] = 0x699125;
  puVar17 = &stack0xffffff84 + iVar14 * -0x10 + iVar7 + iVar6;
  aiStack_8c[((3 - iVar14) - iVar20) - iVar19] = 0x699135;
  local_38 = &stack0xffffff84 + iVar14 * -8 + iVar7 + iVar6;
  aiStack_8c[((iVar14 * -2 + 3) - iVar20) - iVar19] = 0x699145;
  local_40 = (int *)(&stack0xffffff84 + iVar14 * -0xc + iVar7 + iVar6);
  aiStack_8c[((iVar14 * -3 + 3) - iVar20) - iVar19] = 0x699155;
  piVar13 = local_8;
  iVar16 = local_18;
  if (local_8[0x121] != 0) {
    aiStack_8c[((iVar14 * -4 + 3) - iVar20) - iVar19] = local_2c;
    aiStack_8c[((iVar14 * -4 + 2) - iVar20) - iVar19] = (int)piVar13;
    aiStack_8c[((iVar14 * -4 + 1) - iVar20) - iVar19] = iVar12;
    aiStack_8c[(iVar14 * -4 - iVar20) - iVar19] = iVar16 + 0xb34;
    (&fStack_90)[(iVar14 * -4 - iVar20) - iVar19] = (float)piVar8;
    aiStack_c8[((iVar14 * -4 + 0xd) - iVar20) - iVar19] = 0x69917d;
    local_6c = FUN_00693950();
    aiStack_c8[((iVar14 * -4 + 0xd) - iVar20) - iVar19] = local_6c;
    aiStack_c8[((iVar14 * -4 + 0xc) - iVar20) - iVar19] = (int)local_8;
    aiStack_c8[((iVar14 * -4 + 0xb) - iVar20) - iVar19] = iVar12;
    aiStack_c8[((iVar14 * -4 + 10) - iVar20) - iVar19] = (int)piVar8;
    aiStack_c8[((iVar14 * -4 + 9) - iVar20) - iVar19] = 0x69918c;
    local_20 = (float *)FUN_00693c10();
  }
  puVar15 = (undefined4 *)(&stack0xffffff84 + iVar14 * -0x10 + iVar7 + iVar6);
  for (uVar18 = *(uint *)(iVar28 + 4) & 0x3fffffff; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  for (iVar28 = 0; iVar28 != 0; iVar28 = iVar28 + -1) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  puVar23 = &stack0xffffff84 + iVar14 * -0x10 + iVar7 + iVar6;
  if ((*(int *)(*(int *)(local_10 + 4) + 500) != 0) &&
     (param_1 = (int *)0x0, puVar23 = &stack0xffffff84 + iVar14 * -0x10 + iVar7 + iVar6,
     0 < *(int *)(local_14 + 4))) {
    uVar18 = (uint)local_24 & 0x3fffffff;
    iVar28 = local_2c - (int)(&stack0xffffff84 + iVar14 * -0x10 + iVar7 + iVar6);
    puVar26 = &stack0xffffff84 + iVar14 * -0x10 + iVar7 + iVar6;
    do {
      uVar11 = *(undefined4 *)(puVar17 + iVar28);
      *(undefined4 *)(puVar26 + -4) = 0x699205;
      iVar20 = local_10;
      iVar19 = -(uVar18 * 2 + 3 & 0xfffffffc);
      puVar23 = puVar26 + iVar19;
      *(int *)(puVar26 + iVar19 + -4) = (int)puVar26 + iVar19;
      *(undefined4 *)(puVar26 + iVar19 + -8) = uVar11;
      *(int *)(puVar26 + iVar19 + -0xc) = iVar20;
      *(int *)puVar17 = (int)puVar26 + iVar19;
      *(undefined4 *)(puVar26 + iVar19 + -0x10) = 0x699214;
      FUN_00693db0();
      param_1 = (int *)((int)param_1 + 1);
      puVar17 = puVar17 + 4;
      puVar26 = puVar26 + iVar19;
    } while ((int)param_1 < *(int *)(local_14 + 4));
  }
  *(int **)(puVar23 + -4) = piVar8;
  *(undefined4 *)(puVar23 + -8) = 0x699231;
  iVar28 = FUN_00695e10();
  *(int **)(puVar23 + -8) = piVar8;
  uVar18 = -(uint)(iVar28 != 0) & 0xfffffff9;
  puVar17 = (undefined1 *)(uVar18 + 7);
  local_28 = puVar17;
  *(undefined4 *)(puVar23 + -0xc) = 0x699246;
  iVar28 = FUN_00695e10();
  if ((int)puVar17 <= (int)((-(uint)(iVar28 != 0) & 7) + 7)) {
    local_50 = local_44 + uVar18 + 10;
    do {
      piVar13 = piVar8 + 1;
      *(undefined4 *)(puVar23 + -4) = 1;
      *(undefined4 *)(puVar23 + -8) = 0;
      *(int **)(puVar23 + -0xc) = piVar13;
      *(undefined4 *)(puVar23 + -0x10) = 0x699272;
      FUN_0069d210();
      *(undefined4 *)(puVar23 + -0x10) = *(undefined4 *)(local_c + 0x2c);
      *(int *)(puVar23 + -0x14) = iVar3;
      *(int **)(puVar23 + -0x18) = piVar13;
      *(undefined4 *)(puVar23 + -0x1c) = 0x699283;
      FUN_0069d210();
      if (piVar8[7] != 0) {
        iVar28 = piVar8[6];
        *(undefined4 *)(puVar23 + -4) = 1;
        *(int *)(puVar23 + -8) = iVar28;
        *(int **)(puVar23 + -0xc) = piVar13;
        *(undefined4 *)(puVar23 + -0x10) = 0x699299;
        FUN_0069d210();
        iVar28 = piVar8[8];
        *(undefined4 *)(puVar23 + -0x10) = 1;
        *(int *)(puVar23 + -0x14) = iVar28;
        *(int **)(puVar23 + -0x18) = piVar13;
        *(undefined4 *)(puVar23 + -0x1c) = 0x6992a5;
        FUN_0069d210();
      }
      param_1 = (int *)0x0;
      if (0 < *(int *)(local_14 + 4)) {
        iVar19 = (int)local_48 - (int)puVar10;
        local_44 = local_8 + 1;
        local_3c = (float)((int)local_4c - (int)puVar10);
        iVar28 = local_2c - (int)puVar10;
        local_24 = &stack0xffffff84 + ((iVar14 * -0x10 + iVar7 + iVar6) - (int)puVar10);
        puVar15 = puVar10;
        do {
          local_30 = *(int *)(iVar28 + (int)puVar15);
          iVar20 = *local_44;
          iVar12 = *piVar8;
          *(int *)(puVar23 + -4) = local_1c;
          *(int **)(puVar23 + -8) = piVar8;
          iVar12 = *(int *)(iVar12 + (int)param_1 * 4);
          *(undefined4 *)(puVar23 + -0xc) = 0x69930e;
          local_34 = (int *)FUN_00690e40();
          *puVar15 = local_34;
          *(int **)(puVar23 + -0xc) = local_34;
          piVar13 = local_8;
          *(undefined4 *)(puVar23 + -0x10) =
               *(undefined4 *)(*(int *)(iVar19 + (int)puVar15) + (int)local_28 * 4);
          *(undefined4 *)(puVar23 + -0x14) =
               *(undefined4 *)(*(int *)(local_c + 0x30) + piVar13[iVar20 + 0x101] * 4);
          *(int **)(puVar23 + -0x18) = piVar8;
          *(undefined4 *)(puVar23 + -0x1c) = 0x69933e;
          uVar11 = FUN_0069bfc0();
          iVar20 = local_30;
          piVar13 = local_34;
          *(undefined4 *)((int)local_3c + (int)puVar15) = uVar11;
          *(undefined4 *)(puVar23 + -0x1c) =
               *(undefined4 *)(local_18 + ((int)local_28 + (piVar8[7] + 0x36) * 0xf) * 4);
          iVar16 = local_10;
          *(int *)(puVar23 + -0x20) = iVar12;
          *(int **)(puVar23 + -0x24) = piVar13;
          *(int *)(puVar23 + -0x28) = iVar20;
          *(int *)(puVar23 + -0x2c) = iVar16;
          *(undefined4 *)(puVar23 + -0x30) = 0x69936e;
          FUN_00692ce0();
          iVar20 = local_10;
          iVar16 = local_1c + iVar12;
          *(undefined4 *)(puVar23 + -0x30) = *(undefined4 *)(local_24 + (int)puVar15);
          *(int *)(puVar23 + -0x34) = iVar16;
          *(int *)(puVar23 + -0x38) = iVar12;
          *(int *)(puVar23 + -0x3c) = iVar20;
          *(undefined4 *)(puVar23 + -0x40) = 0x699385;
          FUN_00693e60();
          local_44 = local_44 + 1;
          param_1 = (int *)((int)param_1 + 1);
          puVar15 = puVar15 + 1;
          puVar17 = local_28;
        } while ((int)param_1 < *(int *)(local_14 + 4));
      }
      piVar13 = local_8;
      iVar28 = local_18;
      puVar26 = local_4c;
      if (local_8[0x121] != 0) {
        *(undefined4 *)(puVar23 + -4) =
             *(undefined4 *)(local_18 + ((int)puVar17 + (piVar8[7] + 0x36) * 0xf) * 4);
        *(undefined1 **)(puVar23 + -8) = puVar26;
        pfVar27 = local_20;
        *(undefined4 **)(puVar23 + -0xc) = puVar10;
        *(float **)(puVar23 + -0x10) = pfVar27;
        iVar19 = *piVar8;
        *(undefined4 *)(puVar23 + -0x14) = local_6c;
        iVar20 = local_10;
        *(int *)(puVar23 + -0x18) = iVar19;
        *(int **)(puVar23 + -0x1c) = piVar13;
        *(int *)(puVar23 + -0x20) = iVar20;
        *(int *)(puVar23 + -0x24) = iVar28 + 0xb34;
        *(undefined1 **)(puVar23 + -0x28) = puVar17;
        *(undefined4 *)(puVar23 + -0x2c) = 0x6993f3;
        FUN_006940b0();
      }
      param_1 = (int *)0x0;
      puVar26 = puVar23;
      if (0 < *local_8) {
        local_34 = local_8 + 0x111;
        do {
          iVar20 = 0;
          local_3c = 0.0;
          iVar19 = *local_34;
          if (0 < *(int *)(local_14 + 4)) {
            local_44 = local_8 + 1;
            piVar13 = local_40;
            do {
              if ((int *)*local_44 == param_1) {
                *piVar13 = 0;
                if (*(int *)(local_4c + iVar20 * 4) != 0) {
                  *piVar13 = 1;
                }
                *(undefined4 *)
                 (&stack0xffffff84 + ((iVar14 * -4 + iVar7 + iVar6) - (int)local_40) + (int)piVar13)
                     = *(undefined4 *)(*piVar8 + iVar20 * 4);
                *(int *)(((int)local_38 - (int)local_40) + (int)piVar13) =
                     *(int *)(*piVar8 + iVar20 * 4) + local_1c;
                local_3c = (float)((int)local_3c + 1);
                piVar13 = piVar13 + 1;
              }
              iVar20 = iVar20 + 1;
              local_44 = local_44 + 1;
              iVar28 = local_18;
            } while (iVar20 < *(int *)(local_14 + 4));
          }
          iVar20 = *(int *)(iVar28 + 0x520 + iVar19 * 4);
          *(float *)(puVar23 + -4) = local_3c;
          puVar17 = local_38;
          puVar4 = (&PTR_DAT_007878d8)[iVar20];
          *(int **)(puVar23 + -8) = local_40;
          iVar20 = local_c;
          *(undefined1 **)(puVar23 + -0xc) = puVar17;
          *(undefined4 *)(puVar23 + -0x10) = *(undefined4 *)(*(int *)(iVar20 + 0x34) + iVar19 * 4);
          *(int **)(puVar23 + -0x14) = piVar8;
          pcVar5 = *(code **)(puVar4 + 0x14);
          puVar24 = puVar23 + -0x18;
          *(undefined4 *)(puVar23 + -0x18) = 0x6994c8;
          uVar11 = (*pcVar5)();
          iVar20 = *(int *)(iVar28 + 0x520 + iVar19 * 4);
          *(undefined4 *)(puVar24 + -4) = uVar11;
          piVar13 = local_40;
          puVar4 = (&PTR_DAT_007878d8)[iVar20];
          *(float *)(puVar24 + -8) = local_3c;
          puVar17 = local_38;
          *(int **)(puVar24 + -0xc) = piVar13;
          iVar20 = local_c;
          *(undefined4 *)(puVar24 + -0x10) = 0;
          *(undefined1 **)(puVar24 + -0x14) = puVar17;
          *(undefined4 *)(puVar24 + -0x18) = *(undefined4 *)(*(int *)(iVar20 + 0x34) + iVar19 * 4);
          *(int **)(puVar24 + -0x1c) = piVar8;
          pcVar5 = *(code **)(puVar4 + 0x18);
          puVar25 = puVar24 + -0x20;
          *(undefined4 *)(puVar24 + -0x20) = 0x6994f3;
          (*pcVar5)();
          local_34 = local_34 + 1;
          puVar23 = puVar25 + 0x30;
          puVar26 = puVar25 + 0x30;
          param_1 = (int *)((int)param_1 + 1);
          puVar17 = local_28;
        } while ((int)param_1 < *local_8);
      }
      *(int **)(puVar26 + -4) = piVar8 + 1;
      *(undefined4 *)(puVar26 + -8) = 0x69951f;
      FUN_0069d310();
      *(int **)(puVar26 + -8) = piVar8 + 1;
      *(undefined4 *)(puVar26 + -0xc) = 0x699525;
      iVar28 = FUN_0069d540();
      puVar17 = (undefined1 *)((int)puVar17 + 1);
      *(int **)(puVar26 + -0xc) = piVar8;
      *local_50 = iVar28;
      local_50 = local_50 + 1;
      local_28 = puVar17;
      *(undefined4 *)(puVar26 + -0x10) = 0x69953a;
      iVar28 = FUN_00695e10();
      puVar23 = puVar26;
    } while ((int)puVar17 <= (int)((-(uint)(iVar28 != 0) & 7) + 7));
  }
  return 0;
}

