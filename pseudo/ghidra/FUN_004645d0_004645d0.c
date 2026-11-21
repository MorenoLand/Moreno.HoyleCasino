// FUN_004645d0  004645d0

bool __thiscall FUN_004645d0(byte *param_1,byte *param_2)

{
  if ((*param_1 & 0xf) == 0xf) {
    FUN_005e9f20("(ucSuitAndRank & 0x0Fu) != 0x0Fu","..\\Casino\\PokerCard.cpp",0xc3);
  }
  if ((*param_1 & 0xf0) == 0xf0) {
    FUN_005e9f20("(ucSuitAndRank & 0xF0u) != 0xF0u","..\\Casino\\PokerCard.cpp",0xc4);
  }
  if ((*param_2 & 0xf) == 0xf) {
    FUN_005e9f20("(pcRHS.ucSuitAndRank & 0x0Fu) != 0x0Fu","..\\Casino\\PokerCard.cpp",0xc5);
  }
  if ((*param_2 & 0xf0) == 0xf0) {
    FUN_005e9f20("(pcRHS.ucSuitAndRank & 0xF0u) != 0xF0u","..\\Casino\\PokerCard.cpp",0xc6);
  }
  return *param_1 != *param_2;
}

