// FUN_0061a4a0  0061a4a0

void FUN_0061a4a0(uint *param_1,uint3 *param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  uint uVar2;
  uint3 uVar3;
  uint3 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 auStack_84 [13];
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  uint *puStack_44;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  uint uStack_34;
  uint *puStack_30;
  uint uStack_2c;
  byte bStack_25;
  int iStack_24;
  undefined4 uStack_20;
  ushort local_1c;
  uint local_18;
  uint *puStack_14;
  int iStack_10;
  int local_c;
  uint uStack_8;
  
  local_c = 4;
  bVar1 = (byte)*param_2;
  local_1c = *(ushort *)((int)param_2 + 1);
  puVar4 = param_2;
  while( true ) {
    local_18 = (uint)bVar1;
    param_2 = (uint3 *)((int)puVar4 + 3);
    if ((param_3 < (int)(uint)local_1c) || (local_1c == 0)) break;
    param_3 = param_3 - (uint)local_1c;
    switch(local_18) {
    case 2:
      param_2 = (uint3 *)((uint)local_1c + (int)param_2);
      break;
    case 4:
      param_2 = (uint3 *)((int)param_2 + (uint)local_1c * 2);
      break;
    case 8:
      param_2 = puVar4 + 1;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x20:
    case 0x40:
      param_2 = (uint3 *)((uint)local_1c + (int)param_2);
      break;
    case 0x82:
      param_2 = (uint3 *)((uint)local_1c * 3 + (int)param_2);
      break;
    case 0x84:
      param_2 = param_2 + local_1c;
      break;
    case 0x88:
      param_2 = (uint3 *)((int)puVar4 + 6);
    }
    bVar1 = (byte)*param_2;
    local_1c = *(ushort *)((int)param_2 + 1);
    puVar4 = param_2;
  }
  while ((iVar5 = param_3, 0 < (int)param_4 && (local_1c != 0))) {
    local_1c = local_1c - (short)param_3;
    switch(local_18) {
    case 1:
      if ((int)(uint)local_1c < (int)param_4) {
        param_3 = 0;
        param_1 = (uint *)((uint)local_1c * local_c * param_7 + (int)param_1);
      }
      else {
        param_4 = 0;
      }
      break;
    case 2:
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      puStack_14 = param_1;
      if (param_7 < 2) {
        for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
          uStack_34 = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + iStack_10 + iVar5) * 4);
          puStack_30 = param_1 + iStack_10;
          uVar2 = *puStack_30;
          *puStack_30 = (((int)(uVar2 & 0xff00) >> 8) -
                        ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uStack_34 & 0xff00) >> 8)) * param_6
                        >> 8)) * 0x100 |
                        (((int)uVar2 >> 0x10) -
                        ((((int)(uVar2 & 0xff0000) >> 0x10) - ((int)(uStack_34 & 0xff0000) >> 0x10))
                         * param_6 >> 8)) * 0x10000 |
                        (uVar2 & 0xff) -
                        ((int)(((uVar2 & 0xff) - (uStack_34 & 0xff)) * param_6) >> 8);
        }
        iVar7 = local_c * uStack_8;
      }
      else {
        for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
          for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
            uStack_2c = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + iStack_10 + iVar5) * 4);
            uVar2 = *puStack_14;
            *puStack_14 = (((int)(uVar2 & 0xff00) >> 8) -
                          ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uStack_2c & 0xff00) >> 8)) *
                           param_6 >> 8)) * 0x100 |
                          (((int)uVar2 >> 0x10) -
                          ((((int)(uVar2 & 0xff0000) >> 0x10) -
                           ((int)(uStack_2c & 0xff0000) >> 0x10)) * param_6 >> 8)) * 0x10000 |
                          (uVar2 & 0xff) -
                          ((int)(((uVar2 & 0xff) - (uStack_2c & 0xff)) * param_6) >> 8);
            puStack_14 = puStack_14 + 1;
          }
        }
        iVar7 = local_c * uStack_8 * param_7;
      }
      param_2 = (uint3 *)((int)param_2 + uStack_8 + iVar5);
      param_1 = (uint *)(iVar7 + (int)param_1);
      break;
    case 4:
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      iVar7 = uStack_8 * 2;
      puStack_14 = param_1;
      if (param_7 < 2) {
        for (iStack_10 = 0; iStack_10 < iVar7; iStack_10 = iStack_10 + 2) {
          iStack_4c = *(int *)(DAT_015ede08 +
                              (uint)*(byte *)((int)param_2 + iStack_10 + iVar5 * 2 + 1) * 4);
          uStack_48 = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + iStack_10 + iVar5 * 2) * 4)
          ;
          puStack_44 = param_1 + iStack_10 / 2;
          uVar2 = *puStack_44;
          *puStack_44 = (((int)(uVar2 & 0xff00) >> 8) -
                        ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uStack_48 & 0xff00) >> 8)) *
                         iStack_4c >> 8)) * 0x100 |
                        (((int)uVar2 >> 0x10) -
                        ((((int)(uVar2 & 0xff0000) >> 0x10) - ((int)(uStack_48 & 0xff0000) >> 0x10))
                         * iStack_4c >> 8)) * 0x10000 |
                        (uVar2 & 0xff) -
                        ((int)(((uVar2 & 0xff) - (uStack_48 & 0xff)) * iStack_4c) >> 8);
        }
        iVar6 = (iVar7 / 2) * local_c;
      }
      else {
        for (iStack_10 = 0; iStack_10 < iVar7; iStack_10 = iStack_10 + 2) {
          for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
            iStack_40 = *(int *)(DAT_015ede08 +
                                (uint)*(byte *)((int)param_2 + iStack_10 + iVar5 * 2 + 1) * 4);
            uStack_3c = *(uint *)(param_5 +
                                 (uint)*(byte *)((int)param_2 + iStack_10 + iVar5 * 2) * 4);
            puStack_38 = puStack_14 + iStack_10 / 2 + iStack_24;
            uVar2 = *puStack_38;
            *puStack_38 = (((int)(uVar2 & 0xff00) >> 8) -
                          ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uStack_3c & 0xff00) >> 8)) *
                           iStack_40 >> 8)) * 0x100 |
                          (((int)uVar2 >> 0x10) -
                          ((((int)(uVar2 & 0xff0000) >> 0x10) -
                           ((int)(uStack_3c & 0xff0000) >> 0x10)) * iStack_40 >> 8)) * 0x10000 |
                          (uVar2 & 0xff) -
                          ((int)(((uVar2 & 0xff) - (uStack_3c & 0xff)) * iStack_40) >> 8);
          }
          puStack_14 = puStack_14 + param_7 + -1;
        }
        iVar6 = (iVar7 / 2) * local_c * param_7;
      }
      param_2 = (uint3 *)((int)param_2 + iVar7 + iVar5 * 2);
      param_1 = (uint *)(iVar6 + (int)param_1);
      break;
    case 8:
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      uStack_20 = *(uint *)(param_5 + (uint)(byte)*param_2 * 4);
      for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
        for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
          uVar2 = *param_1;
          *param_1 = (((int)(uVar2 & 0xff00) >> 8) -
                     ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uStack_20 & 0xff00) >> 8)) * param_6 >>
                     8)) * 0x100 |
                     (((int)uVar2 >> 0x10) -
                     ((((int)(uVar2 & 0xff0000) >> 0x10) - ((int)(uStack_20 & 0xff0000) >> 0x10)) *
                      param_6 >> 8)) * 0x10000 |
                     (uVar2 & 0xff) - ((int)(((uVar2 & 0xff) - (uStack_20 & 0xff)) * param_6) >> 8);
          param_1 = (uint *)((int)param_1 + local_c);
        }
      }
      param_2 = (uint3 *)((int)param_2 + 1);
      break;
    case 0xe:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
        for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
          FUN_0061d800(param_1,*(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4),param_6);
          param_1 = (uint *)((int)param_1 + local_c);
        }
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0xf:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
        for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
          FUN_0061da70(param_1,*(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4),param_6);
          param_1 = (uint *)((int)param_1 + local_c);
        }
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0x10:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
        for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
          FUN_0061d520(param_1,*(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4),param_6);
          param_1 = (uint *)((int)param_1 + local_c);
        }
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0x20:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
        for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
          FUN_0061d6a0(param_1,*(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4),param_6);
          param_1 = (uint *)((int)param_1 + local_c);
        }
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0x40:
      param_2 = (uint3 *)((int)param_2 + param_3);
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
        for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
          auStack_84[0] = *(undefined4 *)(param_5 + (uint)(byte)*param_2 * 4);
          FUN_0061d6a0(auStack_84,*param_1,param_6);
          FUN_0061d520(param_1,auStack_84[0],param_6);
          param_1 = (uint *)((int)param_1 + local_c);
        }
        param_2 = (uint3 *)((int)param_2 + 1);
      }
      break;
    case 0x82:
      param_2 = (uint3 *)(param_3 * 3 + (int)param_2);
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      uStack_20 = CONCAT13(0xff,(undefined3)uStack_20);
      for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
        uVar3 = *param_2;
        uStack_20 = CONCAT13(uStack_20._3_1_,uVar3);
        param_2 = (uint3 *)((int)param_2 + 3);
        for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
          uVar2 = *param_1;
          *param_1 = (((int)(uVar2 & 0xff00) >> 8) -
                     ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uVar3 & 0xff00) >> 8)) * param_6 >> 8))
                     * 0x100 | (((int)uVar2 >> 0x10) -
                               ((((int)(uVar2 & 0xff0000) >> 0x10) -
                                ((int)(uVar3 & 0xff0000) >> 0x10)) * param_6 >> 8)) * 0x10000 |
                     (uVar2 & 0xff) - ((int)(((uVar2 & 0xff) - (uVar3 & 0xff)) * param_6) >> 8);
          param_1 = (uint *)((int)param_1 + local_c);
        }
      }
      break;
    case 0x84:
      param_2 = param_2 + param_3;
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      uStack_20 = CONCAT13(0xff,(undefined3)uStack_20);
      for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
        uVar3 = *param_2;
        uStack_20 = CONCAT13(uStack_20._3_1_,uVar3);
        bStack_25 = *(byte *)((int)param_2 + 3);
        param_2 = param_2 + 1;
        for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
          iStack_50 = *(int *)(DAT_015ede08 + (uint)bStack_25 * 4);
          uVar2 = *param_1;
          *param_1 = (((int)(uVar2 & 0xff00) >> 8) -
                     ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uVar3 & 0xff00) >> 8)) * iStack_50 >> 8
                     )) * 0x100 |
                     (((int)uVar2 >> 0x10) -
                     ((((int)(uVar2 & 0xff0000) >> 0x10) - ((int)(uVar3 & 0xff0000) >> 0x10)) *
                      iStack_50 >> 8)) * 0x10000 |
                     (uVar2 & 0xff) - ((int)(((uVar2 & 0xff) - (uVar3 & 0xff)) * iStack_50) >> 8);
          param_1 = (uint *)((int)param_1 + local_c);
        }
      }
      break;
    case 0x88:
      if ((int)(uint)local_1c < (int)param_4) {
        uStack_8 = (uint)local_1c;
        param_3 = 0;
      }
      else {
        uStack_8 = param_4;
        param_4 = 0;
      }
      uVar3 = *param_2;
      uStack_20 = CONCAT13(0xff,uVar3);
      param_2 = (uint3 *)((int)param_2 + 3);
      for (iStack_10 = 0; iStack_10 < (int)uStack_8; iStack_10 = iStack_10 + 1) {
        for (iStack_24 = 0; iStack_24 < param_7; iStack_24 = iStack_24 + 1) {
          uVar2 = *param_1;
          *param_1 = (((int)(uVar2 & 0xff00) >> 8) -
                     ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uVar3 & 0xff00) >> 8)) * param_6 >> 8))
                     * 0x100 | (((int)uVar2 >> 0x10) -
                               ((((int)(uVar2 & 0xff0000) >> 0x10) -
                                ((int)(uVar3 & 0xff0000) >> 0x10)) * param_6 >> 8)) * 0x10000 |
                     (uVar2 & 0xff) - ((int)(((uVar2 & 0xff) - (uVar3 & 0xff)) * param_6) >> 8);
          param_1 = (uint *)((int)param_1 + local_c);
        }
      }
    }
    if (param_4 != 0) {
      param_4 = param_4 - local_1c;
      local_18 = (uint)(byte)*param_2;
      local_1c = *(ushort *)((int)param_2 + 1);
      param_2 = (uint3 *)((int)param_2 + 3);
    }
  }
  return;
}

