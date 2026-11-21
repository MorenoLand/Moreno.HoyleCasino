// FUN_004629c0  004629c0

int FUN_004629c0(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int local_10;
  int local_c;
  
  local_c = 0;
  do {
    if (param_2 <= local_c) {
      return -1;
    }
    bVar1 = false;
    for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
      if (*(short *)(param_1 + local_c * 2) == *(short *)(param_3 + local_10 * 2)) {
        bVar1 = true;
        break;
      }
    }
    if (!bVar1) {
      return local_c;
    }
    local_c = local_c + 1;
  } while( true );
}

