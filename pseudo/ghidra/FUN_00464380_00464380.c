// FUN_00464380  00464380

void __thiscall FUN_00464380(byte *param_1,char *param_2)

{
  if (*param_2 == DAT_0079077b) {
    FUN_005e9f20("pcr.ucRank != WildRank.ucRank","..\\Casino\\PokerCard.cpp",0x9b);
  }
  if (*param_2 == DAT_007907a2) {
    FUN_005e9f20("pcr.ucRank != BugRank.ucRank","..\\Casino\\PokerCard.cpp",0x9c);
  }
  *param_1 = (*param_1 & 0xf0) + *param_2;
  return;
}

