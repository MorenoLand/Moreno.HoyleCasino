// FUN_005efd60  005efd60

void __thiscall FUN_005efd60(int *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_c4 [2];
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8c = 0;
  local_20 = 0;
  local_84 = 0;
  local_80 = 0;
  local_1c = 0;
  local_bc = 0;
  local_38 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_18 = 0;
  local_3c = 0;
  cVar2 = (**(code **)(*param_1 + 0xbc))();
  if (cVar2 != '\0') {
    FUN_005f6820(param_2);
    local_a8 = param_1[7];
    local_ac = param_1[6];
    local_b0 = param_1[5];
    local_b4 = param_1[4];
    FUN_005ec3a0(&local_b4,&local_b4,param_2);
    if (local_b4 < local_ac) {
      if (local_b0 < local_a8) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_005eedc0(param_1[0x17],&local_40,&local_54);
      if ((*(char *)param_1[0x17] != '\0') &&
         ((iVar3 = FUN_005f5590(), iVar3 < local_54 || (iVar3 = FUN_005f5550(), iVar3 < local_40))))
      {
        iVar3 = FUN_005f5590();
        if (local_54 < iVar3 + *(short *)((int)param_1 + 0x96)) {
          while (iVar3 = FUN_005f5590(), iVar3 < local_54) {
            local_54 = local_54 + -1;
          }
        }
        else {
          while (iVar3 = FUN_005f5590(), iVar3 < local_54) {
            local_54 = local_54 - *(short *)((int)param_1 + 0x96);
          }
        }
      }
      if ((param_1[0x1c] & 4U) != 0) {
        local_20 = 0;
      }
      if ((param_1[0x1c] & 8U) != 0) {
        local_20 = param_1[0x1b] - local_54;
      }
      if ((param_1[0x1c] & 0x10U) != 0) {
        local_20 = (param_1[0x1b] - local_54) / 2;
      }
      local_3c = local_20 + param_1[0x1e];
      local_14 = 0;
      local_10 = 0;
      local_20 = local_3c;
      local_c = FUN_005f5550();
      local_8 = FUN_005f5590();
      local_34 = 0;
      while (*(char *)(param_1[0x17] + local_34) != '\0') {
        FUN_005eebf0(local_34,&local_7c,&local_78,&local_38,0);
        if (0 < local_b8) {
          FUN_005eedc0(param_1[0x17] + local_7c,&local_40,&local_54);
          iVar3 = FUN_005f5590();
          if (iVar3 < *(short *)((int)param_1 + 0x96) + local_20) break;
        }
        if (*(char *)(param_1[0x17] + local_7c) == '\0') break;
        if ((param_1[0x1c] & 1U) != 0) {
          local_8c = ((int)(short)param_1[0x25] + param_1[0x2a]) / 2;
        }
        if ((param_1[0x1c] & 2U) != 0) {
          local_8c = (int)(short)param_1[0x25] + param_1[0x2a] + (param_1[0x1a] - local_38);
        }
        if ((param_1[0x1c] & 0x20U) != 0) {
          local_8c = (param_1[0x1a] - local_38) / 2;
        }
        local_8c = local_8c + param_1[0x1d];
        for (; local_bc < local_7c; local_bc = local_bc + 1) {
          if (local_bc == param_1[0x28]) {
            local_18 = local_84;
            local_3c = local_80;
            local_88 = local_1c;
          }
        }
        for (local_bc = local_7c; local_bc < local_78; local_bc = local_bc + 1) {
          local_94 = FUN_005f0a30(*(undefined1 *)(param_1[0x17] + local_bc));
          local_94 = local_94 & 0xff;
          memset(&local_50,0,0x10);
          iVar3 = param_1[0x19];
          if (iVar3 == 1) {
            local_4c = (uint)*(ushort *)(param_1[0x26] + 2 + local_94 * 8);
            local_50 = (uint)*(ushort *)(param_1[0x26] + 4 + local_94 * 8);
            local_44 = *(ushort *)(param_1[0x26] + 6 + local_94 * 8) + 1 +
                       (uint)*(ushort *)((int)param_1 + 0x92);
            local_48 = *(ushort *)(param_1[0x26] + 8 + local_94 * 8) + 1 +
                       (uint)*(ushort *)(param_1 + 0x24);
          }
          else if (iVar3 == 2) {
            local_90 = local_94 - 0x20;
            if ((int)local_90 < 0) {
              local_90 = 0;
            }
            local_50 = 0;
            local_4c = 0;
            local_48 = FUN_005ee950(*(undefined1 *)(param_1[0x17] + local_bc),0xffffffff);
            local_44 = FUN_005eeaf0(*(undefined1 *)(param_1[0x17] + local_bc));
          }
          else if (iVar3 == 3) {
            local_90 = (uint)*(byte *)(param_1[0x17] + local_bc);
            local_50 = 0;
            local_4c = 0;
            if ((*(char *)(param_1[0x17] + local_bc) != '\r') &&
               (*(char *)(param_1[0x17] + local_bc) != '\n')) {
              local_48 = FUN_005ee950(*(undefined1 *)(param_1[0x17] + local_bc),0xffffffff);
              local_44 = FUN_005eeaf0(*(undefined1 *)(param_1[0x17] + local_bc));
            }
          }
          if ((((param_1[0x19] == 3) && ((char)param_1[0x33] != '\0')) && (param_1[0x2c] != 0)) &&
             (local_7c < local_bc)) {
            uVar4 = Ordinal_78(param_1[0x2f],*(undefined1 *)(param_1[0x17] + local_bc),0,local_c4);
            uVar4 = Ordinal_78(param_1[0x2f],*(undefined1 *)(param_1[0x17] + -1 + local_bc),uVar4);
            Ordinal_82(param_1[0x2f],uVar4);
            iVar3 = (((local_c4[0] < 0) - 1 & 0x40) - 0x20) + local_c4[0];
            local_8c = *(char *)((int)param_1 + *(byte *)(param_1[0x17] + local_bc) + 0xd0) +
                       local_8c + ((int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6);
          }
          local_30 = local_8c + param_1[4];
          local_2c = local_20 + param_1[5];
          local_28 = (local_48 - local_50) + local_8c + param_1[4];
          local_24 = (local_44 - local_4c) + local_20 + param_1[5];
          local_74 = local_b4;
          local_70 = local_b0;
          local_6c = local_ac;
          local_68 = local_a8;
          local_a4 = local_50;
          local_a0 = local_4c;
          local_9c = local_48;
          local_98 = local_44;
          local_64 = local_50;
          local_60 = local_4c;
          local_5c = local_48;
          local_58 = local_44;
          local_14 = local_30;
          local_10 = local_2c;
          local_c = local_28;
          local_8 = local_24;
          cVar2 = FUN_00624a70(&local_30,&local_74,&local_a4,&local_64);
          if (cVar2 != '\0') {
            iVar5 = FUN_005f84f0();
            iVar6 = FUN_005f84d0();
            iVar11 = local_30 + iVar6;
            iVar7 = local_2c + iVar5;
            iVar6 = local_28 + iVar6;
            iVar5 = local_24 + iVar5;
            uVar16 = 0;
            uVar10 = CONCAT31((int3)((uint)param_1[1] >> 8),param_1[0x2b] != 0);
            uVar15 = 1;
            uVar8 = (uint)*(byte *)(param_1 + 0x27);
            uVar4 = *(undefined4 *)(*(int *)(param_1[1] + 0x1a8) + 0x50);
            uVar12 = local_a4;
            uVar13 = local_a0;
            iVar3 = local_9c;
            iVar14 = local_98;
            local_30 = iVar11;
            local_2c = iVar7;
            local_28 = iVar6;
            local_24 = iVar5;
            iVar9 = FUN_006163e0(0);
            FUN_00616510(0,-(uint)(iVar9 != 1) & local_90,uVar4,iVar11,iVar7,iVar6,iVar5,uVar12,
                         uVar13,iVar3,iVar14,uVar8,uVar15,uVar10,uVar16);
          }
          if ((local_bc == param_1[0x28]) &&
             ((*(char *)((int)param_1 + 0xa6) == '\0' || (local_bc != local_7c)))) {
            local_18 = local_8c + 1;
            local_3c = local_20;
            local_88 = local_38;
          }
          local_8c = ((local_48 - local_50) - (uint)*(ushort *)(param_1 + 0x24)) +
                     (int)(short)param_1[0x25] + param_1[0x2a] + local_8c;
          local_84 = local_8c + 1;
          local_80 = local_20;
          local_1c = local_38;
        }
        if ((local_bc == param_1[0x28]) && (*(char *)((int)param_1 + 0xa6) != '\0')) {
          local_18 = local_8c + 1;
          local_3c = local_20;
          local_88 = local_38;
        }
        local_20 = *(short *)((int)param_1 + 0x96) + local_20;
        local_b8 = local_b8 + 1;
        local_34 = local_78;
      }
      if ((local_bc <= param_1[0x28]) && (local_bc != 0)) {
        local_18 = local_8c + 1;
        if ((*(char *)(param_1[0x17] + -1 + local_bc) == '\n') &&
           (param_1[0x1b] < *(short *)((int)param_1 + 0x96) + local_20)) {
          *(undefined1 *)(local_bc + -2 + param_1[0x17]) = 0;
          *(undefined1 *)(local_bc + -1 + param_1[0x17]) = 0;
          (**(code **)(*param_1 + 0xb4))(param_1[0x17]);
        }
        if (*(char *)(param_1[0x17] + -1 + local_bc) == '\n') {
          local_3c = local_20;
          if ((param_1[0x1c] & 1U) != 0) {
            local_18 = 0;
          }
          if ((param_1[0x1c] & 2U) != 0) {
            local_18 = param_1[0x1a] - local_38;
          }
          if ((param_1[0x1c] & 0x20U) != 0) {
            local_18 = (param_1[0x1a] - local_38) / 2;
          }
          local_18 = local_18 + 1 + param_1[0x1d];
        }
        else {
          local_3c = local_20 - *(short *)((int)param_1 + 0x96);
          local_88 = local_1c;
        }
      }
      FUN_005ef470(local_18,local_3c,&local_b4,local_88);
      local_4c = (**(code **)(*param_1 + 0x54))();
      local_50 = (**(code **)(*param_1 + 0x4c))();
      local_44 = FUN_005f5590();
      local_44 = local_44 + local_4c;
      iVar3 = FUN_005f5550();
      param_1[5] = local_4c;
      param_1[4] = local_50;
      param_1[7] = local_44;
      param_1[6] = iVar3 + local_50;
    }
  }
  return;
}

