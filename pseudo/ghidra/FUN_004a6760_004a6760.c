// FUN_004a6760  004a6760

void FUN_004a6760(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0047e420();
  if (iVar1 < 0) {
    FUN_005e9f20("pokerGame->GetCurrentPlayer() >= 0","..\\Casino\\PokerHoldemAI.cpp",0xaa8);
  }
  iVar1 = FUN_0047e420();
  iVar2 = FUN_0047f950();
  if (iVar2 <= iVar1) {
    FUN_005e9f20("pokerGame->GetCurrentPlayer() < pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerHoldemAI.cpp",0xaa9);
  }
  DAT_00791890 = FUN_0047e3b0();
  if (param_1 == 0) {
    FUN_004a6810(0,param_2,param_3);
  }
  else {
    FUN_004a72b0(param_1,param_2,param_3);
  }
  return;
}

