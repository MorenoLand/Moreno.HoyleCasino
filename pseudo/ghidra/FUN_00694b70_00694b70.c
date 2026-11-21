// FUN_00694b70  00694b70

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00694b70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  size_t asStack_3c [4];
  undefined4 local_2c;
  int local_28;
  int local_14;
  undefined4 *local_c;
  uint local_8;
  
  puVar3 = param_1;
  iVar14 = 0;
  puVar4 = param_1;
  for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar12 = param_2[1];
  if (0 < iVar12) {
    piVar7 = (int *)param_2[2];
    iVar13 = iVar12;
    do {
      if (0 < *piVar7) {
        iVar14 = iVar14 + 1;
      }
      piVar7 = piVar7 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  param_1[1] = iVar12;
  param_1[2] = iVar14;
  *param_1 = *param_2;
  local_2c = param_2[1];
  asStack_3c[3] = param_2[2];
  asStack_3c[2] = 0x694bbc;
  local_28 = iVar14;
  puVar4 = (undefined4 *)FUN_00694620();
  local_28 = 0x694bd6;
  iVar12 = iVar14 * -4;
  piVar7 = (int *)(&stack0xffffffdc + iVar14 * -8);
  if (puVar4 == (undefined4 *)0x0) {
    asStack_3c[5 - iVar14] = (size_t)param_1;
    asStack_3c[4 - iVar14] = 0x694be8;
    FUN_00694ab0();
    return 0xffffffff;
  }
  if (0 < iVar14) {
    local_c = puVar4;
    local_8 = iVar14;
    do {
      asStack_3c[5 - iVar14] = *local_c;
      asStack_3c[4 - iVar14] = 0x694c12;
      uVar5 = FUN_00694f20();
      *local_c = uVar5;
      *(undefined4 **)(&stack0xffffffdc + (iVar12 - (int)puVar4) + (int)local_c) = local_c;
      local_c = local_c + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  asStack_3c[5 - iVar14] = (size_t)&LAB_00694f80;
  asStack_3c[4 - iVar14] = 4;
  asStack_3c[3 - iVar14] = iVar14;
  asStack_3c[2 - iVar14] = (size_t)(&stack0xffffffdc + iVar12);
  asStack_3c[1 - iVar14] = 0x694c40;
  qsort((void *)asStack_3c[2 - iVar14],asStack_3c[3 - iVar14],asStack_3c[4 - iVar14],
        (_PtFuncCompare *)asStack_3c[5 - iVar14]);
  asStack_3c[5 - iVar14] = 0x694c50;
  asStack_3c[iVar14 * -2 + 5] = iVar14 * 4;
  asStack_3c[iVar14 * -2 + 4] = 0x694c5c;
  pvVar6 = malloc(asStack_3c[iVar14 * -2 + 5]);
  param_1[5] = pvVar6;
  iVar13 = 0;
  if (0 < iVar14) {
    do {
      *(int *)(&stack0xffffffdc +
              (*(int *)(&stack0xffffffdc + iVar13 * 4 + iVar12) - (int)puVar4 >> 2) * 4 +
              iVar14 * -8) = iVar13;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar14);
    if (0 < iVar14) {
      local_14 = iVar14;
      do {
        iVar12 = *piVar7;
        puVar1 = (undefined4 *)(((int)puVar4 - (int)(&stack0xffffffdc + iVar14 * -8)) + (int)piVar7)
        ;
        piVar7 = piVar7 + 1;
        *(undefined4 *)(param_1[5] + iVar12 * 4) = *puVar1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  asStack_3c[iVar14 * -2 + 5] = (size_t)puVar4;
  asStack_3c[iVar14 * -2 + 4] = 0x694cba;
  free((void *)asStack_3c[iVar14 * -2 + 5]);
  asStack_3c[iVar14 * -2 + 4] = (size_t)(&stack0xffffffdc + iVar14 * -8);
  asStack_3c[iVar14 * -2 + 3] = iVar14;
  asStack_3c[iVar14 * -2 + 2] = (size_t)param_2;
  asStack_3c[iVar14 * -2 + 1] = 0x694cc5;
  uVar5 = FUN_00694800();
  param_1[4] = uVar5;
  asStack_3c[iVar14 * -2 + 1] = iVar14 * 4;
  asStack_3c[iVar14 * -2] = 0x694cd1;
  pvVar6 = malloc(asStack_3c[iVar14 * -2 + 1]);
  param_1[6] = pvVar6;
  iVar13 = 0;
  iVar12 = 0;
  if (0 < (int)param_2[1]) {
    do {
      if (0 < *(int *)(param_2[2] + iVar12 * 4)) {
        iVar15 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        *(int *)(param_1[6] + *(int *)(&stack0xffffffdc + iVar15 + iVar14 * -8) * 4) = iVar12;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)param_2[1]);
  }
  asStack_3c[iVar14 * -2 + 5] = iVar13;
  asStack_3c[iVar14 * -2 + 4] = 0x694d06;
  pvVar6 = malloc(asStack_3c[iVar14 * -2 + 5]);
  param_1[7] = pvVar6;
  iVar12 = 0;
  param_1 = (undefined4 *)0x0;
  if (0 < (int)param_2[1]) {
    do {
      if (0 < *(int *)(param_2[2] + iVar12 * 4)) {
        *(undefined1 *)(*(int *)(&stack0xffffffdc + (int)param_1 * 4 + iVar14 * -8) + puVar3[7]) =
             *(undefined1 *)(param_2[2] + iVar12 * 4);
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)param_2[1]);
  }
  asStack_3c[iVar14 * -2 + 5] = puVar3[2];
  asStack_3c[iVar14 * -2 + 4] = 0x694d4e;
  iVar12 = FUN_00699aa0();
  puVar3[9] = iVar12 + -4;
  if (iVar12 + -4 < 5) {
    puVar3[9] = 5;
  }
  if (8 < (int)puVar3[9]) {
    puVar3[9] = 8;
  }
  iVar12 = 1 << ((byte)puVar3[9] & 0x1f);
  asStack_3c[iVar14 * -2 + 5] = 4;
  asStack_3c[iVar14 * -2 + 4] = iVar12;
  asStack_3c[iVar14 * -2 + 3] = 0x694d87;
  pvVar6 = calloc(asStack_3c[iVar14 * -2 + 4],asStack_3c[iVar14 * -2 + 5]);
  puVar3[8] = pvVar6;
  puVar3[10] = 0;
  param_2 = (undefined4 *)0x0;
  if (0 < (int)param_1) {
    iVar13 = puVar3[7];
    do {
      if ((int)puVar3[10] < (int)*(char *)(iVar13 + (int)param_2)) {
        puVar3[10] = (int)*(char *)(iVar13 + (int)param_2);
      }
      if ((int)*(char *)(iVar13 + (int)param_2) <= (int)puVar3[9]) {
        asStack_3c[iVar14 * -2 + 5] = *(undefined4 *)(puVar3[5] + (int)param_2 * 4);
        asStack_3c[iVar14 * -2 + 4] = 0x694dc4;
        uVar8 = FUN_00694f20();
        iVar13 = puVar3[7];
        iVar15 = 0;
        bVar2 = *(byte *)(iVar13 + (int)param_2);
        if (0 < 1 << ((char)puVar3[9] - bVar2 & 0x1f)) {
          do {
            uVar9 = iVar15 << (bVar2 & 0x1f);
            iVar15 = iVar15 + 1;
            *(int *)(puVar3[8] + (uVar9 | uVar8) * 4) = (int)param_2 + 1;
            iVar13 = puVar3[7];
            bVar2 = *(byte *)(iVar13 + (int)param_2);
          } while (iVar15 < 1 << ((char)puVar3[9] - bVar2 & 0x1f));
        }
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while ((int)param_2 < (int)param_1);
  }
  uVar5 = puVar3[9];
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  param_2 = (undefined4 *)0x0;
  if (0 < iVar12) {
    do {
      uVar8 = (int)param_2 << (0x20U - (char)puVar3[9] & 0x1f);
      asStack_3c[iVar14 * -2 + 5] = uVar8;
      asStack_3c[iVar14 * -2 + 4] = 0x694e60;
      iVar13 = FUN_00694f20();
      if (*(int *)(puVar3[8] + iVar13 * 4) == 0) {
        iVar13 = local_8 + 1;
        if (iVar13 < (int)param_1) {
          puVar10 = (uint *)(puVar3[5] + iVar13 * 4);
          do {
            if (uVar8 < *puVar10) break;
            local_8 = local_8 + 1;
            iVar13 = iVar13 + 1;
            puVar10 = puVar10 + 1;
          } while (iVar13 < (int)param_1);
        }
        if ((int)local_c < (int)param_1) {
          puVar10 = (uint *)(puVar3[5] + (int)local_c * 4);
          do {
            if (uVar8 < (*puVar10 & -2 << (0x1fU - (char)uVar5 & 0x1f))) break;
            local_c = (undefined4 *)((int)local_c + 1);
            puVar10 = puVar10 + 1;
          } while ((int)local_c < (int)param_1);
        }
        uVar11 = (int)param_1 - (int)local_c;
        uVar9 = local_8;
        if (0x7fff < local_8) {
          uVar9 = 0x7fff;
        }
        if (0x7fff < uVar11) {
          uVar11 = 0x7fff;
        }
        asStack_3c[iVar14 * -2 + 5] = uVar8;
        asStack_3c[iVar14 * -2 + 4] = 0x694eec;
        iVar13 = FUN_00694f20();
        *(uint *)(puVar3[8] + iVar13 * 4) = (uVar9 | 0xffff0000) << 0xf | uVar11;
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while ((int)param_2 < iVar12);
  }
  return 0;
}

