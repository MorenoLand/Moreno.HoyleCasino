// FUN_004a2250  004a2250

byte * __thiscall FUN_004a2250(char *param_1,byte *param_2)

{
  if (*param_1 == '\0') {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x19c);
  }
  *param_2 = (byte)((ushort)*(undefined2 *)(param_1 + 2) >> 8) & 0xf;
  return param_2;
}

