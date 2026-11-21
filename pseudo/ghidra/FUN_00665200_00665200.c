// FUN_00665200  00665200

undefined4 FUN_00665200(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xb < local_8) {
      return 1;
    }
    if ((*(int *)(param_1 + local_8 * 4) != 0) && (*(int *)(param_1 + local_8 * 4) < 0xf9060))
    break;
    local_8 = local_8 + 1;
  }
  return 0;
}

