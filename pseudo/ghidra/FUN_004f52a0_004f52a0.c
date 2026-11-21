// FUN_004f52a0  004f52a0

short __fastcall FUN_004f52a0(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_005e9f20("bAnteRoundInProgress","..\\Casino\\PokerPot.cpp",0xf0);
  }
  if (*(char *)(*(int *)(param_1 + 0x38) + (int)*(short *)(param_1 + 8)) != '\0') {
    FUN_005e9f20("!pbActedThisRound[shCurrentPlayer]","..\\Casino\\PokerPot.cpp",0xf1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18);
  *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) =
       *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) + *(int *)(param_1 + 0x18);
  *(undefined1 *)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0x38)) = 1;
  sVar1 = FUN_004f9050();
  if (sVar1 < 0) {
    FUN_005e9f20("shReturn >= 0","..\\Casino\\PokerPot.cpp",0xf8);
  }
  if (*(char *)(*(int *)(param_1 + 0x38) + (int)sVar1) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    sVar1 = FUN_004f9110();
    if (sVar1 < 2) {
      FUN_004f9220();
      sVar1 = -3;
    }
    else {
      sVar1 = -1;
    }
  }
  return sVar1;
}

