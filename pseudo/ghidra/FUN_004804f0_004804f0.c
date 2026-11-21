// FUN_004804f0  004804f0

uint __thiscall FUN_004804f0(int param_1,int param_2)

{
  int iVar1;
  uint in_EAX;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (6 < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    iVar1 = *(int *)(param_1 + 0x3e4 + local_8 * 4);
    if (iVar1 == param_2) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

