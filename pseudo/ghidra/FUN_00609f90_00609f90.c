// FUN_00609f90  00609f90

void __thiscall FUN_00609f90(int param_1,undefined4 param_2)

{
  int local_8;
  
  if ((DAT_007960cb == '\0') && (*(char *)(param_1 + 10) == '\0')) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      if (*(int *)(&DAT_00796d28 + local_8 * 0x74) != 0) {
        FUN_00609ef0(local_8,param_2);
      }
    }
  }
  return;
}

