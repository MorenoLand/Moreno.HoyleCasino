// FUN_00622150  00622150

void FUN_00622150(int param_1,int param_2,byte *param_3,undefined1 *param_4,byte *param_5,
                 int param_6,int param_7)

{
  byte *local_3c;
  int local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_1c;
  int local_18;
  byte *local_14;
  int local_10;
  
  local_38 = 0;
  local_2c = 0xffffffff;
  local_28 = 0xffffffff;
  local_34 = 0xffffffff;
  local_3c = param_3;
  local_1c = param_4;
  local_14 = param_5;
  local_24 = 0;
  do {
    if (param_7 <= local_24) {
      return;
    }
    for (local_10 = 0; local_10 < param_6; local_10 = local_10 + 1) {
      if (local_3c[3] == 0) {
        *local_1c = 0;
        *local_14 = 0;
      }
      else if (((local_2c == *local_3c) && (local_28 == local_3c[1])) && (local_34 == local_3c[2]))
      {
        *local_1c = (undefined1)local_38;
        *local_14 = local_3c[3];
      }
      else {
        for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
          if (((*(byte *)(param_1 + local_18 * 3) == *local_3c) &&
              (*(byte *)(param_1 + 1 + local_18 * 3) == local_3c[1])) &&
             (*(byte *)(param_1 + 2 + local_18 * 3) == local_3c[2])) {
            local_2c = (uint)*local_3c;
            local_28 = (uint)local_3c[1];
            local_34 = (uint)local_3c[2];
            local_38 = local_18;
            goto LAB_006222fa;
          }
        }
        FUN_005e9f20("false","..\\scilib\\platform\\tex.cpp",0x56e);
LAB_006222fa:
        *local_1c = (undefined1)local_38;
        *local_14 = local_3c[3];
      }
      local_3c = local_3c + 4;
      local_1c = local_1c + 1;
      local_14 = local_14 + 1;
    }
    local_24 = local_24 + 1;
  } while( true );
}

