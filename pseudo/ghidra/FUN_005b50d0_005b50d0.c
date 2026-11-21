// FUN_005b50d0  005b50d0

int __thiscall FUN_005b50d0(int param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return -1;
    }
    if (*(int *)(param_1 + 0x580 + local_8 * 4) == param_2) break;
    if (*(int *)(param_1 + 0x634 + local_8 * 4) == param_2) {
      return local_8;
    }
    local_8 = local_8 + 1;
  }
  return local_8;
}

