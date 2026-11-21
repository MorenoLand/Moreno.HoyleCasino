// FUN_006419a0  006419a0

void FUN_006419a0(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < param_2 * 5; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < param_2 + -1; local_10 = local_10 + 1) {
      iVar2 = FUN_0062fbf0(2);
      if (iVar2 == 0) {
        uVar1 = *(undefined2 *)(param_1 + local_10 * 2);
        *(undefined2 *)(param_1 + local_10 * 2) = *(undefined2 *)(param_1 + 2 + local_10 * 2);
        *(undefined2 *)(param_1 + 2 + local_10 * 2) = uVar1;
      }
    }
  }
  return;
}

