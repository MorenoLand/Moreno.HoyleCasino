// FUN_00597080  00597080

void __thiscall FUN_00597080(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c [6];
  
  if (DAT_0163068c != 0) {
    local_1c[0] = FUN_005fb350(0x32);
    local_1c[1] = 0;
    local_1c[2] = FUN_005fb350(0x33);
    local_1c[3] = 1;
    local_1c[4] = 2;
    local_1c[5] = -1;
    for (local_20 = 0; local_20 < local_1c[4]; local_20 = local_20 + 1) {
      if ((local_1c[local_20 * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_1c[local_20 * 2] + 0x84))(param_2), cVar1 != '\0')) {
        local_1c[5] = local_1c[local_20 * 2 + 1];
        break;
      }
    }
    if (local_1c[5] == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
      }
    }
    else if (local_1c[5] == 0) {
      uVar2 = FUN_00630f40("SID_CASINO_HELP_DEALERVOICE");
      (**(code **)(*param_1 + 0xb4))(uVar2);
    }
    else if (local_1c[5] == 1) {
      uVar2 = FUN_00630f40("SID_CASINO_HELP_CONTINUEBUTTON");
      (**(code **)(*param_1 + 0xb4))(uVar2);
    }
  }
  return;
}

