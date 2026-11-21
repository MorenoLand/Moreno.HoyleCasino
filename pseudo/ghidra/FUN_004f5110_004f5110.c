// FUN_004f5110  004f5110

void __thiscall FUN_004f5110(char *param_1,undefined4 param_2,short param_3)

{
  short sVar1;
  short local_8;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0xdc);
  }
  sVar1 = FUN_004f9110();
  if (sVar1 < 2) {
    FUN_005e9f20("ActivePlayersLeft() >= 2","..\\Casino\\PokerPot.cpp",0xdd);
  }
  if (*param_1 != '\0') {
    FUN_005e9f20("!bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0xde);
  }
  if (param_1[2] != '\0') {
    FUN_005e9f20("!bAnteRoundInProgress","..\\Casino\\PokerPot.cpp",0xdf);
  }
  if (param_1[3] != '\0') {
    FUN_005e9f20("!bShowdownInProgress","..\\Casino\\PokerPot.cpp",0xe0);
  }
  if (param_3 < 0) {
    FUN_005e9f20("shInitialPlayer >= 0","..\\Casino\\PokerPot.cpp",0xe1);
  }
  if (*(short *)(param_1 + 6) <= param_3) {
    FUN_005e9f20("shInitialPlayer < shTotalPlayers","..\\Casino\\PokerPot.cpp",0xe2);
  }
  if ((*(char *)(*(int *)(param_1 + 0x34) + (int)param_3) != '\0') ||
     (*(char *)(*(int *)(param_1 + 0x30) + (int)param_3) != '\0')) {
    FUN_005e9f20("!pbAllIn[shInitialPlayer] && !pbFolded[shInitialPlayer]",
                 "..\\Casino\\PokerPot.cpp",0xe3);
  }
  param_1[2] = '\x01';
  *(short *)(param_1 + 8) = param_3;
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    *(undefined1 *)((int)local_8 + *(int *)(param_1 + 0x38)) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

