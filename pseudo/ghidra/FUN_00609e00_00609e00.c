// FUN_00609e00  00609e00

int __fastcall FUN_00609e00(int param_1)

{
  char cVar1;
  int local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) != '\0') {
      return -1;
    }
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      cVar1 = FUN_0060a2b0(local_8);
      if (cVar1 != '\0') {
        return local_8;
      }
    }
  }
  return -1;
}

