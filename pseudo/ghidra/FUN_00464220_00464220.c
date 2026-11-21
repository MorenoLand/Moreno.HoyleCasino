// FUN_00464220  00464220

void __thiscall FUN_00464220(char *param_1,char *param_2,char *param_3)

{
  if (((*param_2 == DAT_0079077b) || (*param_3 == DAT_0079074f)) &&
     ((*param_2 != DAT_0079077b || (*param_3 != DAT_0079074f)))) {
    FUN_005e9f20("((pcr.ucRank != WildRank.ucRank) && (pcs.ucSuit != WildSuit.ucSuit)) || ((pcr.ucRank == WildRank.ucRank) && (pcs.ucSuit == WildSuit.ucSuit))"
                 ,"..\\Casino\\PokerCard.cpp",0x88);
  }
  if (((*param_2 == DAT_007907a2) || (*param_3 == DAT_0079075e)) &&
     ((*param_2 != DAT_007907a2 || (*param_3 != DAT_0079075e)))) {
    FUN_005e9f20("((pcr.ucRank != BugRank.ucRank) && (pcs.ucSuit != BugSuit.ucSuit)) || ((pcr.ucRank == BugRank.ucRank) && (pcs.ucSuit == BugSuit.ucSuit))"
                 ,"..\\Casino\\PokerCard.cpp",0x8a);
  }
  *param_1 = *param_2 + *param_3;
  return;
}

