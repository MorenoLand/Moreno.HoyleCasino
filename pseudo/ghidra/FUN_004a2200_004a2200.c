// FUN_004a2200  004a2200

undefined1 * __thiscall FUN_004a2200(char *param_1,undefined1 *param_2)

{
  if (*param_1 == '\0') {
    FUN_005e9f20("ucCategoryAndStrength != 0u","..\\Casino\\PokerHandValue.cpp",0x195);
  }
  *param_2 = (char)((int)(*(ushort *)(param_1 + 2) & 0xf000) >> 0xc);
  return param_2;
}

