// FUN_004a4450  004a4450

void FUN_004a4450(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0047e420();
  if (iVar1 < 0) {
    FUN_005e9f20("pokerGame->GetCurrentPlayer() >= 0","..\\Casino\\PokerHoldemAI.cpp",0x6ba);
  }
  iVar1 = FUN_0047e420();
  iVar2 = FUN_0047f950();
  if (iVar2 <= iVar1) {
    FUN_005e9f20("pokerGame->GetCurrentPlayer() < pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerHoldemAI.cpp",0x6bb);
  }
  DAT_00791890 = FUN_0047e3b0();
  if (param_1 == 0) {
    FUN_004a4500(0,param_2,param_3);
  }
  else {
    FUN_004a4e40(param_1,param_2,param_3);
  }
  return;
}

