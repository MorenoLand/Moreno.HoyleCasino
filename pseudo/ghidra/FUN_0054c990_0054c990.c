// FUN_0054c990  0054c990

undefined4 __fastcall FUN_0054c990(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_8;
  
  cVar1 = FUN_0054caa0();
  if (cVar1 != '\0') {
    for (local_8 = 0; iVar2 = FUN_0054c540(), local_8 < iVar2; local_8 = local_8 + 1) {
      iVar2 = FUN_0054c590(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
      if (iVar2 != 0x14) {
        iVar2 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
        if (9 < iVar2) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

