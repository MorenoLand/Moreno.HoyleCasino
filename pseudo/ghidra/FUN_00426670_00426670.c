// FUN_00426670  00426670

undefined4 __thiscall FUN_00426670(int param_1,int param_2)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (1 < local_c) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x28 + (param_2 * 2 + local_c) * 8)) break;
    local_c = local_c + 1;
  }
  return 1;
}

