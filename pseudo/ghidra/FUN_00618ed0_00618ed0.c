// FUN_00618ed0  00618ed0

void FUN_00618ed0(uint *param_1,uint3 *param_2,int param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  byte bVar1;
  bool bVar2;
  uint3 uVar3;
  uint3 *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined4 auStack_b4 [13];
  uint uStack_80;
  uint *puStack_7c;
  uint *puStack_78;
  uint uStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  byte bStack_51;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint *puStack_44;
  uint *puStack_40;
  uint uStack_3c;
  uint *puStack_38;
  uint *puStack_34;
  undefined4 uStack_30;
  ushort local_2c;
  uint uStack_28;
  uint local_24;
  uint *puStack_20;
  uint *puStack_1c;
  uint *puStack_18;
  int iStack_14;
  int local_10;
  uint uStack_c;
  byte bStack_5;
  
  local_10 = 4;
  bVar1 = (byte)*param_2;
  local_2c = *(ushort *)((int)param_2 + 1);
  puVar4 = param_2;
  while( true ) {
    local_24 = (uint)bVar1;
    param_2 = (uint3 *)((int)puVar4 + 3);
    if ((param_3 < (int)(uint)local_2c) || (local_2c == 0)) break;
    param_3 = param_3 - (uint)local_2c;
    switch(local_24) {
    case 2:
      param_2 = (uint3 *)((uint)local_2c + (int)param_2);
      break;
    case 4:
      param_2 = (uint3 *)((int)param_2 + (uint)local_2c * 2);
      break;
    case 8:
      param_2 = puVar4 + 1;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x20:
    case 0x40:
      param_2 = (uint3 *)((uint)local_2c + (int)param_2);
      break;
    case 0x82:
      param_2 = (uint3 *)((uint)local_2c * 3 + (int)param_2);
      break;
    case 0x84:
      param_2 = param_2 + local_2c;
      break;
    case 0x88:
      param_2 = (uint3 *)((int)puVar4 + 6);
    }
    bVar1 = (byte)*param_2;
    local_2c = *(ushort *)((int)param_2 + 1);
    puVar4 = param_2;
  }
  while ((iVar5 = param_3, puVar12 = param_1, 0 < (int)param_4 && (local_2c != 0))) {
    local_2c = local_2c - (short)param_3;
    puVar6 = param_1;
    switch(local_24) {
    case 1:
      if ((int)(uint)local_2c < (int)param_4) {
        param_3 = 0;
        puVar6 = (uint *)((uint)local_2c * local_10 + (int)param_1);
      }
      else {
        param_4 = 0;
      }
      break;
    case 2:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      uStack_28 = uStack_c;
      puStack_1c = param_1;
      uVar7 = uStack_c & 3;
      if (uVar7 == 1) {
        *param_1 = *(uint *)(param_5 + (uint)*(byte *)param_2 * 4);
        param_1 = (uint *)((int)param_1 + local_10);
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      else if (uVar7 == 2) {
        *param_1 = *(uint *)(param_5 + (uint)*(byte *)param_2 * 4);
        param_1[1] = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + 1) * 4);
        param_1 = (uint *)((int)param_1 + local_10 * 2);
        param_2 = (uint3 *)((int)param_2 + 2);
      }
      else if (uVar7 == 3) {
        *param_1 = *(uint *)(param_5 + (uint)*(byte *)param_2 * 4);
        param_1[1] = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + 1) * 4);
        param_1[2] = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + 2) * 4);
        param_1 = (uint *)(local_10 * 3 + (int)param_1);
        param_2 = (uint3 *)((int)param_2 + 3);
      }
      uVar8 = uStack_c & 0xfffffffc;
      puStack_20 = param_1;
      uVar7 = uVar8;
      pbVar11 = (byte *)param_2;
      puVar6 = param_1;
      if (uVar8 != 0) {
        do {
          uVar9 = *(uint *)(param_5 + (uint)pbVar11[1] * 4);
          *puVar6 = *(uint *)(param_5 + (uint)*pbVar11 * 4);
          puVar6[1] = uVar9;
          uVar9 = *(uint *)(param_5 + (uint)pbVar11[3] * 4);
          puVar6[2] = *(uint *)(param_5 + (uint)pbVar11[2] * 4);
          puVar6[3] = uVar9;
          uVar9 = uVar7 - 4;
          bVar2 = 3 < (int)uVar7;
          uVar7 = uVar9;
          pbVar11 = pbVar11 + 4;
          puVar6 = puVar6 + 4;
        } while (uVar9 != 0 && bVar2);
      }
      param_2 = (uint3 *)((int)param_2 + uVar8);
      puVar6 = (uint *)(local_10 * uVar8 + (int)param_1);
      if (DAT_007960cd != '\0') {
        puStack_38 = puVar12;
        for (uStack_3c = uStack_c; 0 < (int)uStack_3c; uStack_3c = uStack_3c - 1) {
          puStack_34 = puStack_38;
          *(undefined1 *)((int)puStack_38 + 3) = 0xff;
          puStack_38 = puStack_38 + 1;
        }
      }
      break;
    case 4:
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      iVar10 = uStack_c * 2;
      puStack_20 = param_1;
      if (DAT_007960cd == '\0') {
        for (iStack_14 = 0; iStack_14 < iVar10; iStack_14 = iStack_14 + 2) {
          uStack_60 = (uint)*(byte *)((int)param_2 + iStack_14 + iVar5 * 2 + 1);
          uStack_5c = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + iStack_14 + iVar5 * 2) * 4)
          ;
          puStack_58 = param_1 + iStack_14 / 2;
          uVar7 = *puStack_58;
          *puStack_58 = (((int)(uVar7 & 0xff00) >> 8) -
                        ((int)((((int)(uVar7 & 0xff00) >> 8) - ((int)(uStack_5c & 0xff00) >> 8)) *
                              uStack_60) >> 8)) * 0x100 |
                        (((int)uVar7 >> 0x10) -
                        ((int)((((int)(uVar7 & 0xff0000) >> 0x10) -
                               ((int)(uStack_5c & 0xff0000) >> 0x10)) * uStack_60) >> 8)) * 0x10000
                        | (uVar7 & 0xff) -
                          ((int)(((uVar7 & 0xff) - (uStack_5c & 0xff)) * uStack_60) >> 8);
        }
      }
      else {
        for (iStack_14 = 0; iStack_14 < iVar10; iStack_14 = iStack_14 + 2) {
          puStack_18 = param_1 + iStack_14 / 2;
          uStack_50 = (uint)*(byte *)((int)param_2 + iStack_14 + iVar5 * 2 + 1);
          uStack_4c = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + iStack_14 + iVar5 * 2) * 4)
          ;
          uVar7 = *puStack_18;
          *puStack_18 = (((int)(uVar7 & 0xff00) >> 8) -
                        ((int)((((int)(uVar7 & 0xff00) >> 8) - ((int)(uStack_4c & 0xff00) >> 8)) *
                              uStack_50) >> 8)) * 0x100 |
                        (((int)uVar7 >> 0x10) -
                        ((int)((((int)(uVar7 & 0xff0000) >> 0x10) -
                               ((int)(uStack_4c & 0xff0000) >> 0x10)) * uStack_50) >> 8)) * 0x10000
                        | (uVar7 & 0xff) -
                          ((int)(((uVar7 & 0xff) - (uStack_4c & 0xff)) * uStack_50) >> 8);
          bStack_51 = *(byte *)((int)param_2 + iStack_14 + iVar5 * 2 + 1);
          *(char *)((int)puStack_18 + 3) =
               *(char *)((int)puStack_18 + 3) +
               (char)((0xff - (uint)*(byte *)((int)puStack_18 + 3)) * (uint)bStack_51 >> 8);
        }
      }
      param_2 = (uint3 *)((int)param_2 + iVar10 + iVar5 * 2);
      puVar6 = (uint *)((iVar10 / 2) * local_10 + (int)param_1);
      break;
    case 8:
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      uStack_28 = uStack_c;
      puStack_1c = param_1;
      puStack_20 = param_1;
      uStack_30 = *(uint *)(param_5 + (uint)(byte)*param_2 * 4);
      uVar7 = uStack_c;
      if (uStack_c != 0) {
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar12 = uStack_30;
          puVar12 = puVar12 + 1;
        }
      }
      puVar6 = (uint *)(local_10 * uStack_c + (int)param_1);
      param_2 = (uint3 *)((int)param_2 + 1);
      if (DAT_007960cd != '\0') {
        puStack_70 = param_1;
        for (uStack_74 = uStack_c; 0 < (int)uStack_74; uStack_74 = uStack_74 - 1) {
          puStack_6c = puStack_70;
          *(undefined1 *)((int)puStack_70 + 3) = 0xff;
          puStack_70 = puStack_70 + 1;
        }
      }
      break;
    case 0xe:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      for (iStack_14 = 0; puVar6 = param_1, iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        FUN_0061d800(param_1,*(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4),param_6);
        param_1 = (uint *)((int)param_1 + local_10);
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0xf:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      for (iStack_14 = 0; puVar6 = param_1, iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        FUN_0061da70(param_1,*(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4),param_6);
        param_1 = (uint *)((int)param_1 + local_10);
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0x10:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      for (iStack_14 = 0; puVar6 = param_1, iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        FUN_0061d520(param_1,*(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4),param_6);
        param_1 = (uint *)((int)param_1 + local_10);
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0x20:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      for (iStack_14 = 0; puVar6 = param_1, iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        FUN_0061d6a0(param_1,*(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4),param_6);
        param_1 = (uint *)((int)param_1 + local_10);
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0x40:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      for (iStack_14 = 0; puVar6 = param_1, iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        auStack_b4[0] = *(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4);
        FUN_0061d6a0(auStack_b4,*param_1,param_6);
        FUN_0061d520(param_1,auStack_b4[0],param_6);
        param_1 = (uint *)((int)param_1 + local_10);
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0x82:
      param_2 = (uint3 *)(param_3 * 3 + (int)param_2);
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      uStack_28 = uStack_c;
      puStack_1c = param_1;
      uStack_30 = CONCAT13(0xff,(undefined3)uStack_30);
      for (iStack_14 = 0; iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        uStack_30 = CONCAT13(uStack_30._3_1_,*param_2);
        *param_1 = uStack_30;
        param_1 = (uint *)((int)param_1 + local_10);
        param_2 = (uint3 *)((int)param_2 + 3);
      }
      puVar6 = param_1;
      if (DAT_007960cd != '\0') {
        puStack_44 = puVar12;
        for (uStack_48 = uStack_c; 0 < (int)uStack_48; uStack_48 = uStack_48 - 1) {
          puStack_40 = puStack_44;
          *(undefined1 *)((int)puStack_44 + 3) = 0xff;
          puStack_44 = puStack_44 + 1;
        }
      }
      break;
    case 0x84:
      param_2 = param_2 + param_3;
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      uStack_30 = CONCAT13(0xff,(undefined3)uStack_30);
      if (DAT_007960cd == '\0') {
        for (iStack_14 = 0; puVar6 = param_1, iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1)
        {
          uVar3 = *param_2;
          uStack_30 = CONCAT13(uStack_30._3_1_,uVar3);
          bStack_5 = *(byte *)((int)param_2 + 3);
          param_2 = param_2 + 1;
          uStack_68 = (uint)bStack_5;
          uVar7 = *param_1;
          *param_1 = (((int)(uVar7 & 0xff00) >> 8) -
                     ((int)((((int)(uVar7 & 0xff00) >> 8) - ((int)(uVar3 & 0xff00) >> 8)) *
                           uStack_68) >> 8)) * 0x100 |
                     (((int)uVar7 >> 0x10) -
                     ((int)((((int)(uVar7 & 0xff0000) >> 0x10) - ((int)(uVar3 & 0xff0000) >> 0x10))
                           * uStack_68) >> 8)) * 0x10000 |
                     (uVar7 & 0xff) - ((int)(((uVar7 & 0xff) - (uVar3 & 0xff)) * uStack_68) >> 8);
          param_1 = (uint *)((int)param_1 + local_10);
        }
      }
      else {
        for (iStack_14 = 0; puVar6 = param_1, iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1)
        {
          uVar3 = *param_2;
          uStack_30 = CONCAT13(uStack_30._3_1_,uVar3);
          bStack_5 = *(byte *)((int)param_2 + 3);
          param_2 = param_2 + 1;
          uStack_64 = (uint)bStack_5;
          uVar7 = *param_1;
          *param_1 = (((int)(uVar7 & 0xff00) >> 8) -
                     ((int)((((int)(uVar7 & 0xff00) >> 8) - ((int)(uVar3 & 0xff00) >> 8)) *
                           uStack_64) >> 8)) * 0x100 |
                     (((int)uVar7 >> 0x10) -
                     ((int)((((int)(uVar7 & 0xff0000) >> 0x10) - ((int)(uVar3 & 0xff0000) >> 0x10))
                           * uStack_64) >> 8)) * 0x10000 |
                     (uVar7 & 0xff) - ((int)(((uVar7 & 0xff) - (uVar3 & 0xff)) * uStack_64) >> 8);
          *(char *)((int)param_1 + 3) =
               *(char *)((int)param_1 + 3) +
               (char)((0xff - (uint)*(byte *)((int)param_1 + 3)) * (uint)bStack_5 >> 8);
          param_1 = (uint *)((int)param_1 + local_10);
        }
      }
      break;
    case 0x88:
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      uStack_28 = uStack_c;
      puStack_1c = param_1;
      uStack_30 = CONCAT13(0xff,*param_2);
      param_2 = (uint3 *)((int)param_2 + 3);
      for (iStack_14 = 0; iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        *param_1 = uStack_30;
        param_1 = (uint *)((int)param_1 + local_10);
      }
      puVar6 = param_1;
      if (DAT_007960cd != '\0') {
        puStack_7c = puVar12;
        for (uStack_80 = uStack_c; 0 < (int)uStack_80; uStack_80 = uStack_80 - 1) {
          puStack_78 = puStack_7c;
          *(undefined1 *)((int)puStack_7c + 3) = 0xff;
          puStack_7c = puStack_7c + 1;
        }
      }
    }
    param_1 = puVar6;
    if (param_4 != 0) {
      param_4 = param_4 - local_2c;
      local_24 = (uint)(byte)*param_2;
      local_2c = *(ushort *)((int)param_2 + 1);
      param_2 = (uint3 *)((int)param_2 + 3);
    }
  }
  return;
}

