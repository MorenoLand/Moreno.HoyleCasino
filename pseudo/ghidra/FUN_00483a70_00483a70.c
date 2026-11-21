// FUN_00483a70  00483a70

void FUN_00483a70(short param_1,short *param_2,int *param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  short local_10;
  int local_8;
  
  if (param_1 < 0) {
    FUN_005e9f20("shSeat >= 0","..\\Casino\\PokerGame.cpp",0x1044);
  }
  iVar3 = FUN_0047f950();
  if (iVar3 <= param_1) {
    FUN_005e9f20("shSeat < pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerGame.cpp",
                 0x1045);
  }
  cVar2 = FUN_005da7b0();
  if (cVar2 == '\0') {
    FUN_005e9f20("roomPoker->InATournament()","..\\Casino\\PokerGame.cpp",0x1046);
  }
  FUN_0047e390((int)param_1);
  iVar3 = FUN_004c6a70();
  local_8 = 0;
  *param_2 = 1;
  for (local_10 = 0; iVar4 = FUN_0047f950(), local_10 < iVar4; local_10 = local_10 + 1) {
    if (local_10 != param_1) {
      FUN_0047e390((int)local_10);
      iVar4 = FUN_004c6cb0();
      if (iVar4 != 0) {
        FUN_0047e390((int)local_10);
        iVar4 = FUN_004c6a70();
        if (local_8 < iVar4) {
          FUN_0047e390((int)local_10);
          local_8 = FUN_004c6a70();
        }
        FUN_0047e390((int)local_10);
        iVar4 = FUN_004c6a70();
        if (iVar3 < iVar4) {
          *param_2 = *param_2 + 1;
        }
      }
    }
  }
  if (*param_2 < 1) {
    FUN_005e9f20("shPosition >= 1","..\\Casino\\PokerGame.cpp",0x1058);
  }
  sVar1 = *param_2;
  iVar4 = FUN_0047f950();
  if (iVar4 < sVar1) {
    FUN_005e9f20("shPosition <= pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerGame.cpp",
                 0x1059);
  }
  *param_3 = local_8 - iVar3;
  return;
}

