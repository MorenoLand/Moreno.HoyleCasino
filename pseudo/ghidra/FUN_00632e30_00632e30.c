// FUN_00632e30  00632e30

int __thiscall FUN_00632e30(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 500))();
    if (iVar1 <= local_8) {
      local_8 = 0;
      while( true ) {
        iVar1 = (**(code **)(*param_1 + 0x1f8))();
        if (iVar1 <= local_8) {
          return 0;
        }
        if (((*(int *)(&DAT_00762518 + local_8 * 0xc) == param_2) &&
            (*(int *)(&DAT_0076251c + local_8 * 0xc) == param_3)) &&
           (*(int *)(&DAT_00762520 + local_8 * 0xc) == param_4)) break;
        local_8 = local_8 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 500))();
      return iVar1 + local_8;
    }
    if (((*(int *)(&DAT_00762298 + local_8 * 0xc) == param_2) &&
        (*(int *)(&DAT_0076229c + local_8 * 0xc) == param_3)) &&
       (*(int *)(&DAT_007622a0 + local_8 * 0xc) == param_4)) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

