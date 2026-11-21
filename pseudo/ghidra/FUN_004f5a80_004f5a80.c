// FUN_004f5a80  004f5a80

short __thiscall FUN_004f5a80(char *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x180);
  }
  if (*param_1 == '\0') {
    FUN_005e9f20("bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x181);
  }
  sVar2 = FUN_004f9110();
  if (sVar2 < 2) {
    FUN_005e9f20("ActivePlayersLeft() >= 2","..\\Casino\\PokerPot.cpp",0x182);
  }
  if (param_2 < 1) {
    FUN_005e9f20("lBetChips > 0","..\\Casino\\PokerPot.cpp",0x183);
  }
  cVar1 = FUN_004f6640();
  if (cVar1 == '\0') {
    FUN_005e9f20("IsCheckOrBetPossible()","..\\Casino\\PokerPot.cpp",0x184);
  }
  *(undefined2 *)(*(int *)(param_1 + 0x4c) + *(short *)(param_1 + 8) * 2) =
       *(undefined2 *)(param_1 + 0x2c);
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + 1;
  *(short *)(*(int *)(param_1 + 0x5c) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 0x5c) + *(short *)(param_1 + 8) * 2) + 1;
  *(short *)(*(int *)(param_1 + 0x50) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 0x50) + *(short *)(param_1 + 8) * 2) + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) =
       *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) + param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
  *(undefined1 *)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0x34)) = 1;
  sVar2 = FUN_004f8f20();
  if (sVar2 < 0) {
    FUN_005e9f20("shReturn >= 0","..\\Casino\\PokerPot.cpp",0x191);
  }
  return sVar2;
}

