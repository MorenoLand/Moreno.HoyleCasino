// FUN_00683530  00683530

void FUN_00683530(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,
                 undefined **param_6)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  ushort *puVar12;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  undefined **local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  undefined **local_70;
  int local_6c;
  uint local_68;
  undefined **local_64;
  int *local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint *local_50;
  uint local_4c;
  int local_48;
  ushort local_44 [32];
  uint local_4;
  
  local_4 = DAT_00781870 ^ (uint)&local_8c;
  local_80 = param_6;
  uVar3 = 0;
  local_48 = param_2;
  local_60 = param_4;
  local_50 = param_5;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[7] = 0;
  local_44[8] = 0;
  local_44[9] = 0;
  local_44[10] = 0;
  local_44[0xb] = 0;
  local_44[0xc] = 0;
  local_44[0xd] = 0;
  local_44[0xe] = 0;
  local_44[0xf] = 0;
  if (param_3 != 0) {
    do {
      local_44[*(ushort *)(param_2 + uVar3 * 2)] = local_44[*(ushort *)(param_2 + uVar3 * 2)] + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  local_7c = 0xf;
  do {
    if (local_44[local_7c] != 0) break;
    local_7c = local_7c - 1;
  } while (local_7c != 0);
  local_88 = *param_5;
  if (local_7c < *param_5) {
    local_88 = local_7c;
  }
  if (local_7c == 0) {
    local_8c = 0x140;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    __security_check_cookie(local_4 ^ (uint)&local_8c);
    return;
  }
  uVar3 = 1;
  do {
    if (local_44[uVar3] != 0) break;
    if (local_44[uVar3 + 1] != 0) {
      uVar3 = uVar3 + 1;
      break;
    }
    if (local_44[uVar3 + 2] != 0) {
      uVar3 = uVar3 + 2;
      break;
    }
    if (local_44[uVar3 + 3] != 0) {
      uVar3 = uVar3 + 3;
      break;
    }
    if (local_44[uVar3 + 4] != 0) {
      uVar3 = uVar3 + 4;
      break;
    }
    uVar3 = uVar3 + 5;
  } while (uVar3 < 0x10);
  if (local_88 < uVar3) {
    local_88 = uVar3;
  }
  iVar10 = 1;
  uVar4 = 1;
  do {
    iVar10 = iVar10 * 2 - (uint)local_44[uVar4];
    if (iVar10 < 0) goto LAB_00683a05;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  if ((iVar10 < 1) || ((param_1 != 0 && (local_7c == 1)))) {
    local_44[0x11] = 0;
    uVar4 = 2;
    do {
      uVar5 = uVar4 + 2;
      *(short *)((int)local_44 + uVar4 + 0x22) =
           *(short *)((int)local_44 + uVar4 + 0x20) + *(short *)((int)local_44 + uVar4);
      uVar4 = uVar5;
    } while (uVar5 < 0x1e);
    uVar4 = 0;
    if (param_3 != 0) {
      do {
        if (*(short *)(param_2 + uVar4 * 2) != 0) {
          *(ushort *)((int)param_6 + (uint)local_44[*(ushort *)(param_2 + uVar4 * 2) + 0x10] * 2) =
               (ushort)uVar4;
          local_44[*(ushort *)(param_2 + uVar4 * 2) + 0x10] =
               local_44[*(ushort *)(param_2 + uVar4 * 2) + 0x10] + 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_3);
    }
    if (param_1 == 0) {
      local_64 = param_6;
      local_70 = param_6;
      local_6c = 0x13;
    }
    else if (param_1 == 1) {
      local_70 = &PTR_DAT_006e2c8e;
      local_64 = (undefined **)0x6e2cce;
      local_6c = 0x100;
    }
    else {
      local_70 = (undefined **)&DAT_006e2f10;
      local_64 = (undefined **)&DAT_006e2f50;
      local_6c = -1;
    }
    local_78 = *param_4;
    bVar7 = (byte)local_88;
    local_74 = 1 << (bVar7 & 0x1f);
    uVar5 = 0;
    uVar4 = 0;
    local_5c = local_74 - 1;
    local_68 = 0xffffffff;
    local_84 = uVar3;
    local_58 = local_74;
    if ((param_1 != 1) || (local_74 < 0x5b0)) {
LAB_006837c0:
      do {
        bVar11 = (byte)uVar4;
        bVar2 = (char)local_84 - bVar11;
        uVar1 = *(ushort *)local_80;
        if ((int)(uint)uVar1 < local_6c) {
          local_8c = (uint)CONCAT21(uVar1,bVar2) << 8;
        }
        else if (local_6c < (int)(uint)uVar1) {
          local_8c = CONCAT22(*(ushort *)((int)local_70 + (uint)*(ushort *)local_80 * 2),
                              CONCAT11(bVar2,(char)*(ushort *)
                                                    ((int)local_64 + (uint)*(ushort *)local_80 * 2))
                             );
        }
        else {
          local_8c = CONCAT31((uint3)bVar2,0x60);
        }
        iVar10 = 1 << ((char)local_84 - bVar11 & 0x1f);
        local_4c = local_58;
        puVar8 = (uint *)(local_78 + ((uVar5 >> (bVar11 & 0x1f)) + local_58) * 4);
        uVar3 = local_58;
        do {
          uVar3 = uVar3 - iVar10;
          puVar8 = puVar8 + -iVar10;
          *puVar8 = local_8c;
        } while (uVar3 != 0);
        for (uVar3 = 1 << ((char)local_84 - 1U & 0x1f); (uVar5 & uVar3) != 0; uVar3 = uVar3 >> 1) {
        }
        if (uVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uVar3 - 1 & uVar5) + uVar3;
        }
        local_44[local_84] = local_44[local_84] - 1;
        local_80 = (undefined **)((int)local_80 + 2);
        if (local_44[local_84] == 0) {
          if (local_84 == local_7c) {
            local_8c._0_2_ = CONCAT11((char)local_84 - bVar11,0x40);
            local_8c = (uint)(ushort)local_8c;
            uVar3 = local_84;
            iVar10 = local_78;
            goto joined_r0x0068398d;
          }
          local_84 = (uint)*(ushort *)(param_2 + (uint)*(ushort *)local_80 * 2);
        }
      } while ((local_84 <= local_88) || (local_54 = local_5c & uVar5, local_54 == local_68));
      if (uVar4 == 0) {
        uVar4 = local_88;
      }
      local_78 = local_78 + local_58 * 4;
      iVar9 = local_84 - uVar4;
      uVar3 = uVar4 + iVar9;
      iVar10 = 1 << ((byte)iVar9 & 0x1f);
      if (uVar3 < local_7c) {
        puVar12 = local_44 + uVar3;
        do {
          uVar1 = *puVar12;
          if ((int)(iVar10 - (uint)uVar1) < 1) break;
          uVar3 = uVar3 + 1;
          iVar9 = iVar9 + 1;
          puVar12 = puVar12 + 1;
          iVar10 = (iVar10 - (uint)uVar1) * 2;
        } while (uVar3 < local_7c);
      }
      local_58 = 1 << ((byte)iVar9 & 0x1f);
      local_74 = local_74 + local_58;
      if ((param_1 != 1) || (local_74 < 0x5b0)) {
        *(byte *)(*param_4 + local_54 * 4) = (byte)iVar9;
        *(byte *)(*param_4 + 1 + local_54 * 4) = bVar7;
        *(short *)(*param_4 + 2 + local_54 * 4) = (short)(local_78 - *param_4 >> 2);
        local_68 = local_54;
        goto LAB_006837c0;
      }
    }
  }
LAB_00683a05:
  __security_check_cookie(local_4 ^ (uint)&local_8c);
  return;
joined_r0x0068398d:
  if (uVar5 == 0) goto LAB_006839e5;
  if ((uVar4 != 0) && ((local_5c & uVar5) != local_68)) {
    iVar10 = *param_4;
    uVar4 = 0;
    local_84 = local_88;
    local_8c._0_2_ = CONCAT11(bVar7,(undefined1)local_8c);
    local_8c = (uint)(ushort)local_8c;
    uVar3 = local_88;
  }
  *(uint *)(iVar10 + (uVar5 >> ((byte)uVar4 & 0x1f)) * 4) = local_8c;
  for (uVar6 = 1 << ((char)uVar3 - 1U & 0x1f); (uVar5 & uVar6) != 0; uVar6 = uVar6 >> 1) {
  }
  if (uVar6 == 0) goto LAB_006839e5;
  uVar5 = (uVar6 - 1 & uVar5) + uVar6;
  goto joined_r0x0068398d;
LAB_006839e5:
  *param_4 = *param_4 + local_74 * 4;
  *param_5 = local_88;
  goto LAB_00683a05;
}

