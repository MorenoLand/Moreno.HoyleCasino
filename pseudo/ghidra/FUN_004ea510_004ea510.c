// FUN_004ea510  004ea510

void __thiscall FUN_004ea510(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0x26f9);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0x26fa);
  }
  if (param_3 < 2) {
    FUN_005e9f20("shPlayerCount>=2","..\\Casino\\PokerPlayer.cpp",0x26fb);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 < param_3) {
    FUN_005e9f20("shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerPlayer.cpp",0x26fc);
  }
  *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb26 + (int)param_3) =
       *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb26 + (int)param_3) + '\x01';
  if (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb26 + (int)param_3) == 'P') {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xa44 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xa44 + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xab4 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xab4 + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb26 + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb26 + (int)param_3) >> 1;
  }
  if ((2 < param_3) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb25 + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb25 + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb25 + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xa42 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xa42 + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xab2 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xab2 + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb25 + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb25 + (int)param_3) >> 1;
  }
  iVar1 = FUN_0047f950();
  if ((param_3 < iVar1) &&
     (*(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb27 + (int)param_3) =
           *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb27 + (int)param_3) + '\x01',
     *(char *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb27 + (int)param_3) == 'P')) {
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xa46 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xa46 + param_3 * 2) >> 1;
    *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xab6 + param_3 * 2) =
         *(ushort *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xab6 + param_3 * 2) >> 1;
    *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb27 + (int)param_3) =
         *(byte *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xb27 + (int)param_3) >> 1;
  }
  return;
}

