// FUN_004a24d0  004a24d0

undefined4 __thiscall FUN_004a24d0(char *param_1,char *param_2)

{
  char cVar1;
  
  if (*param_1 == '\0') {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1de);
  }
  if (*param_2 == '\0') {
    FUN_005e9f20("phRHS.ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1df);
  }
  cVar1 = FUN_004a2340(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_004a2440(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

