// FUN_004369a0  004369a0

uint __thiscall FUN_004369a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x4b < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    iVar1 = FUN_005f5400(param_1);
    if (iVar1 == param_3) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  uVar2 = FUN_005cb7d0(param_2,0);
  return uVar2;
}

