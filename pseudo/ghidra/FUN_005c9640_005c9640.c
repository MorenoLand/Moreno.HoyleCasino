// FUN_005c9640  005c9640

int __thiscall
FUN_005c9640(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            int param_6)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)(param_3 + local_8 * 0x20) == -1) {
      return 0;
    }
    if (*(int *)(param_3 + local_8 * 0x20) == param_5) break;
    local_8 = local_8 + 1;
  }
  iVar1 = *(int *)(local_8 * 0x20 + param_3 + 4 + param_6 * 4);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0062fde0("Won %d with %d of icon %d\n",iVar1,param_6,param_5,param_1);
  return iVar1;
}

