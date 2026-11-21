// FUN_00642130  00642130

void FUN_00642130(int param_1,int param_2,undefined2 param_3,int param_4)

{
  undefined4 local_8;
  
  while (local_8 = param_2 + -1, param_4 < local_8) {
    *(undefined2 *)(param_1 + local_8 * 2) = *(undefined2 *)(param_1 + -2 + local_8 * 2);
    param_2 = local_8;
  }
  *(undefined2 *)(param_1 + param_4 * 2) = param_3;
  return;
}

