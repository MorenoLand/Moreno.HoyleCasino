// FUN_004ec850  004ec850

void __thiscall FUN_004ec850(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0x2989);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0x298a);
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0x298b);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0x298c);
  }
  *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7de + (int)param_3) =
       *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7de + (int)param_3) + '\x01';
  if (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7de + (int)param_3) == 'P') {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6fc + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6fc + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x76c + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x76c + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7de + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7de + (int)param_3) >> 1;
  }
  if ((2 < param_3) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7dd + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7dd + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7dd + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6fa + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6fa + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x76a + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x76a + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7dd + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7dd + (int)param_3) >> 1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7df + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7df + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7df + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6fe + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x6fe + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x76e + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x76e + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7df + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x7df + (int)param_3) >> 1;
  }
  return;
}

