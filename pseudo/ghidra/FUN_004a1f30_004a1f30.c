// FUN_004a1f30  004a1f30

char * __thiscall FUN_004a1f30(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = FUN_004a1fe0(DAT_007913d0);
  if (cVar1 == '\0') {
    FUN_005e9f20("*this != EmptyValue","..\\Casino\\PokerHandValue.cpp",0x74);
  }
  cVar1 = FUN_004a1fb0(DAT_007913b4);
  if (cVar1 == '\0') {
    *param_2 = *param_1 + -2;
  }
  else {
    *param_2 = *DAT_007907a4;
  }
  return param_2;
}

