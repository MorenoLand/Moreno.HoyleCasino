// FUN_00609910  00609910

uint __thiscall FUN_00609910(int param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if ((param_2 < 0) || (0xb < param_2)) {
        uVar1 = FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x3e4);
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = (uint)(byte)(&DAT_00796b44)[param_2 * 0x24];
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

