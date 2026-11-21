// FUN_005597d0  005597d0

undefined4 __fastcall FUN_005597d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_8;
  
  cVar1 = FUN_005598e0();
  if (cVar1 != '\0') {
    for (local_8 = 0; iVar2 = FUN_00559380(), local_8 < iVar2; local_8 = local_8 + 1) {
      iVar2 = FUN_005593d0(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
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

