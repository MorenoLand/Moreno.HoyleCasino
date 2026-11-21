// FUN_005efa20  005efa20

void __thiscall FUN_005efa20(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint local_48;
  uint local_44;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  local_8 = 0;
  if ((*(int *)(param_1 + 0x5c) != 0) && (**(char **)(param_1 + 0x5c) != '\0')) {
    FUN_005eedc0(*(undefined4 *)(param_1 + 0x5c),local_1c,&local_28);
    if ((*(uint *)(param_1 + 0x70) & 4) != 0) {
      local_c = 0;
    }
    if ((*(uint *)(param_1 + 0x70) & 8) != 0) {
      local_c = *(int *)(param_1 + 0x6c) - local_28;
    }
    if ((*(uint *)(param_1 + 0x70) & 0x10) != 0) {
      local_c = (*(int *)(param_1 + 0x6c) - local_28) / 2;
    }
    local_c = local_c + *(int *)(param_1 + 0x78);
    local_10 = 0;
    while (*(char *)(*(int *)(param_1 + 0x5c) + local_10) != '\0') {
      FUN_005eebf0(local_10,&local_30,&local_2c,&local_14,0);
      FUN_005eebf0(local_2c,&local_18,local_20,&local_8,0);
      if (*(char *)(*(int *)(param_1 + 0x5c) + local_30) == '\0') {
        return;
      }
      if ((*(char *)(*(int *)(param_1 + 0x5c) + local_18) == '\0') ||
         ((local_c <= param_3 && (param_3 < *(short *)(param_1 + 0x96) + local_c)))) {
        if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
          local_34 = 0;
        }
        if ((*(uint *)(param_1 + 0x70) & 2) != 0) {
          local_34 = *(int *)(param_1 + 0x68) - local_14;
        }
        if ((*(uint *)(param_1 + 0x70) & 0x20) != 0) {
          local_34 = (*(int *)(param_1 + 0x68) - local_14) / 2;
        }
        local_34 = local_34 + *(int *)(param_1 + 0x74);
        for (local_3c = local_30; local_3c < local_2c; local_3c = local_3c + 1) {
          if (local_3c < local_2c + -1) {
            local_44 = (uint)*(byte *)(*(int *)(param_1 + 0x5c) + 1 + local_3c);
          }
          else {
            local_44 = 0xffffffff;
          }
          local_24 = FUN_005ee950(*(undefined1 *)(*(int *)(param_1 + 0x5c) + local_3c),local_44);
          local_24 = local_24 + local_34;
          if (param_2 <= local_24) {
            if (param_2 < (local_34 + local_24) / 2) {
              *(int *)(param_1 + 0xa0) = local_3c;
              return;
            }
            *(int *)(param_1 + 0xa0) = local_3c + 1;
            return;
          }
          if ((*(char *)(*(int *)(param_1 + 0x5c) + 1 + local_3c) == '\0') && (local_24 < param_2))
          {
            *(int *)(param_1 + 0xa0) = local_3c + 1;
            return;
          }
          if (local_3c < local_2c + -1) {
            local_48 = (uint)*(byte *)(*(int *)(param_1 + 0x5c) + 1 + local_3c);
          }
          else {
            local_48 = 0xffffffff;
          }
          iVar1 = FUN_005ee950(*(undefined1 *)(*(int *)(param_1 + 0x5c) + local_3c),local_48);
          local_34 = iVar1 + *(short *)(param_1 + 0x94) + *(int *)(param_1 + 0xa8) + local_34;
        }
        local_c = *(short *)(param_1 + 0x96) + local_c;
      }
      else {
        local_c = *(short *)(param_1 + 0x96) + local_c;
      }
      local_10 = local_2c;
    }
  }
  return;
}

