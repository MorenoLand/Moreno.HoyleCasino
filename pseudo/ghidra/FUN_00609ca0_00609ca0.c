// FUN_00609ca0  00609ca0

undefined4 __fastcall FUN_00609ca0(int param_1)

{
  char cVar1;
  int local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) != '\0') {
      return 0;
    }
    for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
      cVar1 = FUN_00609b80(local_8);
      if ((cVar1 != '\0') && (*(int *)(&DAT_00796b40 + local_8 * 0x24) != 0)) {
        return *(undefined4 *)(&DAT_00796b40 + local_8 * 0x24);
      }
    }
  }
  return 0;
}

