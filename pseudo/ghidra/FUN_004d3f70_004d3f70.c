// FUN_004d3f70  004d3f70

void __thiscall FUN_004d3f70(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0x1253);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0x1254);
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0x1255);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0x1256);
  }
  *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + param_3 * 2) =
       *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + param_3 * 2) + 1;
  if (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + param_3 * 2) == 0x3000) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + param_3 * 2) + -1;
  }
  if ((2 < param_3) &&
     (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45a + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45a + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45a + param_3 * 2) == 0x3000)) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45a + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45a + param_3 * 2) + -1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45e + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45e + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45e + param_3 * 2) == 0x3000)) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45e + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45e + param_3 * 2) + -1;
  }
  return;
}

