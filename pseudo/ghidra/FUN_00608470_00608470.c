// FUN_00608470  00608470

int FUN_00608470(int param_1)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xb < local_8) {
      return -1;
    }
    if (((*(int *)(&DAT_00796b40 + local_8 * 0x24) != 0) &&
        (*(int *)(*(int *)(&DAT_00796b40 + local_8 * 0x24) + 0x34) == param_1)) &&
       (cVar1 = FUN_00609b80(local_8), cVar1 != '\0')) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

