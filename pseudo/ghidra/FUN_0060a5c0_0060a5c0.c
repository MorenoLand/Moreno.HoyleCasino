// FUN_0060a5c0  0060a5c0

void __thiscall FUN_0060a5c0(int param_1,int param_2)

{
  char cVar1;
  
  if ((DAT_007960cb == '\0') && (*(char *)(param_1 + 10) == '\0')) {
    if ((param_2 < 0) || ((2 < param_2 || (*(int *)(&DAT_00796d28 + param_2 * 0x74) == 0)))) {
      FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x662);
    }
    else {
      cVar1 = FUN_0060a870(param_2);
      if (cVar1 != '\0') {
        FUN_0062d890(1);
        (&DAT_00796d30)[param_2 * 0x74] = 1;
      }
    }
  }
  return;
}

