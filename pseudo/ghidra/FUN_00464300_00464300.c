// FUN_00464300  00464300

void __thiscall FUN_00464300(byte *param_1,char *param_2)

{
  if (*param_2 == DAT_0079074f) {
    FUN_005e9f20("pcs.ucSuit != WildSuit.ucSuit","..\\Casino\\PokerCard.cpp",0x92);
  }
  if (*param_2 == DAT_0079075e) {
    FUN_005e9f20("pcs.ucSuit != BugSuit.ucSuit","..\\Casino\\PokerCard.cpp",0x93);
  }
  *param_1 = (*param_1 & 0xf) + *param_2;
  return;
}

