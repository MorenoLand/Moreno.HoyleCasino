// FUN_004da3c0  004da3c0

void __thiscall FUN_004da3c0(int param_1,short param_2)

{
  char cVar1;
  
  if (param_2 < 0) {
    FUN_005e9f20("shType >= 0","..\\Casino\\PokerPlayer.cpp",0x1984);
  }
  if (4 < param_2) {
    FUN_005e9f20("shType <= 4","..\\Casino\\PokerPlayer.cpp",0x1985);
  }
  cVar1 = FUN_004c61b0();
  if (cVar1 != '\0') {
    *(undefined1 *)(DAT_00791364 + 0x40b) = 1;
  }
  FUN_005eaf00(0x186a9);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x74))();
  return;
}

