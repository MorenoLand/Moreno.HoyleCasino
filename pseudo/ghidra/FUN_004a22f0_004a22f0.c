// FUN_004a22f0  004a22f0

byte * __thiscall FUN_004a22f0(char *param_1,byte *param_2)

{
  if (*param_1 == '\0') {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1aa);
  }
  *param_2 = (byte)*(undefined2 *)(param_1 + 2) & 0xf;
  return param_2;
}

