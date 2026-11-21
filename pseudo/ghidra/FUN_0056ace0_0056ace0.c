// FUN_0056ace0  0056ace0

void __fastcall FUN_0056ace0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + 0x3ac + local_8 * 2) = 0;
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    cVar1 = FUN_00561ed0(local_8);
    if (cVar1 != '\0') {
      uVar2 = FUN_00561f00(local_8);
      *(undefined2 *)(param_1 + 0x3ac + local_8 * 2) = uVar2;
    }
  }
  return;
}

