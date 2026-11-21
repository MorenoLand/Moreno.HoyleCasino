// FUN_004dc4d0  004dc4d0

void __thiscall FUN_004dc4d0(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  char local_dc [104];
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  (**(code **)(**(int **)(param_1 + 0x44) + 0x74))();
  if (param_2 < 0x3f0) {
    if (param_2 == 0x3ef) {
      pcVar1 = (char *)FUN_00630f40("SID_POKER_TEXAS");
      sprintf(local_74,pcVar1);
      pcVar1 = (char *)FUN_00630f40("SID_POKER_HOLDEM");
      sprintf(local_dc,pcVar1);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      goto LAB_004dd58e;
    }
    switch(param_2) {
    case 2:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_RAISE");
      sprintf(local_74,pcVar1);
      if (param_3 < 1000000) {
        if (param_3 < 1000) {
          sprintf(local_dc,"$%d",param_3);
        }
        else {
          sprintf(local_dc,"$%d,%.3d",param_3 / 1000,param_3 % 1000);
        }
      }
      else {
        sprintf(local_dc,"$%d,%.3d,%.3d",param_3 / 1000000,(param_3 % 1000000) / 1000,param_3 % 1000
               );
      }
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 3:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_CALL");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 4:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_FOLD");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 5:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_CHECK");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 6:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_BLINDOPEN");
      sprintf(local_74,pcVar1);
      if (param_3 < 1000000) {
        if (param_3 < 1000) {
          sprintf(local_dc,"$%d",param_3);
        }
        else {
          sprintf(local_dc,"$%d,%.3d",param_3 / 1000,param_3 % 1000);
        }
      }
      else {
        sprintf(local_dc,"$%d,%.3d,%.3d",param_3 / 1000000,(param_3 % 1000000) / 1000,param_3 % 1000
               );
      }
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 7:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_BLINDRAISE");
      sprintf(local_74,pcVar1);
      if (param_3 < 1000000) {
        if (param_3 < 1000) {
          sprintf(local_dc,"$%d",param_3);
        }
        else {
          sprintf(local_dc,"$%d,%.3d",param_3 / 1000,param_3 % 1000);
        }
      }
      else {
        sprintf(local_dc,"$%d,%.3d,%.3d",param_3 / 1000000,(param_3 % 1000000) / 1000,param_3 % 1000
               );
      }
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    default:
      goto switchD_004dc551_caseD_8;
    case 9:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_ALLIN");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 10:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_MATCHPOT");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 99:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_THINKING_ELLIPSIS");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 100:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_STANDPAT");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 0x65:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_DRAW1");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 0x66:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_DRAW2");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 0x67:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_DRAW3");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 0x68:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_DRAW4");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 0x69:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_DRAW5");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      break;
    case 200:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_IAMIN");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0xc9:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_SITOUT");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
    }
  }
  else {
    switch(param_2) {
    case 0x3f0:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_OMAHA");
      sprintf(local_74,pcVar1);
      pcVar1 = (char *)FUN_00630f40("SID_POKER_HOLDEM");
      sprintf(local_dc,pcVar1);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3f1:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_OMAHA");
      sprintf(local_74,pcVar1);
      pcVar1 = (char *)FUN_00630f40("SID_POKER_HILO");
      sprintf(local_dc,pcVar1);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3f2:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_7CARDSTUD");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3f3:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_7CARDSTUD");
      sprintf(local_74,pcVar1);
      pcVar1 = (char *)FUN_00630f40("SID_POKER_HILO");
      sprintf(local_dc,pcVar1);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3f4:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_5CARDDRAW");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3f5:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_5CARDDRAW");
      sprintf(local_74,pcVar1);
      pcVar1 = (char *)FUN_00630f40("SID_POKER_LOWBALL");
      sprintf(local_dc,pcVar1);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3f6:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_5CARDDRAW");
      sprintf(local_74,pcVar1);
      pcVar1 = (char *)FUN_00630f40("SID_POKER_JACKS_ELLIPSIS");
      sprintf(local_dc,pcVar1);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3f7:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_5CARDSTUD");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3f8:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_BASEBALL");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3f9:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_HIGH");
      sprintf(local_74,pcVar1);
      pcVar1 = (char *)FUN_00630f40("SID_POKER_CHICAGO");
      sprintf(local_dc,pcVar1);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3fa:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_MURDER");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3fb:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_THEBITCH");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3fc:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_CINCINNATI");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3fd:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_CRISSCROSS");
      sprintf(local_74,pcVar1);
      sprintf(local_dc,(char *)&PTR_006b27f8);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    case 0x3fe:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_PASSTHE");
      sprintf(local_74,pcVar1);
      pcVar1 = (char *)FUN_00630f40("SID_POKER_TRASH");
      sprintf(local_dc,pcVar1);
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      FUN_004da890();
      FUN_004db610();
      break;
    default:
switchD_004dc551_caseD_8:
      pcVar1 = (char *)FUN_00630f40("SID_POKER_OPEN");
      sprintf(local_74,pcVar1);
      if (param_3 < 1000000) {
        if (param_3 < 1000) {
          sprintf(local_dc,"$%d",param_3);
        }
        else {
          sprintf(local_dc,"$%d,%.3d",param_3 / 1000,param_3 % 1000);
        }
      }
      else {
        sprintf(local_dc,"$%d,%.3d,%.3d",param_3 / 1000000,(param_3 % 1000000) / 1000,param_3 % 1000
               );
      }
      FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
    }
  }
LAB_004dd58e:
  (**(code **)(**(int **)(param_1 + 0x3c) + 0xb4))(local_74);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x40) + 0xb4))(local_dc);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x74))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

