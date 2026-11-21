// FUN_0047d810  0047d810

void __thiscall FUN_0047d810(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x458) = param_2;
  switch(*(undefined4 *)(param_1 + 0x458)) {
  case 0:
    uVar5 = 3;
    uVar4 = 0;
    uVar3 = 0x1f;
    uVar2 = FUN_00630f40("SID_POKER_TEXASHOLDEM",0x1f,0,3);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(&PTR_006b27f8);
    break;
  case 1:
    uVar5 = 3;
    uVar4 = 0;
    uVar3 = 0x1f;
    uVar2 = FUN_00630f40("SID_POKER_OMAHAHOLDEM",0x1f,0,3);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(&PTR_006b27f8);
    break;
  case 2:
    uVar5 = 3;
    uVar4 = 0;
    uVar3 = 0x1f;
    uVar2 = FUN_00630f40("SID_POKER_OMAHAHOLDEMHILO",0x1f,0,3);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(&PTR_006b27f8);
    break;
  case 3:
    uVar5 = 3;
    uVar4 = 0;
    uVar3 = 0x1f;
    uVar2 = FUN_00630f40("SID_POKER_7CARDSTUD",0x1f,0,3);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(&PTR_006b27f8);
    break;
  case 4:
    uVar5 = 3;
    uVar4 = 0;
    uVar3 = 0x1f;
    uVar2 = FUN_00630f40("SID_POKER_7CARDSTUDHILO",0x1f,0,3);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(&PTR_006b27f8);
    break;
  case 5:
    uVar5 = 3;
    uVar4 = 0;
    uVar3 = 0x1f;
    uVar2 = FUN_00630f40("SID_POKER_5CARDDRAW",0x1f,0,3);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(&PTR_006b27f8);
    break;
  case 6:
    uVar5 = 3;
    uVar4 = 0;
    uVar3 = 0x1f;
    uVar2 = FUN_00630f40("SID_POKER_5CARDDRAWLOWBALL",0x1f,0,3);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(&PTR_006b27f8);
    break;
  case 7:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_TEXASHOLDEM",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 8:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_OMAHAHOLDEM",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 9:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_OMAHAHOLDEMHILO",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 10:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_7CARDSTUD",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0xb:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_7CARDSTUDHILO",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0xc:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_5CARDDRAW",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0xd:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_5CARDDRAWLOWBALL",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0xe:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_5CARDDRAWJACKS",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0xf:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_5CARDSTUD",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0x10:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_BASEBALL",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0x11:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_HIGHCHICAGO",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0x12:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_MURDER",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0x13:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_THEBITCH",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0x14:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_CINCINNATI",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0x15:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_CRISSCROSS",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0x16:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_PASSTHETRASH",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0x17:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_DEALERSCHOICE",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = FUN_00630f40("SID_POKER_FRIDAYNIGHT");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(uVar2);
    break;
  case 0xffffffff:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x20;
    uVar2 = FUN_00630f40("SID_POKER_5CARDDRAW",0x20,0,0);
    FUN_005f73e0(uVar2,uVar3,uVar4,uVar5);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x1e4) + 0xb4))(&PTR_006b27f8);
    break;
  default:
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerGame.cpp",0x698);
  }
  iVar1 = *(int *)(param_1 + 0x458);
  if (iVar1 == -1) {
    FUN_0047d6d0(0xffffffff);
    FUN_0047e1b0(0xffffffff);
    FUN_0047e2a0(0);
    FUN_0047e260(0xffffffff);
    FUN_0047d710(0);
    FUN_0047d790(0);
    FUN_0047d7d0(0);
  }
  else if ((iVar1 < 0) || (6 < iVar1)) {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerGame.cpp",0x6c0);
  }
  else {
    FUN_0047ce80(*(undefined4 *)(param_1 + 0x458));
  }
  uVar2 = FUN_0047caf0();
  FUN_0047be00(uVar2);
  return;
}

