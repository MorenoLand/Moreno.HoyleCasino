// FUN_0047e860  0047e860

void __fastcall FUN_0047e860(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x45c)) {
  case 0:
  case 7:
    uVar1 = FUN_00630f40("SID_POKER_TEXASHOLDEM");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 1:
  case 8:
    uVar1 = FUN_00630f40("SID_POKER_OMAHAHOLDEM");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 2:
  case 9:
    uVar1 = FUN_00630f40("SID_POKER_OMAHAHOLDEMHILO");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 3:
  case 10:
    uVar1 = FUN_00630f40("SID_POKER_7CARDSTUD");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 4:
  case 0xb:
    uVar1 = FUN_00630f40("SID_POKER_7CARDSTUDHILO");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 5:
  case 0xc:
    uVar1 = FUN_00630f40("SID_POKER_5CARDDRAW");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 6:
  case 0xd:
    uVar1 = FUN_00630f40("SID_POKER_5CARDDRAWLOWBALL");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 0xe:
    uVar1 = FUN_00630f40("SID_POKER_5CARDDRAWJACKSORBETTER");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 0xf:
    uVar1 = FUN_00630f40("SID_POKER_5CARDSTUD");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 0x10:
    uVar1 = FUN_00630f40("SID_POKER_BASEBALL");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 0x11:
    uVar1 = FUN_00630f40("SID_POKER_HIGHCHICAGO");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 0x12:
    uVar1 = FUN_00630f40("SID_POKER_MURDER");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 0x13:
    uVar1 = FUN_00630f40("SID_POKER_THEBITCH");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 0x14:
    uVar1 = FUN_00630f40("SID_POKER_CINCINNATI");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 0x15:
    uVar1 = FUN_00630f40("SID_POKER_CRISSCROSS1");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  case 0x16:
    uVar1 = FUN_00630f40("SID_POKER_PASSTHETRASH");
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(uVar1);
    break;
  default:
    (**(code **)(**(int **)(param_1 + 0x498) + 0xb4))(&PTR_006b27f8);
  }
  (**(code **)(**(int **)(param_1 + 0x498) + 0x74))();
  return;
}

