// FUN_004f6540  004f6540

uint __fastcall FUN_004f6540(char *param_1)

{
  short sVar1;
  undefined2 extraout_var;
  ushort local_8;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x24f);
  }
  sVar1 = FUN_004f91a0();
  if (sVar1 != 1) {
    FUN_005e9f20("TotalPlayersLeft() == 1","..\\Casino\\PokerPot.cpp",0x250);
  }
  if (*param_1 != '\0') {
    FUN_005e9f20("!bBettingRoundInProgress","..\\Casino\\PokerPot.cpp",0x251);
  }
  if (param_1[2] != '\0') {
    FUN_005e9f20("!bAnteRoundInProgress","..\\Casino\\PokerPot.cpp",0x252);
  }
  local_8 = 0;
  while( true ) {
    if (*(short *)(param_1 + 6) <= (short)local_8) {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPot.cpp",0x25a);
      return CONCAT22(extraout_var,0xffff);
    }
    if (*(char *)(*(int *)(param_1 + 0x30) + (int)(short)local_8) == '\0') break;
    local_8 = local_8 + 1;
  }
  return (uint)local_8;
}

