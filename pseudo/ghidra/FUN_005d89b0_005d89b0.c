// FUN_005d89b0  005d89b0

undefined4 __thiscall FUN_005d89b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(param_1);
    if (iVar1 <= local_8) {
      return 0;
    }
    iVar1 = FUN_005dcb00(local_8);
    if (*(int *)(iVar1 + 0x20) == param_2) break;
    local_8 = local_8 + 1;
  }
  uVar2 = FUN_005dcb00(local_8);
  return uVar2;
}

