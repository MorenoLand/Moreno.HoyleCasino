// FUN_005628b0  005628b0

void FUN_005628b0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_c;
  
  local_c = 0;
  *param_1 = 0x21e;
  *param_2 = 0x121;
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f10)) {
  case 2:
    *param_3 = 0;
    local_c = -0xb;
    break;
  case 3:
    *param_3 = 1;
    local_c = -6;
    break;
  case 4:
    *param_3 = 2;
    local_c = -6;
    break;
  case 6:
    *param_3 = 3;
    local_c = -8;
    break;
  case 8:
    *param_3 = 4;
    local_c = -8;
  }
  if (*(int *)(DAT_007947e0 + 0x4f14) == 10) {
    *param_1 = *param_1 + local_c;
  }
  return;
}

