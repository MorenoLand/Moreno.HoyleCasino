// FUN_0060a330  0060a330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0060a330(int param_1,int param_2)

{
  void *pvVar1;
  
  if ((DAT_007960cb == '\0') && (*(char *)(param_1 + 10) == '\0')) {
    if ((param_2 < 0) || ((2 < param_2 || (*(int *)(&DAT_00796d28 + param_2 * 0x74) == 0)))) {
      FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x60d);
    }
    else {
      FUN_0062d120();
      pvVar1 = *(void **)(&DAT_00796d28 + param_2 * 0x74);
      if (pvVar1 != (void *)0x0) {
        FUN_0062d120();
        operator_delete(pvVar1);
      }
      *(undefined4 *)(&DAT_00796d28 + param_2 * 0x74) = 0;
      (&DAT_00796d30)[param_2 * 0x74] = 0;
      *(undefined4 *)(&DAT_00796d34 + param_2 * 0x74) = 0;
      *(undefined4 *)(&DAT_00796d38 + param_2 * 0x74) = 0;
      (&DAT_00796d3c)[param_2 * 0x74] = 0;
      *(undefined4 *)(&DAT_00796d40 + param_2 * 0x74) = 0xffffffff;
      *(undefined4 *)(&DAT_00796d44 + param_2 * 0x74) = 0xffffffff;
      *(undefined4 *)(&DAT_00796d94 + param_2 * 0x74) = 0x3f800000;
      *(undefined4 *)(&DAT_00796d98 + param_2 * 0x74) = _DAT_006b3654;
    }
  }
  return;
}

