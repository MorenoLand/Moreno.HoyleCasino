// FUN_0056adb0  0056adb0

void __thiscall FUN_0056adb0(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  char cVar2;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(param_3 + local_8 * 2) = 0;
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    uVar1 = *(undefined2 *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2);
    cVar2 = FUN_0056ad70(uVar1,param_2,local_8);
    if (cVar2 == '\0') {
      *(undefined2 *)(param_3 + local_8 * 2) = uVar1;
    }
  }
  return;
}

