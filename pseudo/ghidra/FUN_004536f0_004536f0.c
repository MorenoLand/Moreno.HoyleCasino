// FUN_004536f0  004536f0

undefined4 FUN_004536f0(int param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (4 < local_8) {
      return 1;
    }
    if (*(char *)(param_1 + local_8 + 3) != *(char *)(param_2 + local_8 + 3)) break;
    local_8 = local_8 + 1;
  }
  if (*(char *)(param_2 + local_8 + 3) < *(char *)(param_1 + local_8 + 3)) {
    return 1;
  }
  return 0;
}

