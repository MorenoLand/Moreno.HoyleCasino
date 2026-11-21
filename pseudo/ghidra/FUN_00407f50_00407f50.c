// FUN_00407f50  00407f50

undefined4 __thiscall FUN_00407f50(int param_1,int param_2)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (2 < local_c) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x34 + (param_2 * 3 + local_c) * 8)) break;
    local_c = local_c + 1;
  }
  return 1;
}

