// FUN_004a23c0  004a23c0

undefined4 __thiscall FUN_004a23c0(char *param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1c1);
  }
  if (*param_2 == '\0') {
    FUN_005e9f20("phRHS.ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1c2);
  }
  if ((*param_1 == *param_2) && (*(short *)(param_1 + 2) == *(short *)(param_2 + 2))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

