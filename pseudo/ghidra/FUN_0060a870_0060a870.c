// FUN_0060a870  0060a870

uint __thiscall FUN_0060a870(int param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if ((param_2 < 0) || (2 < param_2)) {
        uVar1 = FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x6d1);
        uVar1 = uVar1 & 0xffffff00;
      }
      else if (*(int *)(&DAT_00796d28 + param_2 * 0x74) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_0062d3b0();
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

