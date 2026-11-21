// FUN_0053fa80  0053fa80

void __thiscall FUN_0053fa80(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_20 [7];
  
  local_20[6] = -1;
  if (DAT_0163068c != 0) {
    local_20[0] = FUN_005fb350(0x32);
    local_20[1] = 0;
    local_20[2] = FUN_005fb350(0x33);
    local_20[3] = 1;
    local_20[4] = 2;
    for (local_20[5] = 0; local_20[5] < local_20[4]; local_20[5] = local_20[5] + 1) {
      if ((local_20[local_20[5] * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_20[local_20[5] * 2] + 0x84))(param_2), cVar1 != '\0'))
      {
        local_20[6] = local_20[local_20[5] * 2 + 1];
        break;
      }
    }
    if (local_20[6] == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
      }
    }
    else {
      if (local_20[6] == 0) {
        uVar2 = FUN_00630f40("SID_CASINO_HELP_DEALERVOICE");
        (**(code **)(*param_1 + 0xb4))(uVar2);
      }
      if (local_20[6] == 1) {
        uVar2 = FUN_00630f40("SID_CASINO_HELP_CONTINUEBUTTON");
        (**(code **)(*param_1 + 0xb4))(uVar2);
      }
    }
  }
  return;
}

