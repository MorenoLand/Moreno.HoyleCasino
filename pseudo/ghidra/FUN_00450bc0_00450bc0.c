// FUN_00450bc0  00450bc0

int FUN_00450bc0(int param_1,int param_2,int param_3)

{
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 2;
  while( true ) {
    if (0xe < local_c) {
      return 0;
    }
    if ((*(int *)(param_1 + local_c * 0x2c) == param_2) &&
       (local_8 = local_8 + 1, local_8 == param_3)) break;
    local_c = local_c + 1;
  }
  return local_c;
}

