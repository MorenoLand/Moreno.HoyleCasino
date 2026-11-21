// FUN_004a22a0  004a22a0

undefined1 * __thiscall FUN_004a22a0(char *param_1,undefined1 *param_2)

{
  if (*param_1 == '\0') {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x1a3);
  }
  *param_2 = (char)((int)(*(ushort *)(param_1 + 2) & 0xf0) >> 4);
  return param_2;
}

