// FUN_005c9140  005c9140

void __fastcall FUN_005c9140(int *param_1)

{
  undefined4 uVar1;
  int local_80;
  int local_54;
  int local_50;
  int local_4c [7];
  int local_30;
  undefined4 local_2c [7];
  int local_10;
  int local_c;
  int local_8;
  
  if ((char)param_1[5] != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
    local_c = 0;
    memset(param_1 + 0x15,0,0x8c);
    *(undefined1 *)(param_1 + 0x39) = 0;
    local_8 = *(int *)(param_1[4] + 0x10);
    for (local_10 = 0; local_10 < *(int *)(param_1[4] + 8); local_10 = local_10 + 1) {
      *(undefined1 *)((int)param_1 + local_10 + 0x34) = 0;
      if (local_10 + 1 <= param_1[3]) {
        for (local_50 = 0; local_50 < *(int *)param_1[4]; local_50 = local_50 + 1) {
          if (param_1[local_50 + 6] < 0) {
            local_80 = -param_1[local_50 + 6];
          }
          else {
            local_80 = param_1[local_50 + 6];
          }
          uVar1 = FUN_005be340(local_50,local_80 +
                                        *(int *)(local_10 * 0x1c + local_8 + local_50 * 4));
          local_2c[local_50] = uVar1;
        }
        memset(local_4c,0,0x1c);
        local_30 = (**(code **)(*param_1 + 8))(local_2c,local_4c);
        if (local_30 != 0) {
          *(undefined1 *)((int)param_1 + local_10 + 0x34) = 1;
          for (local_54 = 0; local_54 < *(int *)param_1[4]; local_54 = local_54 + 1) {
            if ((local_4c[local_54] != 0) &&
               (param_1[local_54 * 5 + *(int *)(local_10 * 0x1c + local_8 + local_54 * 4) + 0x17] ==
                0)) {
              param_1[local_54 * 5 + *(int *)(local_10 * 0x1c + local_8 + local_54 * 4) + 0x17] =
                   local_10 + 1;
            }
          }
          local_c = local_c + local_30;
        }
      }
    }
    param_1[0x38] = local_c;
    if (param_1[0x38] < 0) {
      param_1[0x38] = 0;
    }
    FUN_005d0a20(param_1[1] + local_c);
    FUN_005c9140();
    if (param_1[1] < 0) {
      FUN_005e9f20("0 && \"creditsInMachine < 0\"","..\\Casino\\MLVSlotState.cpp",0x296);
      FUN_005d0a20(0);
    }
  }
  return;
}

