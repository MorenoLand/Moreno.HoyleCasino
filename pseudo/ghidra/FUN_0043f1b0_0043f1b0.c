// FUN_0043f1b0  0043f1b0

void FUN_0043f1b0(int param_1,int param_2)

{
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)(param_1 + 0x20 + local_14 * 4) = 0;
  }
  local_10 = param_2;
  local_c = (int *)&stack0x0000000c;
  for (local_8 = 0; (local_10 != -1 && (local_8 < 10)); local_8 = local_8 + 1) {
    *(int *)(param_1 + 0x20 + local_8 * 4) = local_10;
    local_10 = *local_c;
    local_c = local_c + 1;
  }
  return;
}

