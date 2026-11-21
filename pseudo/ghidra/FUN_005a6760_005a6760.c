// FUN_005a6760  005a6760

int FUN_005a6760(void)

{
  short sVar1;
  undefined4 extraout_var;
  int local_8;
  
  sVar1 = FUN_005b5c60(4,0,1);
  if (sVar1 == 0) {
    FUN_005e9f20("royalMatchState->GetPlayerCard(CASINO_DEALER_ID, 0, 1) != EMPTY_CARD",
                 "..\\Casino\\royalmatchai.cpp",0x367,extraout_var);
  }
  local_8 = FUN_005b5f60(4,0,1);
  if (local_8 == 1) {
    local_8 = 0xb;
  }
  return local_8 + -2;
}

