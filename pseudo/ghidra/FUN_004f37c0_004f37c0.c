// FUN_004f37c0  004f37c0

void __thiscall FUN_004f37c0(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0x31c1);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0x31c2);
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0x31c3);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0x31c4);
  }
  *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6e + (int)param_3) =
       *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6e + (int)param_3) + '\x01';
  if (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6e + (int)param_3) == 'P') {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdfc + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdfc + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6e + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6e + (int)param_3) >> 1;
  }
  if ((2 < param_3) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6d + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6d + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6d + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8a + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8a + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdfa + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdfa + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6d + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6d + (int)param_3) >> 1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6f + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6f + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6f + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8e + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8e + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdfe + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdfe + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6f + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6f + (int)param_3) >> 1;
  }
  return;
}

