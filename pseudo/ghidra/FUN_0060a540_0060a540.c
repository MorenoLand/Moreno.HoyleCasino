// FUN_0060a540  0060a540

uint __thiscall FUN_0060a540(int param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if (((param_2 < 0) || (2 < param_2)) || (*(int *)(&DAT_00796d28 + param_2 * 0x74) == 0)) {
        uVar1 = FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x650);
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = CONCAT31((int3)((uint)(param_2 * 0x74) >> 8),(&DAT_00796d30)[param_2 * 0x74]);
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

