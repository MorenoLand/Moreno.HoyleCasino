// FUN_00450c50  00450c50

void __thiscall FUN_00450c50(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int local_8;
  
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    uVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    cVar1 = FUN_00450c20(uVar2);
    if (cVar1 == '\0') {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        uVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        *param_3 = uVar2;
        *param_4 = local_8;
      }
    }
  }
  return;
}

