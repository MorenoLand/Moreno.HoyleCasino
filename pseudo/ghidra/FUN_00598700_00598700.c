// FUN_00598700  00598700

undefined4 __thiscall FUN_00598700(int param_1,int param_2)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (2 < local_c) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x38 + (local_c + param_2 * 3) * 8)) break;
    local_c = local_c + 1;
  }
  return 1;
}

