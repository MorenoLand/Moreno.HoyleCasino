// FUN_0056a9c0  0056a9c0

void __fastcall FUN_0056a9c0(int param_1)

{
  char cVar1;
  int local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    cVar1 = FUN_0056b950(local_8,0);
    if (cVar1 != '\0') {
      for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        *(undefined2 *)(param_1 + 0xf6 + local_8 * 10 + local_c * 2) = 0;
        *(undefined1 *)(local_8 * 5 + param_1 + local_c) = 0;
      }
    }
  }
  return;
}

