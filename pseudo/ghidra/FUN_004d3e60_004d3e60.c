// FUN_004d3e60  004d3e60

void __thiscall FUN_004d3e60(int param_1,short param_2)

{
  int iVar1;
  short local_8;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0x1243);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0x1244);
  }
  local_8 = 2;
  while( true ) {
    iVar1 = FUN_0047f950();
    if (iVar1 < local_8) break;
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x45c + local_8 * 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x4cc + local_8 * 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0x53c + local_8 * 2) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0x5ae + (int)local_8) = 0;
    local_8 = local_8 + 1;
  }
  return;
}

