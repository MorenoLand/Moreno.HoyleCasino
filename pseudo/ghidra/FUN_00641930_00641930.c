// FUN_00641930  00641930

void FUN_00641930(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + local_8 * 2) = *(undefined2 *)(param_2 + local_8 * 2);
  }
  return;
}

