// FUN_00692e30  00692e30

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00692e30(int param_1,uint *param_2,float *param_3,int param_4,float param_5,int param_6)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  uint *puVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_3c;
  uint *local_28;
  int local_20;
  int local_1c;
  float local_14;
  int local_c;
  float local_8;
  
  pfVar10 = param_3;
  iVar2 = param_1 * -4;
  (&uStack_3c)[-param_1] = 0x692e5d;
  (&uStack_3c)[param_1 * -2] = 0x692e6e;
  (&uStack_3c)[param_1 * -3] = 0x692e87;
  (&uStack_3c)[param_1 * -4] = 0x692e9e;
  param_3 = (float *)(param_5 + *param_3);
  if ((float)param_3 < _DAT_006b3650) {
    param_3 = (float *)0x3f800000;
  }
  fVar3 = (float)param_3 * (float)param_3 * (float)_DAT_006b2c38;
  fVar7 = fVar3 * (float)param_3;
  param_3 = (float *)0x3f800000;
  *(float *)(&stack0xffffffc8 + iVar2) = fVar3;
  *(float *)(&stack0xffffffc8 + param_1 * -8) = fVar3;
  *(undefined4 *)(&stack0xffffffc8 + param_1 * -0xc) = 0;
  *(float *)(&stack0xffffffc8 + param_1 * -0x10) = fVar7;
  *(undefined4 *)(&stack0xffffffc8 + param_1 * -0x14) = 0;
  if (1 < param_1) {
    local_1c = param_1 + -1;
    pfVar13 = (float *)(&stack0xffffffcc + iVar2);
    fVar4 = _DAT_006c2fe8;
    fVar9 = _DAT_006c2fe8;
    fVar8 = fVar3;
    do {
      fVar5 = param_5 + *(float *)(((int)pfVar10 - (int)(&stack0xffffffc8 + iVar2)) + (int)pfVar13);
      if (fVar5 < _DAT_006b3650) {
        fVar5 = _DAT_006b3650;
      }
      fVar6 = fVar5 * fVar5;
      pfVar14 = pfVar13 + 1;
      fVar8 = fVar6 + fVar8;
      fVar3 = (float)param_3 * fVar6 + fVar3;
      fVar9 = (float)param_3 * (float)param_3 * fVar6 + fVar9;
      fVar7 = fVar6 * fVar5 + fVar7;
      fVar4 = (float)param_3 * fVar6 * fVar5 + fVar4;
      *pfVar13 = fVar8;
      pfVar14[-1 - param_1] = fVar3;
      pfVar14[param_1 * -2 + -1] = fVar9;
      pfVar14[param_1 * -3 + -1] = fVar7;
      pfVar14[param_1 * -4 + -1] = fVar4;
      param_3 = (float *)((float)param_3 + _DAT_006b3650);
      local_1c = local_1c + -1;
      pfVar13 = pfVar14;
      local_14 = (float)(param_1 * -8);
      local_8 = (float)(param_1 * -0x10);
    } while (local_1c != 0);
  }
  local_c = 0;
  iVar15 = (int)*(short *)((int)param_2 + 2);
  fVar7 = _DAT_006c2fe8;
  if (iVar15 < 0) {
    puVar11 = param_2;
    do {
      iVar15 = iVar15 * -4;
      uVar12 = *puVar11 & 0xffff;
      fVar3 = *(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -8) -
              *(float *)(&stack0xffffffc8 + iVar15 + param_1 * -8);
      local_8 = (*(float *)(&stack0xffffffc8 + iVar15 + param_1 * -0x10) +
                *(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0x10)) *
                (*(float *)(&stack0xffffffc8 + iVar15 + param_1 * -0xc) +
                *(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0xc)) -
                (*(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0x14) -
                *(float *)(&stack0xffffffc8 + iVar15 + param_1 * -0x14)) * fVar3;
      param_3 = (float *)((*(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0x14) -
                          *(float *)(&stack0xffffffc8 + iVar15 + param_1 * -0x14)) *
                          (*(float *)(&stack0xffffffc8 + iVar15 + iVar2) +
                          *(float *)(&stack0xffffffc8 + uVar12 * 4 + iVar2)) -
                         (*(float *)(&stack0xffffffc8 + iVar15 + param_1 * -0x10) +
                         *(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0x10)) * fVar3);
      local_14 = (*(float *)(&stack0xffffffc8 + iVar15 + param_1 * -0xc) +
                 *(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0xc)) *
                 (*(float *)(&stack0xffffffc8 + iVar15 + iVar2) +
                 *(float *)(&stack0xffffffc8 + uVar12 * 4 + iVar2)) - fVar3 * fVar3;
      fVar3 = ((float)param_3 * fVar7 + local_8) / local_14;
      if (fVar3 < _DAT_006c2fe8) {
        fVar3 = _DAT_006c2fe8;
      }
      local_c = local_c + 1;
      *(float *)((param_4 - (int)param_2) + -4 + (int)(puVar11 + 1)) = fVar3 - param_5;
      iVar15 = (int)*(short *)((int)puVar11 + 6);
      fVar7 = fVar7 + _DAT_006b3650;
      puVar11 = puVar11 + 1;
    } while (iVar15 < 0);
  }
  sVar1 = *(short *)((int)param_2 + local_c * 4 + 2);
  uVar12 = param_2[local_c] & 0xffff;
  if ((int)uVar12 < param_1) {
    local_28 = param_2 + local_c;
    do {
      iVar15 = (int)sVar1;
      fVar3 = *(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -8) -
              *(float *)(&stack0xffffffc8 + iVar15 * 4 + param_1 * -8);
      local_8 = (*(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0x10) -
                *(float *)(&stack0xffffffc8 + iVar15 * 4 + param_1 * -0x10)) *
                (*(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0xc) -
                *(float *)(&stack0xffffffc8 + iVar15 * 4 + param_1 * -0xc)) -
                (*(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0x14) -
                *(float *)(&stack0xffffffc8 + iVar15 * 4 + param_1 * -0x14)) * fVar3;
      param_3 = (float *)((*(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0x14) -
                          *(float *)(&stack0xffffffc8 + iVar15 * 4 + param_1 * -0x14)) *
                          (*(float *)(&stack0xffffffc8 + uVar12 * 4 + iVar2) -
                          *(float *)(&stack0xffffffc8 + iVar15 * 4 + iVar2)) -
                         (*(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0x10) -
                         *(float *)(&stack0xffffffc8 + iVar15 * 4 + param_1 * -0x10)) * fVar3);
      local_14 = (*(float *)(&stack0xffffffc8 + uVar12 * 4 + param_1 * -0xc) -
                 *(float *)(&stack0xffffffc8 + iVar15 * 4 + param_1 * -0xc)) *
                 (*(float *)(&stack0xffffffc8 + uVar12 * 4 + iVar2) -
                 *(float *)(&stack0xffffffc8 + iVar15 * 4 + iVar2)) - fVar3 * fVar3;
      fVar3 = ((float)param_3 * fVar7 + local_8) / local_14;
      if (fVar3 < _DAT_006c2fe8) {
        fVar3 = _DAT_006c2fe8;
      }
      local_c = local_c + 1;
      *(float *)((int)local_28 + (param_4 - (int)param_2)) = fVar3 - param_5;
      sVar1 = *(short *)((int)local_28 + 6);
      fVar7 = fVar7 + _DAT_006b3650;
      uVar12 = local_28[1] & 0xffff;
      local_28 = local_28 + 1;
    } while ((int)uVar12 < param_1);
  }
  if (local_c < param_1) {
    fVar3 = _DAT_006b3650 / local_14;
    do {
      fVar4 = ((float)param_3 * fVar7 + local_8) * fVar3;
      if (fVar4 < _DAT_006c2fe8) {
        fVar4 = _DAT_006c2fe8;
      }
      local_c = local_c + 1;
      *(float *)(param_4 + -4 + local_c * 4) = fVar4 - param_5;
      fVar7 = fVar7 + _DAT_006b3650;
    } while (local_c < param_1);
  }
  if (0 < param_6) {
    iVar17 = 0;
    iVar15 = param_6 / 2;
    fVar7 = _DAT_006c2fe8;
    if (iVar15 - param_6 < 0) {
      local_20 = iVar15 - param_6;
      local_28 = (uint *)(iVar15 * 4);
      iVar16 = (iVar15 - param_6) * -4;
      param_2 = (uint *)((param_6 - iVar15) * 4);
      do {
        fVar3 = *(float *)(&stack0xffffffc8 + (int)local_28 + param_1 * -8) -
                *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -8);
        local_8 = (*(float *)(&stack0xffffffc8 + (int)local_28 + param_1 * -0x10) +
                  *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0x10)) *
                  (*(float *)(&stack0xffffffc8 + (int)local_28 + param_1 * -0xc) +
                  *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0xc)) -
                  (*(float *)(&stack0xffffffc8 + (int)local_28 + param_1 * -0x14) -
                  *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0x14)) * fVar3;
        param_3 = (float *)((*(float *)(&stack0xffffffc8 + (int)local_28 + param_1 * -0x14) -
                            *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0x14)) *
                            (*(float *)(&stack0xffffffc8 + (int)local_28 + iVar2) +
                            *(float *)(&stack0xffffffc8 + iVar16 + iVar2)) -
                           (*(float *)(&stack0xffffffc8 + (int)local_28 + param_1 * -0x10) +
                           *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0x10)) * fVar3);
        local_14 = (*(float *)(&stack0xffffffc8 + (int)local_28 + param_1 * -0xc) +
                   *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0xc)) *
                   (*(float *)(&stack0xffffffc8 + (int)local_28 + iVar2) +
                   *(float *)(&stack0xffffffc8 + iVar16 + iVar2)) - fVar3 * fVar3;
        fVar3 = ((float)param_3 * fVar7 + local_8) / local_14 - param_5;
        if (fVar3 < *(float *)(param_4 + iVar17 * 4)) {
          *(float *)(param_4 + iVar17 * 4) = fVar3;
        }
        iVar17 = iVar17 + 1;
        iVar16 = (int)param_2 + -4;
        local_28 = (uint *)((int)local_28 + 4);
        fVar7 = fVar7 + _DAT_006b3650;
        local_20 = local_20 + 1;
        param_2 = (uint *)iVar16;
      } while (local_20 < 0);
    }
    local_28 = (uint *)(iVar15 + iVar17);
    if ((int)local_28 < param_1) {
      iVar16 = ((int)local_28 - param_6) * 4;
      param_2 = (uint *)((int)local_28 * 4);
      iVar15 = ((iVar15 - param_6) + iVar17) * 4;
      do {
        fVar3 = *(float *)(&stack0xffffffc8 + (int)param_2 + param_1 * -8) -
                *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -8);
        local_8 = (*(float *)(&stack0xffffffc8 + (int)param_2 + param_1 * -0x10) -
                  *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0x10)) *
                  (*(float *)(&stack0xffffffc8 + (int)param_2 + param_1 * -0xc) -
                  *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0xc)) -
                  (*(float *)(&stack0xffffffc8 + (int)param_2 + param_1 * -0x14) -
                  *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0x14)) * fVar3;
        param_3 = (float *)((*(float *)(&stack0xffffffc8 + (int)param_2 + param_1 * -0x14) -
                            *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0x14)) *
                            (*(float *)(&stack0xffffffc8 + (int)param_2 + iVar2) -
                            *(float *)(&stack0xffffffc8 + iVar16 + iVar2)) -
                           (*(float *)(&stack0xffffffc8 + (int)param_2 + param_1 * -0x10) -
                           *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0x10)) * fVar3);
        local_14 = (*(float *)(&stack0xffffffc8 + (int)param_2 + param_1 * -0xc) -
                   *(float *)(&stack0xffffffc8 + iVar16 + param_1 * -0xc)) *
                   (*(float *)(&stack0xffffffc8 + (int)param_2 + iVar2) -
                   *(float *)(&stack0xffffffc8 + iVar16 + iVar2)) - fVar3 * fVar3;
        fVar3 = ((float)param_3 * fVar7 + local_8) / local_14 - param_5;
        if (fVar3 < *(float *)(param_4 + iVar17 * 4)) {
          *(float *)(param_4 + iVar17 * 4) = fVar3;
        }
        iVar16 = iVar15 + 4;
        iVar17 = iVar17 + 1;
        param_2 = (uint *)((int)param_2 + 4);
        local_28 = (uint *)((int)local_28 + 1);
        fVar7 = fVar7 + _DAT_006b3650;
        iVar15 = iVar16;
      } while ((int)local_28 < param_1);
    }
    if (iVar17 < param_1) {
      fVar3 = _DAT_006b3650 / local_14;
      do {
        fVar4 = ((float)param_3 * fVar7 + local_8) * fVar3 - param_5;
        if (fVar4 < *(float *)(param_4 + iVar17 * 4)) {
          *(float *)(param_4 + iVar17 * 4) = fVar4;
        }
        iVar17 = iVar17 + 1;
        fVar7 = fVar7 + _DAT_006b3650;
      } while (iVar17 < param_1);
    }
  }
  return;
}

