// FUN_0060a950  0060a950

undefined4 __fastcall FUN_0060a950(int param_1)

{
  char cVar1;
  int local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) != '\0') {
      return 0;
    }
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      cVar1 = FUN_0060a870(local_8);
      if (cVar1 != '\0') {
        return *(undefined4 *)(&DAT_00796d38 + local_8 * 0x74);
      }
    }
  }
  return 0;
}

