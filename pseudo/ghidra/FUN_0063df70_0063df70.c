// FUN_0063df70  0063df70

uint __thiscall FUN_0063df70(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if ((int)uVar2 <= local_8) {
      return uVar2 & 0xffffff00;
    }
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 1) &&
       (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1bc) + local_8 * 4) + 8), iVar1 == param_2))
    break;
    local_8 = local_8 + 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

