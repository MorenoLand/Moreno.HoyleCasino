// FUN_0060cac0  0060cac0

int __thiscall FUN_0060cac0(int param_1,int param_2)

{
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = *(int **)(param_1 + 0xc);
  while( true ) {
    if (*(int *)(param_1 + 4) <= local_c) {
      return -1;
    }
    if (*local_8 == param_2) break;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
  }
  return local_c;
}

