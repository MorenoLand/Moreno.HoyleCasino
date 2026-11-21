// FUN_005ccec0  005ccec0

uint __thiscall FUN_005ccec0(int param_1,undefined4 param_2,uint *param_3,int *param_4)

{
  char cVar1;
  uint in_EAX;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (4 < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < 0x1e; local_c = local_c + 1) {
        if ((*(int *)(param_1 + 0x17c + local_8 * 0x1e0 + local_10 * 0x78 + local_c * 4) != 0) &&
           (cVar1 = (**(code **)(**(int **)(param_1 + 0x17c + local_8 * 0x1e0 + local_10 * 0x78 +
                                           local_c * 4) + 0x84))(param_2), cVar1 != '\0')) {
          *param_3 = local_8;
          *param_4 = local_10;
          return CONCAT31((int3)(local_8 >> 8),1);
        }
      }
    }
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  } while( true );
}

