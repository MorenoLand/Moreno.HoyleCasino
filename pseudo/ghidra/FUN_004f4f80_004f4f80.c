// FUN_004f4f80  004f4f80

undefined4 __thiscall FUN_004f4f80(char *param_1,short param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0xc2);
  }
  if (param_2 < 0) {
    FUN_005e9f20("shAllInPlayer >= 0","..\\Casino\\PokerPot.cpp",0xc3);
  }
  if (*(short *)(param_1 + 6) <= param_2) {
    FUN_005e9f20("shAllInPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0xc4);
  }
  if (*param_1 != '\0') {
    FUN_005e9f20("!bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0xc5);
  }
  if (param_1[2] != '\0') {
    FUN_005e9f20("!bAnteRoundInProgress","..\\Casino\\PokerPot.cpp",0xc6);
  }
  if (param_1[3] != '\0') {
    FUN_005e9f20("!bShowdownInProgress","..\\Casino\\PokerPot.cpp",199);
  }
  sVar1 = FUN_004f9110();
  if (sVar1 < 2) {
    FUN_005e9f20("ActivePlayersLeft() >= 2","..\\Casino\\PokerPot.cpp",200);
  }
  if (*(char *)(*(int *)(param_1 + 0x34) + (int)param_2) != '\0') {
    FUN_005e9f20("!pbAllIn[shAllInPlayer]","..\\Casino\\PokerPot.cpp",0xc9);
  }
  if (*(char *)(*(int *)(param_1 + 0x30) + (int)param_2) != '\0') {
    FUN_005e9f20("!pbFolded[shAllInPlayer]","..\\Casino\\PokerPot.cpp",0xca);
  }
  *(undefined1 *)((int)param_2 + *(int *)(param_1 + 0x34)) = 1;
  sVar1 = FUN_004f9110();
  if (sVar1 == 1) {
    FUN_004f9220();
    uVar2 = 0xfffd;
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}

