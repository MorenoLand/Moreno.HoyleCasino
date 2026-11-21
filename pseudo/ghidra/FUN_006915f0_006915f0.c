// FUN_006915f0  006915f0

undefined4 FUN_006915f0(int param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint local_3c;
  float *local_30;
  uint local_28;
  uint local_20;
  int local_1c;
  
  iVar15 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x68);
  piVar4 = *(int **)(iVar15 + 0x1c);
  iVar5 = piVar4[0x39e];
  if (param_2 == (int *)0x0) {
    return 0xffffff7d;
  }
  if ((*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x18) != -1)) {
    return 0xffffff7d;
  }
  uVar16 = *(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = param_2[7];
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  if ((((uVar16 & *(uint *)(param_1 + 0x44)) == 0xffffffff) || (uVar16 + 1 != param_2[0xe])) ||
     (*(uint *)(param_1 + 0x44) + (uint)(0xfffffffe < uVar16) != param_2[0xf])) {
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0xb8) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0xbc) = 0xffffffff;
  }
  *(int *)(param_1 + 0x40) = param_2[0xe];
  *(int *)(param_1 + 0x44) = param_2[0xf];
  bVar7 = (byte)iVar5;
  if (*param_2 != 0) {
    bVar18 = bVar7 + 1;
    iVar9 = piVar4[*(int *)(param_1 + 0x28)] >> (bVar18 & 0x1f);
    iVar22 = *piVar4 >> (bVar18 & 0x1f);
    uVar21 = piVar4[1] >> (bVar18 & 0x1f);
    uVar16 = *(uint *)(param_1 + 0x48);
    uVar17 = param_2[0x16];
    *(uint *)(param_1 + 0x48) = uVar16 + uVar17;
    uVar6 = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + ((int)uVar17 >> 0x1f) + (uint)CARRY4(uVar16,uVar17);
    uVar16 = param_2[0x17];
    *(uint *)(param_1 + 0x50) = uVar6 + uVar16;
    uVar17 = *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar6,uVar16);
    uVar16 = param_2[0x18];
    *(uint *)(param_1 + 0x58) = uVar17 + uVar16;
    uVar6 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x5c) =
         *(int *)(param_1 + 0x5c) + ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar17,uVar16);
    uVar16 = param_2[0x19];
    *(uint *)(param_1 + 0x60) = uVar6 + uVar16;
    *(uint *)(param_1 + 100) =
         *(int *)(param_1 + 100) + ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar6,uVar16);
    if (*(int *)(param_1 + 0x30) == 0) {
      local_28 = 0;
      local_3c = uVar21;
    }
    else {
      local_3c = 0;
      local_28 = uVar21;
    }
    local_30 = (float *)0x0;
    if (0 < *(int *)(iVar15 + 4)) {
      do {
        pfVar8 = local_30;
        local_20 = iVar22;
        if (*(int *)(param_1 + 0x24) == 0) {
          if (*(int *)(param_1 + 0x28) == 0) {
            iVar10 = FUN_00698770(*(int *)(iVar3 + 4) - iVar5);
            pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 8) + (int)local_30 * 4) + local_3c * 4);
            iVar20 = *(int *)(*param_2 + (int)local_30 * 4);
            if (0 < iVar22) {
              pfVar13 = pfVar1;
              pfVar11 = (float *)(iVar10 + -4 + iVar22 * 4);
              local_1c = iVar22;
              do {
                pfVar19 = (float *)((iVar10 - (int)pfVar1) + (int)pfVar13);
                local_1c = local_1c + -1;
                *pfVar13 = *pfVar11 * *pfVar13 +
                           *(float *)((int)pfVar19 + (iVar20 - iVar10)) * *pfVar19;
                pfVar13 = pfVar13 + 1;
                pfVar11 = pfVar11 + -1;
              } while (local_1c != 0);
            }
          }
          else {
            iVar12 = FUN_00698770(*(int *)(iVar3 + 4) - iVar5);
            pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 8) + (int)local_30 * 4) + local_3c * 4);
            iVar20 = *(int *)(*param_2 + (int)local_30 * 4) + ((int)uVar21 / 2 - iVar22 / 2) * 4;
            iVar10 = 0;
            if (0 < iVar22) {
              pfVar13 = (float *)(iVar12 + -4 + iVar22 * 4);
              pfVar11 = pfVar1;
              do {
                pfVar19 = (float *)((iVar12 - (int)pfVar1) + (int)pfVar11);
                local_20 = local_20 + -1;
                *pfVar11 = *pfVar13 * *pfVar11 +
                           *(float *)((int)pfVar19 + (iVar20 - iVar12)) * *pfVar19;
                pfVar13 = pfVar13 + -1;
                pfVar11 = pfVar11 + 1;
                iVar10 = iVar22;
              } while (local_20 != 0);
            }
            iVar12 = (int)uVar21 / 2 + iVar22 / 2;
            if (iVar10 < iVar12) {
              pfVar13 = pfVar1 + iVar10;
              iVar12 = iVar12 - iVar10;
              do {
                *pfVar13 = *(float *)((iVar20 - (int)pfVar1) + (int)pfVar13);
                pfVar13 = pfVar13 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
          }
        }
        else if (*(int *)(param_1 + 0x28) == 0) {
          iVar10 = FUN_00698770(*(int *)(iVar3 + 4) - iVar5);
          pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 8) + (int)local_30 * 4) +
                            (((int)uVar21 / 2 - iVar22 / 2) + local_3c) * 4);
          iVar20 = *(int *)(*param_2 + (int)local_30 * 4);
          if (0 < iVar22) {
            pfVar13 = pfVar1;
            pfVar11 = (float *)(iVar10 + -4 + iVar22 * 4);
            do {
              pfVar19 = (float *)((iVar10 - (int)pfVar1) + (int)pfVar13);
              local_20 = local_20 + -1;
              *pfVar13 = *pfVar11 * *pfVar13 +
                         *(float *)((int)pfVar19 + (iVar20 - iVar10)) * *pfVar19;
              pfVar13 = pfVar13 + 1;
              pfVar11 = pfVar11 + -1;
            } while (local_20 != 0);
          }
        }
        else {
          iVar10 = FUN_00698770(*(int *)(iVar3 + 8) - iVar5);
          pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 8) + (int)local_30 * 4) + local_3c * 4);
          iVar20 = *(int *)(*param_2 + (int)local_30 * 4);
          if (0 < (int)uVar21) {
            local_30 = (float *)(iVar10 + -4 + uVar21 * 4);
            pfVar13 = pfVar1;
            local_20 = uVar21;
            do {
              pfVar11 = (float *)((iVar10 - (int)pfVar1) + (int)pfVar13);
              fVar2 = *local_30;
              local_30 = local_30 + -1;
              local_20 = local_20 - 1;
              *pfVar13 = fVar2 * *pfVar13 + *(float *)((iVar20 - iVar10) + (int)pfVar11) * *pfVar11;
              pfVar13 = pfVar13 + 1;
            } while (local_20 != 0);
          }
        }
        puVar14 = (undefined4 *)(*(int *)(*(int *)(param_1 + 8) + (int)pfVar8 * 4) + local_28 * 4);
        if (0 < iVar9) {
          iVar20 = (*(int *)(*param_2 + (int)pfVar8 * 4) + iVar9 * 4) - (int)puVar14;
          local_1c = iVar9;
          do {
            *puVar14 = *(undefined4 *)(iVar20 + (int)puVar14);
            puVar14 = puVar14 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        local_30 = (float *)((int)pfVar8 + 1);
      } while ((int)local_30 < *(int *)(iVar15 + 4));
    }
    *(uint *)(param_1 + 0x30) = ~-(uint)(*(int *)(param_1 + 0x30) != 0) & uVar21;
    if (*(int *)(param_1 + 0x18) == -1) {
      *(uint *)(param_1 + 0x18) = local_28;
      *(uint *)(param_1 + 0x14) = local_28;
    }
    else {
      *(uint *)(param_1 + 0x18) = local_3c;
      *(uint *)(param_1 + 0x14) =
           (((int)(piVar4[*(int *)(param_1 + 0x24)] +
                  (piVar4[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)) >> 2) +
            ((int)(piVar4[*(int *)(param_1 + 0x28)] +
                  (piVar4[*(int *)(param_1 + 0x28)] >> 0x1f & 3U)) >> 2) >> (bVar7 & 0x1f)) +
           local_3c;
    }
  }
  if ((*(uint *)(iVar3 + 0xb8) & *(uint *)(iVar3 + 0xbc)) == 0xffffffff) {
    iVar15 = 0;
    *(undefined4 *)(iVar3 + 0xbc) = 0;
  }
  else {
    uVar16 = ((int)(piVar4[*(int *)(param_1 + 0x28)] +
                   (piVar4[*(int *)(param_1 + 0x28)] >> 0x1f & 3U)) >> 2) +
             ((int)(piVar4[*(int *)(param_1 + 0x24)] +
                   (piVar4[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)) >> 2);
    iVar15 = uVar16 + *(uint *)(iVar3 + 0xb8);
    *(uint *)(iVar3 + 0xbc) =
         ((int)uVar16 >> 0x1f) + *(int *)(iVar3 + 0xbc) +
         (uint)CARRY4(uVar16,*(uint *)(iVar3 + 0xb8));
  }
  *(int *)(iVar3 + 0xb8) = iVar15;
  uVar16 = *(uint *)(param_1 + 0x38);
  if ((uVar16 & *(uint *)(param_1 + 0x3c)) == 0xffffffff) {
    uVar16 = param_2[0xd];
    if ((param_2[0xc] & uVar16) != 0xffffffff) {
      *(int *)(param_1 + 0x38) = param_2[0xc];
      *(uint *)(param_1 + 0x3c) = uVar16;
      if (((int)uVar16 <= *(int *)(iVar3 + 0xbc)) &&
         (((int)uVar16 < *(int *)(iVar3 + 0xbc) ||
          (*(uint *)(param_1 + 0x38) < *(uint *)(iVar3 + 0xb8))))) {
        if (param_2[0xb] == 0) {
          iVar15 = __allshr();
          iVar15 = *(int *)(param_1 + 0x18) + iVar15;
          *(int *)(param_1 + 0x18) = iVar15;
          if (*(int *)(param_1 + 0x14) < iVar15) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
          }
        }
        else {
          iVar15 = __allshr();
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar15;
        }
      }
    }
  }
  else {
    uVar17 = ((int)(piVar4[*(int *)(param_1 + 0x28)] +
                   (piVar4[*(int *)(param_1 + 0x28)] >> 0x1f & 3U)) >> 2) +
             ((int)(piVar4[*(int *)(param_1 + 0x24)] +
                   (piVar4[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)) >> 2);
    *(uint *)(param_1 + 0x38) = uVar17 + uVar16;
    *(uint *)(param_1 + 0x3c) =
         ((int)uVar17 >> 0x1f) + *(int *)(param_1 + 0x3c) + (uint)CARRY4(uVar17,uVar16);
    uVar16 = param_2[0xc];
    uVar17 = param_2[0xd];
    if ((uVar16 & uVar17) != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0x3c);
      if ((*(uint *)(param_1 + 0x38) != uVar16) || (uVar6 != uVar17)) {
        if (((((int)uVar17 <= (int)uVar6) &&
             (((int)uVar17 < (int)uVar6 || (uVar16 < *(uint *)(param_1 + 0x38))))) &&
            (iVar15 = *(int *)(param_1 + 0x38) - param_2[0xc], iVar15 != 0)) && (param_2[0xb] != 0))
        {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (iVar15 >> (bVar7 & 0x1f));
        }
        *(int *)(param_1 + 0x38) = param_2[0xc];
        *(int *)(param_1 + 0x3c) = param_2[0xd];
      }
    }
  }
  if (param_2[0xb] != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return 0;
}

