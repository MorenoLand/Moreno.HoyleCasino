// FUN_00641d60  00641d60

void FUN_00641d60(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined2 uVar1;
  char cVar2;
  int local_10;
  int local_8;
  
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < param_2 + -1; local_10 = local_10 + 1) {
      cVar2 = FUN_00642aa0(*(undefined2 *)(param_1 + local_10 * 2),
                           *(undefined2 *)(param_1 + 2 + local_10 * 2),param_3,param_4,param_5,
                           param_6);
      if (cVar2 != '\0') {
        uVar1 = *(undefined2 *)(param_1 + local_10 * 2);
        *(undefined2 *)(param_1 + local_10 * 2) = *(undefined2 *)(param_1 + 2 + local_10 * 2);
        *(undefined2 *)(param_1 + 2 + local_10 * 2) = uVar1;
      }
    }
  }
  return;
}

