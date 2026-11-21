// FUN_0056ac70  0056ac70

void __thiscall FUN_0056ac70(int param_1,undefined2 param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    cVar1 = FUN_0056b950(local_8,0);
    if (cVar1 != '\0') {
      *(undefined2 *)(param_1 + 0xf6 + local_8 * 10 + param_3 * 2) = param_2;
      *(undefined1 *)(local_8 * 5 + param_1 + param_3) = param_4;
    }
  }
  return;
}

