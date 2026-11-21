// FUN_00555020  00555020

int __thiscall FUN_00555020(int param_1,short param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (4 < local_8) {
      return -1;
    }
    if (*(short *)(*(int *)(param_1 + 4 + local_8 * 4) + 400) == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

