// FUN_00528190  00528190

uint __thiscall FUN_00528190(uint param_1,int param_2)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  uint local_8;
  
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0xd38);
    in_EAX = param_1;
  }
  if (((param_2 != -1) && (in_EAX = FUN_005dcb00(param_2), *(char *)(in_EAX + 0x4a0) == '\0')) &&
     (in_EAX = param_1, *(int *)(param_1 + 0xd38) == param_2)) {
    local_8 = 0;
    uVar2 = param_1;
    while( true ) {
      if (0xa0 < (int)local_8) {
        return uVar2 & 0xffffff00;
      }
      iVar1 = param_1 + 0x288 + param_2 * 0x284;
      if (*(int *)(iVar1 + local_8 * 4) != 0) break;
      uVar2 = local_8 + 1;
      local_8 = uVar2;
    }
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

