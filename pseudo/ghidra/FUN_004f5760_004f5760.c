// FUN_004f5760  004f5760

short __fastcall FUN_004f5760(char *param_1)

{
  char cVar1;
  short sVar2;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x14f);
  }
  if (*param_1 == '\0') {
    FUN_005e9f20("bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x150);
  }
  sVar2 = FUN_004f9110();
  if (sVar2 < 2) {
    FUN_005e9f20("ActivePlayersLeft() >= 2","..\\Casino\\PokerPot.cpp",0x151);
  }
  cVar1 = FUN_004f6640();
  if (cVar1 == '\0') {
    FUN_005e9f20("IsCheckOrBetPossible()","..\\Casino\\PokerPot.cpp",0x152);
  }
  *(undefined1 *)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0x38)) = 1;
  *(short *)(*(int *)(param_1 + 0x58) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 0x58) + *(short *)(param_1 + 8) * 2) + 1;
  *(short *)(*(int *)(param_1 + 100) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 100) + *(short *)(param_1 + 8) * 2) + 1;
  sVar2 = FUN_004f8f20();
  if (sVar2 < 0) {
    FUN_005e9f20("shReturn >= 0","..\\Casino\\PokerPot.cpp",0x158);
  }
  if ((*(char *)(*(int *)(param_1 + 0x38) + (int)sVar2) != '\0') &&
     (*(int *)(*(int *)(param_1 + 0x68) + sVar2 * 4) == *(int *)(param_1 + 0x14))) {
    *param_1 = '\0';
    sVar2 = -1;
  }
  return sVar2;
}

