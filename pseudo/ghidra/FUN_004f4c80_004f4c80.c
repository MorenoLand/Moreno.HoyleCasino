// FUN_004f4c80  004f4c80

void __fastcall FUN_004f4c80(char *param_1)

{
  short local_8;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x94);
  }
  if (*param_1 != '\0') {
    FUN_005e9f20("!bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x95);
  }
  if (param_1[2] != '\0') {
    FUN_005e9f20("!bAnteRoundInProgress","..\\Casino\\PokerPot.cpp",0x96);
  }
  if (param_1[3] != '\0') {
    FUN_005e9f20("!bShowdownInProgress","..\\Casino\\PokerPot.cpp",0x97);
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    FUN_005e9f20("pshTotalBetsOrRaises","..\\Casino\\PokerPot.cpp",0x9b);
  }
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    *(undefined2 *)(*(int *)(param_1 + 0x5c) + local_8 * 2) = 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_005e9f20("pshTotalCalls","..\\Casino\\PokerPot.cpp",0x9f);
  }
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    *(undefined2 *)(*(int *)(param_1 + 0x60) + local_8 * 2) = 0;
  }
  if (*(int *)(param_1 + 100) == 0) {
    FUN_005e9f20("pshTotalChecks","..\\Casino\\PokerPot.cpp",0xa3);
  }
  for (local_8 = 0; local_8 < *(short *)(param_1 + 6); local_8 = local_8 + 1) {
    *(undefined2 *)(*(int *)(param_1 + 100) + local_8 * 2) = 0;
  }
  return;
}

