// FUN_00642210  00642210

void FUN_00642210(int param_1,int param_2,short param_3)

{
  int local_8;
  
  for (local_8 = 0; (local_8 < param_2 && (*(short *)(param_1 + local_8 * 2) != param_3));
      local_8 = local_8 + 1) {
  }
  if (local_8 != param_2) {
    for (; local_8 < param_2 + -1; local_8 = local_8 + 1) {
      *(undefined2 *)(param_1 + local_8 * 2) = *(undefined2 *)(param_1 + 2 + local_8 * 2);
    }
    *(undefined2 *)(param_1 + local_8 * 2) = 0;
  }
  return;
}

