// FUN_00636850  00636850

uint __thiscall FUN_00636850(int param_1,int param_2)

{
  uint uVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    uVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if ((int)uVar1 <= local_8) {
      return uVar1 & 0xffffff00;
    }
    if (*(int *)(*(int *)(param_1 + 0x58) + local_8 * 4) == param_2) break;
    local_8 = local_8 + 1;
  }
  return CONCAT31((int3)((uint)local_8 >> 8),1);
}

