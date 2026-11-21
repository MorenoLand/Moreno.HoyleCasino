// FUN_004f53c0  004f53c0

short __thiscall FUN_004f53c0(int param_1,int param_2)

{
  short sVar1;
  
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_005e9f20("bAnteRoundInProgress","..\\Casino\\PokerPot.cpp",0x10c);
  }
  if (*(char *)(*(int *)(param_1 + 0x38) + (int)*(short *)(param_1 + 8)) != '\0') {
    FUN_005e9f20("!pbActedThisRound[shCurrentPlayer]","..\\Casino\\PokerPot.cpp",0x10d);
  }
  if (param_2 < 0) {
    FUN_005e9f20("lPartialAnteChips >= 0","..\\Casino\\PokerPot.cpp",0x10e);
  }
  if (*(int *)(param_1 + 0x18) < param_2) {
    FUN_005e9f20("lPartialAnteChips <= lAnteChips","..\\Casino\\PokerPot.cpp",0x10f);
  }
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) =
       *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) + param_2;
  *(undefined1 *)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0x38)) = 1;
  *(undefined1 *)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0x34)) = 1;
  sVar1 = FUN_004f9050();
  if (sVar1 < 0) {
    FUN_005e9f20("shReturn >= 0","..\\Casino\\PokerPot.cpp",0x11a);
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

