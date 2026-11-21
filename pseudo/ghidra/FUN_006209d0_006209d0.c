// FUN_006209d0  006209d0

void __thiscall
FUN_006209d0(int param_1,int param_2,uint param_3,uint param_4,int param_5,char param_6,char param_7
            )

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_40;
  uint local_38;
  int local_30;
  uint local_2c;
  char local_27;
  char local_26;
  char local_25;
  uint local_24;
  uint *local_20;
  uint local_1c;
  byte *local_18;
  int local_14;
  uint local_10;
  void *local_c;
  uint local_8;
  
  local_26 = '\0';
  local_30 = 0;
  local_25 = '\0';
  local_14 = param_2;
  for (local_10 = 0; (int)local_10 < (int)param_4; local_10 = local_10 + 1) {
    local_18 = (byte *)(param_2 + local_10 * param_3 * 4);
    local_26 = '\x01';
    for (local_38 = 0; (int)local_38 < (int)param_3; local_38 = local_38 + 1) {
      uVar7 = local_38 & 0x80000001;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
      }
      if (uVar7 == 0) {
        if (((*local_18 < 0xe6) || (local_18[1] < 0xe6)) || (local_18[2] < 0xe6)) {
          local_26 = '\0';
          local_38 = param_3;
        }
      }
      else if (((0x19 < *local_18) || (0x19 < local_18[1])) || (0x19 < local_18[2])) {
        local_26 = '\0';
        local_38 = param_3;
      }
      local_18 = local_18 + 4;
    }
    if (local_26 == '\0') {
      local_30 = local_30 + 1;
    }
    else {
      local_25 = '\x01';
      FUN_006209d0(local_14,param_3,local_30,param_6,1,1);
      local_14 = local_14 + (local_30 + 1) * param_3 * 4;
      local_30 = 0;
    }
  }
  if (local_25 == '\0') {
    if (param_5 == 4) {
      local_27 = '\0';
      bVar2 = false;
      for (local_10 = 0; (int)local_10 < (int)param_4; local_10 = local_10 + 1) {
        for (local_38 = 0; (int)local_38 < (int)param_3; local_38 = local_38 + 1) {
          iVar3 = local_10 * param_3 + local_38;
          if ((!bVar2) &&
             (((*(char *)(param_2 + iVar3 * 4) != '\0' ||
               (*(char *)(param_2 + 1 + iVar3 * 4) != '\0')) ||
              (*(char *)(param_2 + 2 + iVar3 * 4) != '\0')))) {
            bVar2 = true;
          }
          if (*(char *)(param_2 + 3 + iVar3 * 4) != '\0') {
            local_27 = '\x01';
            local_10 = param_4;
            local_38 = param_3;
          }
        }
      }
      if ((local_27 == '\0') && (bVar2)) {
        for (local_10 = 0; (int)local_10 < (int)param_4; local_10 = local_10 + 1) {
          for (local_38 = 0; (int)local_38 < (int)param_3; local_38 = local_38 + 1) {
            *(undefined1 *)(param_2 + 3 + (local_10 * param_3 + local_38) * 4) = 0xff;
          }
        }
      }
    }
    else {
      local_40 = 0xffffffff;
      switch(param_5) {
      case 0xe:
        local_40 = 0x80;
        break;
      case 0xf:
      case 0x10:
      case 0x40:
        local_40 = 0;
        break;
      case 0x20:
        local_40 = 0xff;
      }
      for (local_10 = 0; (int)local_10 < (int)param_4; local_10 = local_10 + 1) {
        for (local_38 = 0; (int)local_38 < (int)param_3; local_38 = local_38 + 1) {
          iVar3 = local_10 * param_3 + local_38;
          if (((*(byte *)(param_2 + iVar3 * 4) == local_40) &&
              (*(byte *)(param_2 + 1 + iVar3 * 4) == local_40)) &&
             (*(byte *)(param_2 + 2 + iVar3 * 4) == local_40)) {
            *(undefined1 *)(param_2 + 3 + iVar3 * 4) = 0;
          }
          else {
            *(undefined1 *)(param_2 + 3 + iVar3 * 4) = 0xff;
          }
        }
      }
    }
    local_1c = 0;
    local_2c = 0;
    local_8 = 0;
    local_24 = 0;
    if (param_6 != '\0') {
      FUN_00620650(param_2,param_3,param_4,&local_1c,&local_24,&local_2c,&local_8);
    }
    lVar1 = (ulonglong)(*(int *)(param_1 + 0x314) + 1) * 0x14;
    local_c = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    for (local_10 = 0; (int)local_10 < *(int *)(param_1 + 0x314); local_10 = local_10 + 1) {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x318) + local_10 * 0x14);
      puVar6 = (undefined4 *)(local_10 * 0x14 + (int)local_c);
      *puVar6 = *puVar4;
      puVar6[1] = puVar4[1];
      puVar6[2] = puVar4[2];
      puVar6[3] = puVar4[3];
      puVar6[4] = puVar4[4];
    }
    local_20 = (uint *)(*(int *)(param_1 + 0x314) * 0x14 + (int)local_c);
    *(int *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + 1;
    if (*(int *)(param_1 + 0x318) != 0) {
      operator_delete(*(void **)(param_1 + 0x318));
    }
    *(void **)(param_1 + 0x318) = local_c;
    if (((local_1c == param_3) || (local_24 == param_4)) ||
       ((local_2c == param_3 || (local_8 == param_4)))) {
      *local_20 = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      local_20[4] = 0;
    }
    else {
      if (param_7 == '\0') {
        *local_20 = 0;
        local_20[1] = 0;
      }
      else {
        *local_20 = local_1c;
        local_20[1] = local_24;
      }
      local_20[2] = (param_3 - local_1c) - local_2c;
      local_20[3] = (param_4 - local_24) - local_8;
      lVar1 = (ulonglong)(local_20[2] * local_20[3]) * 4;
      pvVar5 = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      local_20[4] = (uint)pvVar5;
    }
    for (local_10 = 0; (int)local_10 < (int)local_20[3]; local_10 = local_10 + 1) {
      for (local_38 = 0; (int)local_38 < (int)local_20[2]; local_38 = local_38 + 1) {
        *(undefined4 *)(local_20[4] + (local_10 * local_20[2] + local_38) * 4) =
             *(undefined4 *)(param_2 + ((local_10 + local_24) * param_3 + local_38 + local_1c) * 4);
      }
    }
  }
  else {
    FUN_006209d0(local_14,param_3,local_30,param_6,1,1);
  }
  return;
}

