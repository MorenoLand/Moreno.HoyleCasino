// FUN_005de9c0  005de9c0

undefined4 __thiscall FUN_005de9c0(int *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xe4))();
    if (iVar1 <= local_8) {
      return 0;
    }
    if (*(int *)(&DAT_007947f0 + local_8 * 0xc) == param_2) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(&DAT_007947f4 + local_8 * 0xc);
}

