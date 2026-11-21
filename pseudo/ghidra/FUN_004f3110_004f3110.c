// FUN_004f3110  004f3110

void __thiscall FUN_004f3110(int param_1,short param_2)

{
  int iVar1;
  short local_8;
  
  if (param_2 < 0) {
    FUN_005e9f20("shSeat>=0","..\\Casino\\PokerPlayer.cpp",0x3174);
  }
  iVar1 = FUN_0047f950();
  if (iVar1 <= param_2) {
    FUN_005e9f20("shSeat<pokerGame->GetNumberOfPlayersAtTable()","..\\Casino\\PokerPlayer.cpp",
                 0x3175);
  }
  local_8 = 2;
  while( true ) {
    iVar1 = FUN_0047f950();
    if (iVar1 < local_8) break;
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xd8c + local_8 * 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x428) + param_2 * 0xe + 0xdfc + local_8 * 2) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x428) + param_2 * 7 + 0xe6e + (int)local_8) = 0;
    local_8 = local_8 + 1;
  }
  return;
}

