// FUN_0060a2b0  0060a2b0

undefined4 __thiscall FUN_0060a2b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if ((param_2 < 0) || (2 < param_2)) {
        FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x5f8);
        uVar1 = 1;
      }
      else if (*(int *)(&DAT_00796d28 + param_2 * 0x74) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = FUN_0062d3f0();
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

