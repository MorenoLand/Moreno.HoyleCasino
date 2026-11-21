// FUN_00462930  00462930

void FUN_00462930(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    *(undefined2 *)(param_5 + local_8 * 2) = *(undefined2 *)(param_1 + local_c * 2);
    local_8 = local_8 + 1;
  }
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    *(undefined2 *)(param_5 + local_8 * 2) = *(undefined2 *)(param_3 + local_10 * 2);
    local_8 = local_8 + 1;
  }
  return;
}

