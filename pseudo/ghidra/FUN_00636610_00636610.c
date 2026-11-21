// FUN_00636610  00636610

int FUN_00636610(void)

{
  int iVar1;
  int *piVar2;
  int extraout_var;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar1 <= local_8) break;
    piVar2 = (int *)FUN_0063aac0(extraout_var,
                                 *(undefined4 *)(*(int *)(extraout_var + 0x58) + local_8 * 4));
    if (*piVar2 != 0) {
      local_c = local_c + 1;
    }
    local_8 = local_8 + 1;
  }
  return local_c;
}

