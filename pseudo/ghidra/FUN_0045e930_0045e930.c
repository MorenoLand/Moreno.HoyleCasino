// FUN_0045e930  0045e930

void __thiscall FUN_0045e930(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  if (DAT_0163068c != 0) {
    local_38[0] = FUN_005fb350(0x32);
    local_38[1] = 0;
    local_38[2] = FUN_005fb350(0x33);
    local_38[3] = 1;
    local_38[4] = FUN_005fb350(0x34);
    local_24 = 2;
    local_20 = FUN_005fb350(0x35);
    local_1c = 3;
    local_18 = FUN_005fb350(0x36);
    local_14 = 4;
    local_10 = 5;
    for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
      if ((local_38[local_c * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_38[local_c * 2] + 0x84))(param_2), cVar1 != '\0')) {
        local_8 = local_38[local_c * 2 + 1];
        break;
      }
    }
    if (local_8 == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
      }
    }
    else {
      if (local_8 == 0) {
        uVar2 = FUN_00630f40("SID_PAIGOWPOKER_ROLLOVER1");
        (**(code **)(*param_1 + 0xb4))(uVar2);
      }
      if (local_8 == 1) {
        uVar2 = FUN_00630f40("SID_PAIGOWPOKER_ROLLOVER2");
        (**(code **)(*param_1 + 0xb4))(uVar2);
      }
      if (local_8 == 2) {
        uVar2 = FUN_00630f40("SID_PAIGOWPOKER_ROLLOVER3");
        (**(code **)(*param_1 + 0xb4))(uVar2);
      }
      if (local_8 == 3) {
        uVar2 = FUN_00630f40("SID_PAIGOWPOKER_ROLLOVER4");
        (**(code **)(*param_1 + 0xb4))(uVar2);
      }
      if (local_8 == 4) {
        uVar2 = FUN_00630f40("SID_PAIGOWPOKER_ROLLOVER5");
        (**(code **)(*param_1 + 0xb4))(uVar2);
      }
    }
  }
  return;
}

