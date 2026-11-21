// FUN_0060a4d0  0060a4d0

void __fastcall FUN_0060a4d0(int param_1)

{
  int local_8;
  
  if ((DAT_007960cb == '\0') && (*(char *)(param_1 + 10) == '\0')) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      if (*(int *)(&DAT_00796d28 + local_8 * 0x74) != 0) {
        FUN_0060a330(local_8,1);
      }
    }
    FUN_0060b460();
  }
  return;
}

