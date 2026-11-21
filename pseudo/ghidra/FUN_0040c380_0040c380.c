// FUN_0040c380  0040c380

int FUN_0040c380(void)

{
  short sVar1;
  undefined4 extraout_var;
  int local_8;
  
  sVar1 = FUN_004193d0(4,0,1);
  if (sVar1 == 0) {
    FUN_005e9f20("blackjackState->GetPlayerCard(4, 0, 1) != EMPTY_CARD",
                 "..\\Casino\\blackjackai.cpp",0x34e,extraout_var);
  }
  local_8 = FUN_00419780(4,0,1);
  if (local_8 == 1) {
    local_8 = 0xb;
  }
  return local_8 + -2;
}

