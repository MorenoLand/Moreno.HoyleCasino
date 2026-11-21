// FUN_005a21a0  005a21a0

int __thiscall FUN_005a21a0(int param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xb < local_8) {
      return -1;
    }
    if (*(int *)(param_1 + 8 + local_8 * 4) == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

