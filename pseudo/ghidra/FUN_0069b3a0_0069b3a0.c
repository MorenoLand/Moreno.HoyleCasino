// FUN_0069b3a0  0069b3a0

undefined4 * FUN_0069b3a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  int local_d44;
  uint local_d40;
  int local_d3c;
  int *local_d38;
  uint local_d34;
  int local_d30;
  int local_d2c;
  int local_d28;
  uint local_d24;
  uint local_d20;
  uint local_d1c;
  uint local_d18;
  uint local_d14 [65];
  uint local_c10 [65];
  int local_b0c [65];
  int local_a08 [65];
  int local_904 [65];
  undefined1 local_800 [2048];
  
  iVar8 = *(int *)(param_2 + 0x504);
  iVar2 = *(int *)(param_2 + 0x510);
  local_d40 = *(uint *)(param_2 + 0x508);
  puVar7 = (undefined4 *)0x0;
  local_d44 = 0;
  if (0 < iVar8) {
    puVar9 = local_c10;
    for (iVar6 = iVar8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0xffffff38;
      puVar9 = puVar9 + 1;
    }
  }
  if (0 < iVar8) {
    puVar9 = local_d14;
    for (iVar6 = iVar8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0xffffff38;
      puVar9 = puVar9 + 1;
    }
    piVar10 = local_b0c;
    for (iVar6 = iVar8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
    if (0 < iVar8) {
      piVar10 = local_a08;
      for (iVar6 = iVar8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar10 = 1;
        piVar10 = piVar10 + 1;
      }
      piVar10 = local_904;
      for (iVar6 = iVar8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar10 = -1;
        piVar10 = piVar10 + 1;
      }
    }
  }
  local_d3c = iVar8;
  local_d30 = iVar2;
  if (iVar8 == 0) {
    local_d44 = FUN_0069b880(param_4,param_3,0,local_d40,local_800,local_d40,iVar2);
  }
  else {
    iVar6 = 0;
    local_d34 = iVar8 - 1;
    if ((int)local_d34 < 1) {
      return (undefined4 *)0x0;
    }
    puVar11 = local_800;
    do {
      iVar8 = FUN_0069b880(param_4,param_3,*(undefined4 *)(param_2 + iVar6 * 4),
                           *(undefined4 *)(param_2 + 4 + iVar6 * 4),puVar11,local_d40,iVar2);
      local_d44 = local_d44 + iVar8;
      iVar6 = iVar6 + 1;
      puVar11 = puVar11 + 0x20;
      iVar8 = local_d3c;
    } while (iVar6 < (int)local_d34);
  }
  if (local_d44 != 0) {
    local_d24 = 0xffffff38;
    local_d18 = 0xffffff38;
    FUN_0069bab0(local_800,iVar8 + -1,&local_d24,&local_d18);
    local_c10[0] = local_d24;
    local_d14[0] = local_d24;
    local_d14[1] = local_d18;
    local_c10[1] = local_d18;
    local_d44 = 2;
    if (2 < iVar8) {
      local_d38 = (int *)(param_2 + 0x210);
      do {
        local_d28 = *local_d38;
        iVar8 = local_b0c[local_d28];
        iVar6 = local_a08[local_d28];
        if (local_904[iVar8] != iVar6) {
          local_904[iVar8] = iVar6;
          iVar1 = *(int *)(param_2 + 0x208 + iVar8 * 4);
          local_d34 = *(uint *)(iVar2 + 0x344 + iVar8 * 4);
          local_d2c = *(int *)(param_2 + 0x208 + iVar6 * 4);
          local_d40 = *(uint *)(iVar2 + 0x344 + iVar6 * 4);
          iVar2 = FUN_0069bee0(local_c10,local_d14,iVar8);
          iVar3 = FUN_0069bee0(local_c10,local_d14,iVar6);
          if ((iVar2 == -1) || (iVar3 == -1)) {
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          iVar2 = FUN_0069bca0(local_d34,local_d40,iVar2,iVar3,param_4,param_3,local_d30);
          iVar3 = local_d28;
          if (iVar2 == 0) {
            local_c10[local_d44] = 0xffffff38;
            local_d14[local_d44] = 0xffffff38;
            iVar2 = local_d30;
          }
          else {
            local_d20 = 0xffffff38;
            local_d1c = 0xffffff38;
            local_d34 = 0xffffff38;
            local_d40 = 0xffffff38;
            FUN_0069bab0(local_800 + iVar1 * 0x20,local_d28 - iVar1,&local_d20,&local_d1c);
            FUN_0069bab0(local_800 + iVar3 * 0x20,local_d2c - iVar3,&local_d34,&local_d40);
            local_d14[iVar8] = local_d20;
            if (iVar8 == 0) {
              local_c10[0] = local_d20;
            }
            local_c10[local_d44] = local_d1c;
            local_d14[local_d44] = local_d34;
            local_c10[iVar6] = local_d40;
            if (iVar6 == 1) {
              local_d14[1] = local_d40;
            }
            iVar1 = iVar3;
            iVar2 = local_d30;
            if ((-1 < (int)local_d1c) || (-1 < (int)local_d34)) {
              while ((iVar1 = iVar1 + -1, -1 < iVar1 && (local_a08[iVar1] == iVar6))) {
                local_a08[iVar1] = local_d44;
              }
              while ((iVar3 = iVar3 + 1, iVar3 < local_d3c && (local_b0c[iVar3] == iVar8))) {
                local_b0c[iVar3] = local_d44;
              }
            }
          }
        }
        local_d44 = local_d44 + 1;
        local_d38 = local_d38 + 1;
        iVar8 = local_d3c;
      } while (local_d44 < local_d3c);
    }
    puVar7 = (undefined4 *)FUN_00690e40(param_1,iVar8 * 4);
    uVar4 = FUN_0069bee0(local_c10,local_d14,0);
    *puVar7 = uVar4;
    uVar4 = FUN_0069bee0(local_c10,local_d14,1);
    puVar7[1] = uVar4;
    iVar8 = 2;
    if (2 < local_d3c) {
      local_d38 = (int *)(iVar2 + 0x34c);
      piVar10 = (int *)(param_2 + 0x30c);
      do {
        local_d28 = *(undefined4 *)(iVar2 + 0x344 + piVar10[0x3f] * 4);
        local_d2c = puVar7[*piVar10];
        local_d40 = FUN_0069b830(local_d28,*(undefined4 *)(iVar2 + 0x344 + *piVar10 * 4),
                                 puVar7[piVar10[0x3f]],local_d2c,*local_d38);
        uVar5 = FUN_0069bee0(local_c10,local_d14,iVar8);
        if (((int)uVar5 < 0) || (local_d40 == uVar5)) {
          puVar7[iVar8] = local_d40 | 0x8000;
        }
        else {
          puVar7[iVar8] = uVar5;
        }
        iVar8 = iVar8 + 1;
        piVar10 = piVar10 + 1;
        local_d38 = local_d38 + 1;
      } while (iVar8 < local_d3c);
    }
  }
  return puVar7;
}

