// FUN_00482d80  00482d80

void FUN_00482d80(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < param_2 + -1; local_10 = local_10 + 1) {
      if (*(int *)(param_1 + local_10 * 4) < *(int *)(param_1 + 4 + local_10 * 4)) {
        uVar1 = *(undefined4 *)(param_1 + local_10 * 4);
        *(undefined4 *)(param_1 + local_10 * 4) = *(undefined4 *)(param_1 + 4 + local_10 * 4);
        *(undefined4 *)(param_1 + 4 + local_10 * 4) = uVar1;
      }
    }
  }
  return;
}

