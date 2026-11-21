// FUN_0044cfc0  0044cfc0

undefined4 __thiscall FUN_0044cfc0(int param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x38 + (param_2 * 3 + local_8) * 8)) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

