// FUN_0069bfc0  0069bfc0

undefined4 FUN_0069bfc0(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int *local_16c;
  int *local_168;
  int *local_160;
  uint local_15c;
  int local_158;
  int local_154;
  int local_144 [16];
  int local_104 [65];
  
  piVar1 = *(int **)(param_2 + 0x510);
  iVar13 = *(int *)(param_2 + 0x504);
  iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c);
  iVar16 = *(int *)(iVar10 + 0xb20);
  if (param_3 == (int *)0x0) {
    FUN_0069d210(param_1 + 4,0,1);
    for (uVar8 = *(int *)(param_1 + 0x24) / 2 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *param_4 = 0;
      param_4 = param_4 + 1;
    }
    for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
      *(undefined1 *)param_4 = 0;
      param_4 = (undefined4 *)((int)param_4 + 1);
    }
    DAT_01631bdc = DAT_01631bdc + 1;
    return 0;
  }
  iVar14 = 0;
  if (0 < iVar13) {
    do {
      uVar8 = param_3[iVar14] & 0x7fff;
      switch(piVar1[0xd0]) {
      case 1:
        uVar8 = (int)uVar8 >> 2;
        break;
      case 2:
        uVar8 = (int)uVar8 >> 3;
        break;
      case 3:
        uVar8 = uVar8 / 0xc;
        break;
      case 4:
        uVar8 = (int)uVar8 >> 4;
      }
      param_3[iVar14] = param_3[iVar14] & 0x8000U | uVar8;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar13);
  }
  local_104[0] = *param_3;
  local_104[1] = param_3[1];
  if (2 < iVar13) {
    local_16c = piVar1 + 0xd3;
    piVar4 = (int *)(param_2 + 0x30c);
    local_15c = iVar13 + -2;
    puVar15 = (uint *)(param_3 + 2);
    do {
      iVar13 = piVar4[0x3f];
      iVar14 = *piVar4;
      uVar8 = param_3[iVar13];
      uVar5 = FUN_0069b830(piVar1[iVar13 + 0xd1],piVar1[iVar14 + 0xd1],uVar8,param_3[iVar14],
                           *local_16c);
      uVar2 = *puVar15;
      if (((char)(uVar2 >> 8) < '\0') || (uVar5 == uVar2)) {
        *puVar15 = uVar5 | 0x8000;
        *(undefined4 *)(((int)local_104 - (int)param_3) + (int)puVar15) = 0;
      }
      else {
        uVar11 = *(int *)(param_2 + 0x50c) - uVar5;
        if ((int)uVar5 <= (int)uVar11) {
          uVar11 = uVar5;
        }
        iVar9 = uVar2 - uVar5;
        if (iVar9 < 0) {
          if (iVar9 < (int)-uVar11) {
            iVar9 = (uVar11 - iVar9) + -1;
          }
          else {
            iVar9 = iVar9 * -2 + -1;
          }
        }
        else if (iVar9 < (int)uVar11) {
          iVar9 = iVar9 * 2;
        }
        else {
          iVar9 = iVar9 + uVar11;
        }
        *(int *)(((int)local_104 - (int)param_3) + (int)puVar15) = iVar9;
        param_3[iVar13] = uVar8 & 0x7fff;
        param_3[iVar14] = param_3[iVar14] & 0x7fff;
      }
      piVar4 = piVar4 + 1;
      local_16c = local_16c + 1;
      puVar15 = puVar15 + 1;
      local_15c = local_15c + -1;
    } while (local_15c != 0);
  }
  iVar13 = param_1 + 4;
  FUN_0069d210(iVar13,1,1);
  *(int *)(param_2 + 0x51c) = *(int *)(param_2 + 0x51c) + 1;
  iVar14 = FUN_00699aa0(*(int *)(param_2 + 0x50c) + -1);
  *(int *)(param_2 + 0x518) = *(int *)(param_2 + 0x518) + iVar14 * 2;
  uVar6 = FUN_00699aa0(*(int *)(param_2 + 0x50c) + -1);
  FUN_0069d210(iVar13,local_104[0],uVar6);
  uVar6 = FUN_00699aa0(*(int *)(param_2 + 0x50c) + -1);
  FUN_0069d210(iVar13,local_104[1],uVar6);
  local_158 = 0;
  local_16c = (int *)0x2;
  local_168 = piVar1;
  if (0 < *piVar1) {
    do {
      local_168 = local_168 + 1;
      iVar14 = *local_168;
      local_144[0] = 0;
      iVar9 = piVar1[iVar14 + 0x30];
      iVar3 = piVar1[iVar14 + 0x20];
      iVar17 = 1 << ((byte)iVar9 & 0x1f);
      local_144[1] = 0;
      local_144[2] = 0;
      local_144[3] = 0;
      local_144[4] = 0;
      local_144[5] = 0;
      local_144[6] = 0;
      local_144[7] = 0;
      local_15c = 0;
      local_154 = 0;
      if (iVar9 != 0) {
        iVar7 = 0;
        if (0 < iVar17) {
          piVar4 = piVar1 + (iVar14 + 10) * 8;
          do {
            if (*piVar4 < 0) {
              local_144[iVar7 + 8] = 1;
            }
            else {
              local_144[iVar7 + 8] = *(int *)(*(int *)(iVar10 + 0x720 + *piVar4 * 4) + 4);
            }
            iVar7 = iVar7 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar7 < iVar17);
        }
        iVar7 = 0;
        if (0 < iVar3) {
          local_160 = local_104 + (int)local_16c;
          do {
            iVar12 = 0;
            if (0 < iVar17) {
              do {
                if (*local_160 < local_144[iVar12 + 8]) {
                  local_144[iVar7] = iVar12;
                  break;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < iVar17);
            }
            local_15c = local_15c | local_144[iVar7] << ((byte)local_154 & 0x1f);
            local_154 = local_154 + iVar9;
            iVar7 = iVar7 + 1;
            local_160 = local_160 + 1;
          } while (iVar7 < iVar3);
        }
        iVar9 = FUN_006951e0(iVar16 + piVar1[iVar14 + 0x40] * 0x2c,local_15c,iVar13);
        *(int *)(param_2 + 0x514) = *(int *)(param_2 + 0x514) + iVar9;
      }
      iVar9 = 0;
      if (0 < iVar3) {
        piVar4 = local_104 + (int)local_16c;
        do {
          iVar17 = piVar1[local_144[iVar9] + iVar14 * 8 + 0x50];
          if (-1 < iVar17) {
            if (*piVar4 < *(int *)(iVar16 + 4 + iVar17 * 0x2c)) {
              iVar17 = FUN_006951e0(iVar16 + iVar17 * 0x2c,*piVar4,iVar13);
              *(int *)(param_2 + 0x518) = *(int *)(param_2 + 0x518) + iVar17;
            }
          }
          iVar9 = iVar9 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar9 < iVar3);
      }
      local_16c = (int *)((int)local_16c + iVar3);
      local_158 = local_158 + 1;
    } while (local_158 < *piVar1);
  }
  iVar13 = 0;
  iVar10 = piVar1[0xd0] * *param_3;
  iVar16 = 0;
  local_16c = (int *)0x1;
  if (1 < *(int *)(param_2 + 0x504)) {
    local_168 = (int *)(param_2 + 0x108);
    iVar14 = iVar10;
    do {
      uVar8 = param_3[*local_168] & 0x7fff;
      iVar10 = iVar14;
      if (uVar8 == param_3[*local_168]) {
        iVar13 = piVar1[*local_168 + 0xd1];
        iVar10 = piVar1[0xd0] * uVar8;
        FUN_0069c560(iVar16,iVar13,iVar14,iVar10,param_4);
        iVar16 = iVar13;
      }
      local_168 = local_168 + 1;
      local_16c = (int *)((int)local_16c + 1);
      iVar14 = iVar10;
    } while ((int)local_16c < *(int *)(param_2 + 0x504));
  }
  if (iVar13 < *(int *)(param_1 + 0x24) / 2) {
    do {
      iVar16 = iVar13 + 1;
      param_4[iVar13] = iVar10;
      iVar13 = iVar16;
    } while (iVar16 < *(int *)(param_1 + 0x24) / 2);
  }
  DAT_01631bdc = DAT_01631bdc + 1;
  return 1;
}

