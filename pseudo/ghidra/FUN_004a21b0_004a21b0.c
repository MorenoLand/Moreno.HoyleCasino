// FUN_004a21b0  004a21b0

byte * __thiscall FUN_004a21b0(byte *param_1,byte *param_2)

{
  if (*param_1 == 0) {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x18e);
  }
  *param_2 = *param_1 & 0xf;
  return param_2;
}

