// FUN_005ebac0  005ebac0

int * __thiscall FUN_005ebac0(int param_1,int *param_2)

{
  int local_40;
  undefined1 local_3c [3];
  char local_39;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_25;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  memset(&local_38,0,0x10);
  local_18 = FUN_005f5550();
  local_24 = FUN_005f5590();
  if (((*(int *)(param_1 + 0x174) == 0) || (local_18 == 0)) || (local_24 == 0)) {
    *param_2 = local_38;
    param_2[1] = local_34;
    param_2[2] = local_30;
    param_2[3] = local_2c;
    return param_2;
  }
  local_40 = 0;
  local_1c = local_18;
  local_8 = local_24;
  for (local_c = 0; local_10 = local_c, local_c < local_24 / 2; local_c = local_c + 1) {
    local_14 = local_40;
    while( true ) {
      if (local_1c <= local_14) goto LAB_005ebbe4;
      FUN_00616b30(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),local_14,
                   local_10,local_3c,&local_25);
      if (local_39 != -1) break;
      local_14 = local_14 + 1;
    }
    local_40 = local_40 + 1;
    local_1c = local_1c + -1;
  }
LAB_005ebbe4:
  if (local_24 / 2 <= local_10) {
    if (local_24 / 2 <= local_10) {
      FUN_005e9f20("y < iHeight / 2","..\\scilib\\sciview.cpp",0x1ca);
    }
    *param_2 = local_38;
    param_2[1] = local_34;
    param_2[2] = local_30;
    param_2[3] = local_2c;
    return param_2;
  }
  for (; local_10 = local_8 + -1, local_24 / 2 <= local_10; local_8 = local_8 + -1) {
    local_14 = local_40;
    while( true ) {
      if (local_1c <= local_14) goto LAB_005ebce7;
      FUN_00616b30(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),local_14,
                   local_10,local_3c,&local_25);
      if (local_39 != -1) break;
      local_14 = local_14 + 1;
    }
    if (local_40 <= local_24 - local_10) {
      local_40 = local_40 + 1;
      local_1c = local_1c + -1;
    }
  }
LAB_005ebce7:
  if (local_10 < local_24 / 2) {
    if (local_10 < local_24 / 2) {
      FUN_005e9f20("y >= iHeight / 2","..\\scilib\\sciview.cpp",0x1e1);
    }
    *param_2 = local_38;
    param_2[1] = local_34;
    param_2[2] = local_30;
    param_2[3] = local_2c;
    return param_2;
  }
  if (local_1c <= local_40) {
    *param_2 = local_38;
    param_2[1] = local_34;
    param_2[2] = local_30;
    param_2[3] = local_2c;
    return param_2;
  }
  local_20 = local_40;
LAB_005ebd6a:
  do {
    for (local_10 = local_c; local_10 < local_8; local_10 = local_10 + 1) {
      FUN_00616b30(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),local_40,
                   local_10,local_3c,&local_25);
      if (local_39 != -1) {
        local_40 = local_40 + 1;
        goto LAB_005ebd6a;
      }
    }
    if ((local_40 < local_18 / 2) || (local_8 <= local_c)) {
      if (local_18 / 2 <= local_40) {
        if (local_18 / 2 <= local_40) {
          FUN_005e9f20("iLeft < iWidth / 2","..\\scilib\\sciview.cpp",0x1fc);
        }
        *param_2 = local_38;
        param_2[1] = local_34;
        param_2[2] = local_30;
        param_2[3] = local_2c;
        return param_2;
      }
      local_20 = local_1c;
LAB_005ebe59:
      do {
        for (local_10 = local_c; local_10 < local_8; local_10 = local_10 + 1) {
          FUN_00616b30(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),local_1c,
                       local_10,local_3c,&local_25);
          if (local_39 != -1) {
            local_1c = local_1c + -1;
            goto LAB_005ebe59;
          }
        }
        if ((local_18 / 2 <= local_1c) || (local_8 <= local_c)) {
          if (local_1c < local_18 / 2) {
            if (local_1c < local_18 / 2) {
              FUN_005e9f20("iRight >= iWidth / 2","..\\scilib\\sciview.cpp",0x213);
            }
            *param_2 = local_38;
            param_2[1] = local_34;
            param_2[2] = local_30;
            param_2[3] = local_2c;
            return param_2;
          }
          *param_2 = local_40;
          param_2[1] = local_c;
          param_2[2] = local_1c;
          param_2[3] = local_8;
          return param_2;
        }
        local_c = local_c + 1;
        local_8 = local_8 + -1;
        local_1c = local_20;
      } while( true );
    }
    local_c = local_c + 1;
    local_8 = local_8 + -1;
    local_40 = local_20;
  } while( true );
}

