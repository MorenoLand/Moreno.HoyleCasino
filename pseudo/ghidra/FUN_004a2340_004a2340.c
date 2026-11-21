// FUN_004a2340  004a2340

undefined4 __thiscall FUN_004a2340(char *param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1b3);
  }
  if (*param_2 == '\0') {
    FUN_005e9f20("phRHS.ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1b4);
  }
  if ((*param_1 == *param_2) && (*(short *)(param_1 + 2) == *(short *)(param_2 + 2))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

