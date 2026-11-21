// FUN_0060a800  0060a800

void __fastcall FUN_0060a800(int param_1)

{
  int local_8;
  
  if ((DAT_007960cb == '\0') && (*(char *)(param_1 + 10) == '\0')) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      if (*(int *)(&DAT_00796d28 + local_8 * 0x74) != 0) {
        FUN_0060a720(local_8);
      }
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_0060b450();
    }
  }
  return;
}

