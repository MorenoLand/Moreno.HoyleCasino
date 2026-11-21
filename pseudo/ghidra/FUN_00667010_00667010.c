// FUN_00667010  00667010

char * FUN_00667010(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x2b < local_8) {
      return (char *)0x0;
    }
    if (*(int *)(&DAT_00780160 + local_8 * 0x44) == param_1) break;
    local_8 = local_8 + 1;
  }
  return s_NOBODY_00780164 + local_8 * 0x44;
}

