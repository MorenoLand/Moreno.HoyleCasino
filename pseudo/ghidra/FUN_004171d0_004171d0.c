// FUN_004171d0  004171d0

void __thiscall FUN_004171d0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_84 [5];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  if (DAT_0163068c != 0) {
    local_84[0] = FUN_005fb5e0(0x32);
    local_84[1] = 0;
    local_84[2] = FUN_005fb5e0(0x33);
    local_84[3] = 1;
    local_84[4] = FUN_005fb5e0(0x34);
    local_70 = 2;
    local_6c = FUN_005fb5e0(0x35);
    local_68 = 3;
    local_64 = FUN_005fb5e0(0x36);
    local_60 = 4;
    local_5c = FUN_005fb350(0x37);
    local_58 = 5;
    local_54 = FUN_005fb350(0x38);
    local_50 = 6;
    local_4c = FUN_005fb350(0x39);
    local_48 = 7;
    local_44 = FUN_005fb350(0x3a);
    local_40 = 8;
    local_3c = FUN_005fb350(0x3b);
    local_38 = 9;
    local_34 = FUN_005fb350(0x3c);
    local_30 = 10;
    local_2c = FUN_005fb350(0x3d);
    local_28 = 0xb;
    local_24 = FUN_005fb350(0x3e);
    local_20 = 0xc;
    iVar2 = FUN_005fb860(0);
    local_1c = *(undefined4 *)(iVar2 + 0x4c);
    local_18 = 0xd;
    local_10 = 0xe;
    for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
      if ((local_84[local_c * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_84[local_c * 2] + 0x84))(param_2), cVar1 != '\0')) {
        local_8 = local_84[local_c * 2 + 1];
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
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER1");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 1) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER2");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 2) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER3");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 3) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER4");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 4) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER5");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 5) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER6");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 6) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER7");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 7) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER8");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 8) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER9");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 9) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER10");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 10) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER11");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 0xb) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER12");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 0xc) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER13");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
      if (local_8 == 0xd) {
        uVar3 = FUN_00630f40("SID_BLACKJACK_ROLLOVER14");
        (**(code **)(*param_1 + 0xb4))(uVar3);
      }
    }
  }
  return;
}

