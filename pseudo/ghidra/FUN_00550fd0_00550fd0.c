// FUN_00550fd0  00550fd0

undefined4 __thiscall FUN_00550fd0(int param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0054c540();
    if (iVar1 <= local_8) {
      return 0;
    }
    iVar1 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    if ((iVar1 == param_2) ||
       ((iVar1 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_8 * 2)), iVar1 == 0xe &&
        (param_2 == 1)))) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

