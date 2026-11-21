// FUN_00464480  00464480

byte * __thiscall FUN_00464480(byte *param_1,byte *param_2)

{
  if ((*param_1 & 0xf) == 0xf) {
    FUN_005e9f20("(ucSuitAndRank & 0x0Fu) != 0x0Fu","..\\Casino\\PokerCard.cpp",0xaa);
  }
  if ((*param_1 & 0xf0) == 0xf0) {
    FUN_005e9f20("(ucSuitAndRank & 0xF0u) != 0xF0u","..\\Casino\\PokerCard.cpp",0xab);
  }
  *param_2 = *param_1 & 0xf;
  return param_2;
}

