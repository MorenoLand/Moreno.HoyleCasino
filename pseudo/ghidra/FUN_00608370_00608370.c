// FUN_00608370  00608370

int FUN_00608370(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xb < local_8) {
      return -1;
    }
    if (*(int *)(&DAT_00796b38 + local_8 * 0x24) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

