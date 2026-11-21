// FUN_005b1f80  005b1f80

void __thiscall FUN_005b1f80(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_80;
  int local_7c [5];
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
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (DAT_0163068c != 0) {
    local_7c[0] = FUN_005fb5e0(0x32);
    local_7c[1] = 0;
    local_7c[2] = FUN_005fb5e0(0x33);
    local_7c[3] = 1;
    local_7c[4] = FUN_005fb5e0(0x34);
    local_68 = 2;
    local_64 = FUN_005fb5e0(0x35);
    local_60 = 3;
    local_5c = FUN_005fb5e0(0x36);
    local_58 = 4;
    local_54 = FUN_005fb350(0x37);
    local_50 = 5;
    local_4c = FUN_005fb350(0x38);
    local_48 = 6;
    local_44 = FUN_005fb350(0x39);
    local_40 = 7;
    local_3c = FUN_005fb350(0x3a);
    local_38 = 8;
    local_34 = FUN_005fb350(0x3b);
    local_30 = 9;
    local_2c = FUN_005fb350(0x3c);
    local_28 = 10;
    local_24 = FUN_005fb350(0x3d);
    local_20 = 0xb;
    local_1c = FUN_005fb350(0x3e);
    local_18 = 0xc;
    iVar2 = FUN_005fb860(0);
    local_14 = *(undefined4 *)(iVar2 + 0x4c);
    local_10 = 0xd;
    local_c = 0xe;
    local_8 = -1;
    for (local_80 = 0; local_80 < local_c; local_80 = local_80 + 1) {
      if ((local_7c[local_80 * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_7c[local_80 * 2] + 0x84))(param_2), cVar1 != '\0')) {
        local_8 = local_7c[local_80 * 2 + 1];
        break;
      }
    }
    if (local_8 == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
      }
    }
    else {
      switch(local_8) {
      case 0:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER1");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 1:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER2");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 2:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER3");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 3:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER4");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 4:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER5");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 5:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER6");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 6:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER7");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 7:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER8");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 8:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER9");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 9:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER10");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 10:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER11");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 0xb:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER12");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 0xc:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER13");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      case 0xd:
        uVar3 = FUN_00630f40("SID_ROYALMATCH_ROLLOVER14");
        (**(code **)(*param_1 + 0xb4))(uVar3);
        break;
      default:
        FUN_005e9f20("false","..\\Casino\\royalmatchroom.cpp",0x34f);
      }
    }
  }
  return;
}

