// FUN_004f3200  004f3200

void __thiscall FUN_004f3200(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0x3183);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0x3184);
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0x3185);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0x3186);
  }
  *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + param_3 * 2) =
       *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + param_3 * 2) + 1;
  if (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + param_3 * 2) == 0x3000) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + param_3 * 2) + -1;
  }
  if ((2 < param_3) &&
     (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8a + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8a + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8a + param_3 * 2) == 0x3000)) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8a + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8a + param_3 * 2) + -1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8e + param_3 * 2) =
           *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8e + param_3 * 2) + 1,
     *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8e + param_3 * 2) == 0x3000)) {
    *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8e + param_3 * 2) =
         *(short *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8e + param_3 * 2) + -1;
  }
  return;
}

