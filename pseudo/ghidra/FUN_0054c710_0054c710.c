// FUN_0054c710  0054c710

undefined4 __fastcall FUN_0054c710(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  int local_8;
  
  iVar1 = FUN_00641290(*(undefined2 *)(param_1 + 4));
  local_8 = 1;
  while( true ) {
    iVar2 = FUN_0054c540();
    if (iVar2 <= local_8) {
      return 1;
    }
    iVar2 = FUN_00641290(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
    if (iVar2 != iVar1) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

