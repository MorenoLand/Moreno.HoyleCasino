// FUN_005a1220  005a1220

void __thiscall FUN_005a1220(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_28;
  int local_24 [5];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (DAT_0163068c != 0) {
    local_24[0] = FUN_005fb350(0x32);
    local_24[1] = 0;
    local_24[2] = FUN_005fb350(0x33);
    local_24[3] = 1;
    local_24[4] = FUN_005fb350(0x34);
    local_10 = 2;
    local_c = 3;
    local_8 = -1;
    for (local_28 = 0; local_28 < local_c; local_28 = local_28 + 1) {
      if ((local_24[local_28 * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_24[local_28 * 2] + 0x84))(param_2), cVar1 != '\0')) {
        local_8 = local_24[local_28 * 2 + 1];
        break;
      }
    }
    if (local_8 == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
      }
    }
    else if (local_8 == 0) {
      uVar2 = FUN_00630f40("SID_CASINO_HELP_DEALERVOICE");
      (**(code **)(*param_1 + 0xb4))(uVar2);
    }
    else if (local_8 == 1) {
      uVar2 = FUN_00630f40("SID_CASINO_HELP_CONTINUEBUTTON");
      (**(code **)(*param_1 + 0xb4))(uVar2);
    }
    else if (local_8 == 2) {
      uVar2 = FUN_00630f40("SID_BIGRAISE_HELP_REQUIRE_ANTE");
      (**(code **)(*param_1 + 0xb4))(uVar2);
    }
  }
  return;
}

