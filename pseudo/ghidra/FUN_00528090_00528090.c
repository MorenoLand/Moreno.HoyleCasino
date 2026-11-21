// FUN_00528090  00528090

uint __thiscall FUN_00528090(int param_1,int param_2)

{
  int *piVar1;
  uint in_EAX;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xa0 < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    piVar1 = (int *)(*(int *)(param_1 + 4 + local_8 * 4) + 0x48 + param_2 * 0x20);
    if (*piVar1 != 0) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return CONCAT31((int3)((uint)piVar1[1] >> 8),1);
}

