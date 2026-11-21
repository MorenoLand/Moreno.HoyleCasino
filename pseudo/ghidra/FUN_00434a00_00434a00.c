// FUN_00434a00  00434a00

uint __thiscall FUN_00434a00(int param_1,int param_2)

{
  int iVar1;
  uint in_EAX;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x4b < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    if ((*(int *)(*(int *)(param_1 + 4 + local_8 * 4) + 0x48 + param_2 * 0x20) != 0) &&
       (iVar1 = *(int *)(DAT_007906dc + 0x14 + local_8 * 4),
       *(int *)(iVar1 + 0x17c + param_2 * 0x1e0) == 0)) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

