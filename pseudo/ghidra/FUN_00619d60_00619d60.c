// FUN_00619d60  00619d60

undefined1 FUN_00619d60(undefined4 *param_1,byte *param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined3 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uStack_58;
  undefined4 *puStack_54;
  uint uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_38;
  undefined1 local_31;
  ushort local_30;
  undefined4 uStack_20;
  int iStack_14;
  uint uStack_c;
  
  bVar1 = *param_2;
  local_30 = *(ushort *)(param_2 + 1);
  pbVar2 = param_2;
  while ((param_2 = pbVar2 + 3, (int)(uint)local_30 <= param_3 && (local_30 != 0))) {
    param_3 = param_3 - (uint)local_30;
    switch(bVar1) {
    case 2:
      param_2 = param_2 + local_30;
      break;
    case 4:
      param_2 = param_2 + (uint)local_30 * 2;
      break;
    case 8:
      param_2 = pbVar2 + 4;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x20:
    case 0x40:
      param_2 = param_2 + local_30;
      break;
    case 0x82:
      param_2 = param_2 + (uint)local_30 * 3;
      break;
    case 0x84:
      param_2 = param_2 + (uint)local_30 * 4;
      break;
    case 0x88:
      param_2 = pbVar2 + 6;
    }
    bVar1 = *param_2;
    pbVar2 = param_2;
    local_30 = *(ushort *)(param_2 + 1);
  }
  local_31 = 0;
  while ((iVar3 = param_3, puStack_54 = param_1, 0 < (int)param_4 && (local_30 != 0))) {
    uVar5 = (uint)local_30 - param_3;
    local_30 = (ushort)uVar5;
    switch(bVar1) {
    case 1:
      if ((int)(uVar5 & 0xffff) < (int)param_4) {
        param_3 = 0;
        param_1 = param_1 + (uVar5 & 0xffff);
      }
      else {
        param_4 = 0;
      }
      break;
    case 4:
      if ((int)(uVar5 & 0xffff) < (int)param_4) {
        uStack_c = uVar5 & 0xffff;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      iVar7 = uStack_c * 2;
      for (iStack_14 = 0; iStack_14 < iVar7; iStack_14 = iStack_14 + 2) {
        uVar4 = FUN_00617a70(*(undefined4 *)(param_5 + (uint)param_2[iStack_14 + iVar3 * 2] * 4));
        uStack_20 = CONCAT13(param_2[iStack_14 + iVar3 * 2 + 1],uVar4);
        uVar6 = FUN_00617b30(uStack_20);
        param_1[iStack_14 / 2] = uVar6;
      }
      param_2 = param_2 + iVar7 + iVar3 * 2;
      param_1 = param_1 + iVar7 / 2;
      break;
    case 8:
      if ((int)(uVar5 & 0xffff) < (int)param_4) {
        uStack_c = uVar5 & 0xffff;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      uVar4 = FUN_00617a70(*(undefined4 *)(param_5 + (uint)*param_2 * 4));
      uStack_20 = CONCAT13(0xff,uVar4);
      uVar6 = FUN_00617b30(uStack_20);
      for (iStack_14 = 0; iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        param_1[iStack_14] = uVar6;
      }
      param_1 = param_1 + uStack_c;
      param_2 = param_2 + 1;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x20:
    case 0x40:
      local_31 = 1;
    case 2:
      param_2 = param_2 + param_3;
      if ((int)(uVar5 & 0xffff) < (int)param_4) {
        uStack_c = uVar5 & 0xffff;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      for (iStack_14 = 0; iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        puStack_54[iStack_14] = *(undefined4 *)(param_5 + (uint)*param_2 * 4);
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      if (DAT_007960cd != '\0') {
        puStack_48 = puStack_54;
        for (uStack_4c = uStack_c; 0 < (int)uStack_4c; uStack_4c = uStack_4c - 1) {
          *(undefined1 *)((int)puStack_48 + 3) = 0xff;
          puStack_48 = puStack_48 + 1;
        }
      }
      break;
    case 0x82:
      param_2 = param_2 + param_3 * 3;
      if ((int)(uVar5 & 0xffff) < (int)param_4) {
        uStack_c = uVar5 & 0xffff;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      uStack_38 = 0xff000000;
      for (iStack_14 = 0; iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        uStack_38 = CONCAT13(uStack_38._3_1_,*(undefined3 *)param_2);
        *param_1 = uStack_38;
        param_1 = param_1 + 1;
        param_2 = param_2 + 3;
      }
      if (DAT_007960cd != '\0') {
        for (uStack_58 = uStack_c; 0 < (int)uStack_58; uStack_58 = uStack_58 - 1) {
          *(undefined1 *)((int)puStack_54 + 3) = 0xff;
          puStack_54 = puStack_54 + 1;
        }
      }
      break;
    case 0x84:
      param_2 = param_2 + param_3 * 4;
      if ((int)(uVar5 & 0xffff) < (int)param_4) {
        uStack_c = uVar5 & 0xffff;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      for (iStack_14 = 0; iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        uVar6 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        *param_1 = uVar6;
        param_1 = param_1 + 1;
      }
      break;
    case 0x88:
      if ((int)(uVar5 & 0xffff) < (int)param_4) {
        uStack_c = uVar5 & 0xffff;
        param_3 = 0;
      }
      else {
        uStack_c = param_4;
        param_4 = 0;
      }
      uStack_38 = CONCAT13(0xff,*(undefined3 *)param_2);
      param_2 = param_2 + 3;
      for (iStack_14 = 0; iStack_14 < (int)uStack_c; iStack_14 = iStack_14 + 1) {
        *param_1 = uStack_38;
        param_1 = param_1 + 1;
      }
    }
    if (param_4 != 0) {
      param_4 = param_4 - (uVar5 & 0xffff);
      bVar1 = *param_2;
      local_30 = *(ushort *)(param_2 + 1);
      param_2 = param_2 + 3;
    }
  }
  return local_31;
}

