// FUN_004a2160  004a2160

byte * __thiscall FUN_004a2160(byte *param_1,byte *param_2)

{
  if (*param_1 == 0) {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x187);
  }
  *param_2 = *param_1 & 0xf0;
  return param_2;
}

