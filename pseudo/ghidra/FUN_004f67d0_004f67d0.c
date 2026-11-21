// FUN_004f67d0  004f67d0

int __fastcall FUN_004f67d0(char *param_1)

{
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x2a1);
  }
  if (*param_1 == '\0') {
    FUN_005e9f20("bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x2a2);
  }
  return *(int *)(param_1 + 0x14) - *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4)
  ;
}

