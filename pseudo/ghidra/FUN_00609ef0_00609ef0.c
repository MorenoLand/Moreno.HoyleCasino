// FUN_00609ef0  00609ef0

void __thiscall FUN_00609ef0(int param_1,int param_2,undefined4 param_3)

{
  if ((DAT_007960cb == '\0') && (*(char *)(param_1 + 10) == '\0')) {
    if ((param_2 < 0) || ((2 < param_2 || (*(int *)(&DAT_00796d28 + param_2 * 0x74) == 0)))) {
      FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x4be);
    }
    else {
      if ((&DAT_00796d3c)[param_2 * 0x74] != '\0') {
        *(undefined4 *)(&DAT_00796d94 + param_2 * 0x74) = param_3;
      }
      FUN_0062d7e0(param_3);
    }
  }
  return;
}

