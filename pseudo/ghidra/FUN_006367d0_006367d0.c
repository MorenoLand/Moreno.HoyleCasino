// FUN_006367d0  006367d0

uint __thiscall FUN_006367d0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if ((int)uVar3 <= local_8) {
      return uVar3 & 0xffffff00;
    }
    cVar2 = FUN_00638ff0(local_8);
    if ((cVar2 != '\0') &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x58) + local_8 * 4), *(int *)(iVar1 + 8) == param_2))
    break;
    local_8 = local_8 + 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

