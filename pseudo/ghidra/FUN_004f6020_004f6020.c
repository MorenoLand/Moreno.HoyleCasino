// FUN_004f6020  004f6020

short __thiscall FUN_004f6020(char *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x1e8);
  }
  if (*param_1 == '\0') {
    FUN_005e9f20("bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x1e9);
  }
  sVar2 = FUN_004f9110();
  if (sVar2 < 2) {
    FUN_005e9f20("ActivePlayersLeft() >= 2","..\\Casino\\PokerPot.cpp",0x1ea);
  }
  if (param_2 < 1) {
    FUN_005e9f20("lRaiseChips > 0","..\\Casino\\PokerPot.cpp",0x1eb);
  }
  cVar1 = FUN_004f66e0();
  if (cVar1 == '\0') {
    FUN_005e9f20("IsRaisePossible()","..\\Casino\\PokerPot.cpp",0x1ec);
  }
  *(undefined2 *)(*(int *)(param_1 + 0x4c) + *(short *)(param_1 + 8) * 2) =
       *(undefined2 *)(param_1 + 0x2c);
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + 1;
  *(short *)(*(int *)(param_1 + 0x5c) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 0x5c) + *(short *)(param_1 + 8) * 2) + 1;
  *(short *)(*(int *)(param_1 + 0x50) + *(short *)(param_1 + 8) * 2) =
       *(short *)(*(int *)(param_1 + 0x50) + *(short *)(param_1 + 8) * 2) + 1;
  *(short *)(param_1 + 0x88) = *(short *)(param_1 + 0x88) + -1;
  iVar3 = FUN_004f67d0();
  *(int *)(param_1 + 0xc) = iVar3 + param_2 + *(int *)(param_1 + 0xc);
  sVar2 = *(short *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x68);
  iVar4 = FUN_004f67d0();
  *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4) =
       iVar4 + param_2 + *(int *)(iVar3 + sVar2 * 4);
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 8) * 4);
  *(undefined1 *)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0x38)) = 1;
  sVar2 = FUN_004f8f20();
  if (sVar2 < 0) {
    FUN_005e9f20("shReturn >= 0","..\\Casino\\PokerPot.cpp",0x1fa);
  }
  return sVar2;
}

