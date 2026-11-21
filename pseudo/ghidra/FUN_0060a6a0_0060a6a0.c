// FUN_0060a6a0  0060a6a0

void __fastcall FUN_0060a6a0(int param_1)

{
  int local_8;
  
  if ((DAT_007960cb == '\0') && (*(char *)(param_1 + 10) == '\0')) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      if (*(int *)(&DAT_00796d28 + local_8 * 0x74) != 0) {
        FUN_0060a5c0(local_8);
      }
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0060b460();
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
  }
  return;
}

