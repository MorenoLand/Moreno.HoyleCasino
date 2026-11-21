// FUN_0061b450  0061b450

void FUN_0061b450(uint *param_1,uint3 *param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  uint uVar2;
  uint3 uVar3;
  uint3 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 auStack_94 [13];
  int iStack_60;
  int iStack_5c;
  uint *puStack_58;
  int iStack_54;
  uint *puStack_50;
  uint uStack_4c;
  uint *puStack_48;
  uint uStack_44;
  byte bStack_3d;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  ushort local_2c;
  uint local_28;
  uint *puStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  int iStack_18;
  int local_14;
  undefined4 local_10;
  uint uStack_c;
  undefined4 local_8;
  
  local_14 = 4;
  local_30 = FUN_00617ab0(0xf8,0x27,0xf2);
  local_20 = FUN_00617ab0(0xf7,0x42,0x28);
  local_1c = FUN_00617ab0(0xee,0xf3,0x2c);
  local_8 = FUN_00617ab0(0x8a,0xf3,0x2c);
  local_10 = FUN_00617ab0(0x2d,0xf2,0xf2);
  local_34 = FUN_00617ab0(0x30,0x2b,0xf4);
  bVar1 = (byte)*param_2;
  local_2c = *(ushort *)((int)param_2 + 1);
  puVar4 = param_2;
  while( true ) {
    local_28 = (uint)bVar1;
    param_2 = (uint3 *)((int)puVar4 + 3);
    if ((param_3 < (int)(uint)local_2c) || (local_2c == 0)) break;
    param_3 = param_3 - (uint)local_2c;
    switch(local_28) {
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
  while ((iVar5 = param_3, 0 < (int)param_4 && (local_2c != 0))) {
    local_2c = local_2c - (short)param_3;
    switch(local_28) {
    case 1:
      if ((int)(uint)local_2c < (int)param_4) {
        param_3 = 0;
        param_1 = (uint *)((uint)local_2c * local_14 * param_7 + (int)param_1);
      }
      else {
        param_4 = 0;
      }
      break;
    case 2:
      if ((int)(uint)local_2c < (int)param_4) {
        uStack_c = (uint)local_2c;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      puStack_24 = param_1;
      if (param_7 < 2) {
        for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
          uStack_4c = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + iStack_18 + iVar5) * 4);
          puStack_48 = param_1 + iStack_18;
          uVar2 = *puStack_48;
          *puStack_48 = (((int)(uVar2 & 0xff00) >> 8) -
                        ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uStack_4c & 0xff00) >> 8)) * param_6
                        >> 8)) * 0x100 |
                        (((int)uVar2 >> 0x10) -
                        ((((int)(uVar2 & 0xff0000) >> 0x10) - ((int)(uStack_4c & 0xff0000) >> 0x10))
                         * param_6 >> 8)) * 0x10000 |
                        (uVar2 & 0xff) -
                        ((int)(((uVar2 & 0xff) - (uStack_4c & 0xff)) * param_6) >> 8);
        }
        iVar7 = local_14 * uStack_c;
      }
      else {
        for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
          for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
            uStack_44 = *(uint *)(param_5 + (uint)*(byte *)((int)param_2 + iStack_18 + iVar5) * 4);
            uVar2 = *puStack_24;
            *puStack_24 = (((int)(uVar2 & 0xff00) >> 8) -
                          ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uStack_44 & 0xff00) >> 8)) *
                           param_6 >> 8)) * 0x100 |
                          (((int)uVar2 >> 0x10) -
                          ((((int)(uVar2 & 0xff0000) >> 0x10) -
                           ((int)(uStack_44 & 0xff0000) >> 0x10)) * param_6 >> 8)) * 0x10000 |
                          (uVar2 & 0xff) -
                          ((int)(((uVar2 & 0xff) - (uStack_44 & 0xff)) * param_6) >> 8);
            puStack_24 = puStack_24 + 1;
          }
        }
        iVar7 = local_14 * uStack_c * param_7;
      }
      param_2 = (uint3 *)((int)param_2 + uStack_c + iVar5);
      param_1 = (uint *)(iVar7 + (int)param_1);
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
      iVar7 = uStack_c * 2;
      puStack_24 = param_1;
      if (param_7 < 2) {
        for (iStack_18 = 0; iStack_18 < iVar7; iStack_18 = iStack_18 + 2) {
          iStack_5c = *(int *)(DAT_015ede08 +
                              (uint)*(byte *)((int)param_2 + iStack_18 + iVar5 * 2 + 1) * 4);
          puStack_58 = param_1 + iStack_18 / 2;
          uVar2 = *puStack_58;
          *puStack_58 = (((int)(uVar2 & 0xff00) >> 8) -
                        ((((int)(uVar2 & 0xff00) >> 8) - ((int)(local_30 & 0xff00) >> 8)) *
                         iStack_5c >> 8)) * 0x100 |
                        (((int)uVar2 >> 0x10) -
                        ((((int)(uVar2 & 0xff0000) >> 0x10) - ((int)(local_30 & 0xff0000) >> 0x10))
                         * iStack_5c >> 8)) * 0x10000 |
                        (uVar2 & 0xff) -
                        ((int)(((uVar2 & 0xff) - (local_30 & 0xff)) * iStack_5c) >> 8);
        }
        iVar6 = (iVar7 / 2) * local_14;
      }
      else {
        for (iStack_18 = 0; iStack_18 < iVar7; iStack_18 = iStack_18 + 2) {
          for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
            iStack_54 = *(int *)(DAT_015ede08 +
                                (uint)*(byte *)((int)param_2 + iStack_18 + iVar5 * 2 + 1) * 4);
            puStack_50 = puStack_24 + iStack_18 / 2 + iStack_3c;
            uVar2 = *puStack_50;
            *puStack_50 = (((int)(uVar2 & 0xff00) >> 8) -
                          ((((int)(uVar2 & 0xff00) >> 8) - ((int)(local_30 & 0xff00) >> 8)) *
                           iStack_54 >> 8)) * 0x100 |
                          (((int)uVar2 >> 0x10) -
                          ((((int)(uVar2 & 0xff0000) >> 0x10) - ((int)(local_30 & 0xff0000) >> 0x10)
                           ) * iStack_54 >> 8)) * 0x10000 |
                          (uVar2 & 0xff) -
                          ((int)(((uVar2 & 0xff) - (local_30 & 0xff)) * iStack_54) >> 8);
          }
          puStack_24 = puStack_24 + param_7 + -1;
        }
        iVar6 = (iVar7 / 2) * local_14 * param_7;
      }
      param_2 = (uint3 *)((int)param_2 + iVar7 + iVar5 * 2);
      param_1 = (uint *)(iVar6 + (int)param_1);
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
      uStack_38 = *(uint *)(param_5 + (uint)(byte)*param_2 * 4);
      for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
        for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
          uVar2 = *param_1;
          *param_1 = (((int)(uVar2 & 0xff00) >> 8) -
                     ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uStack_38 & 0xff00) >> 8)) * param_6 >>
                     8)) * 0x100 |
                     (((int)uVar2 >> 0x10) -
                     ((((int)(uVar2 & 0xff0000) >> 0x10) - ((int)(uStack_38 & 0xff0000) >> 0x10)) *
                      param_6 >> 8)) * 0x10000 |
                     (uVar2 & 0xff) - ((int)(((uVar2 & 0xff) - (uStack_38 & 0xff)) * param_6) >> 8);
          param_1 = (uint *)((int)param_1 + local_14);
        }
      }
      param_2 = (uint3 *)((int)param_2 + 1);
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
      for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
        for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
          FUN_0061d800(param_1,local_8,param_6);
          param_1 = (uint *)((int)param_1 + local_14);
        }
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
      for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
        for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
          FUN_0061da70(param_1,local_10,param_6);
          param_1 = (uint *)((int)param_1 + local_14);
        }
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
      for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
        for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
          FUN_0061d520(param_1,local_20,param_6);
          param_1 = (uint *)((int)param_1 + local_14);
        }
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
      for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
        for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
          FUN_0061d6a0(param_1,local_1c,param_6);
          param_1 = (uint *)((int)param_1 + local_14);
        }
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
      for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
        for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
          auStack_94[0] = local_34;
          FUN_0061d6a0(auStack_94,*param_1,param_6);
          FUN_0061d520(param_1,auStack_94[0],param_6);
          param_1 = (uint *)((int)param_1 + local_14);
        }
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
      uStack_38 = CONCAT13(0xff,(undefined3)uStack_38);
      for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
        uVar3 = *param_2;
        uStack_38 = CONCAT13(uStack_38._3_1_,uVar3);
        param_2 = (uint3 *)((int)param_2 + 3);
        for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
          uVar2 = *param_1;
          *param_1 = (((int)(uVar2 & 0xff00) >> 8) -
                     ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uVar3 & 0xff00) >> 8)) * param_6 >> 8))
                     * 0x100 | (((int)uVar2 >> 0x10) -
                               ((((int)(uVar2 & 0xff0000) >> 0x10) -
                                ((int)(uVar3 & 0xff0000) >> 0x10)) * param_6 >> 8)) * 0x10000 |
                     (uVar2 & 0xff) - ((int)(((uVar2 & 0xff) - (uVar3 & 0xff)) * param_6) >> 8);
          param_1 = (uint *)((int)param_1 + local_14);
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
      uStack_38 = CONCAT13(0xff,(undefined3)uStack_38);
      for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
        uStack_38 = CONCAT13(uStack_38._3_1_,*param_2);
        bStack_3d = *(byte *)((int)param_2 + 3);
        param_2 = param_2 + 1;
        for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
          iStack_60 = *(int *)(DAT_015ede08 + (uint)bStack_3d * 4);
          uVar2 = *param_1;
          *param_1 = (((int)(uVar2 & 0xff00) >> 8) -
                     ((((int)(uVar2 & 0xff00) >> 8) - ((int)(local_30 & 0xff00) >> 8)) * iStack_60
                     >> 8)) * 0x100 |
                     (((int)uVar2 >> 0x10) -
                     ((((int)(uVar2 & 0xff0000) >> 0x10) - ((int)(local_30 & 0xff0000) >> 0x10)) *
                      iStack_60 >> 8)) * 0x10000 |
                     (uVar2 & 0xff) - ((int)(((uVar2 & 0xff) - (local_30 & 0xff)) * iStack_60) >> 8)
          ;
          param_1 = (uint *)((int)param_1 + local_14);
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
      uVar3 = *param_2;
      uStack_38 = CONCAT13(0xff,uVar3);
      param_2 = (uint3 *)((int)param_2 + 3);
      for (iStack_18 = 0; iStack_18 < (int)uStack_c; iStack_18 = iStack_18 + 1) {
        for (iStack_3c = 0; iStack_3c < param_7; iStack_3c = iStack_3c + 1) {
          uVar2 = *param_1;
          *param_1 = (((int)(uVar2 & 0xff00) >> 8) -
                     ((((int)(uVar2 & 0xff00) >> 8) - ((int)(uVar3 & 0xff00) >> 8)) * param_6 >> 8))
                     * 0x100 | (((int)uVar2 >> 0x10) -
                               ((((int)(uVar2 & 0xff0000) >> 0x10) -
                                ((int)(uVar3 & 0xff0000) >> 0x10)) * param_6 >> 8)) * 0x10000 |
                     (uVar2 & 0xff) - ((int)(((uVar2 & 0xff) - (uVar3 & 0xff)) * param_6) >> 8);
          param_1 = (uint *)((int)param_1 + local_14);
        }
      }
    }
    if (param_4 != 0) {
      param_4 = param_4 - local_2c;
      local_28 = (uint)(byte)*param_2;
      local_2c = *(ushort *)((int)param_2 + 1);
      param_2 = (uint3 *)((int)param_2 + 3);
    }
  }
  return;
}

