// FUN_00632770  00632770

int FUN_00632770(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x20 < local_8) {
      return -1;
    }
    if (*(int *)(&DAT_0076fda0 + local_8 * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

