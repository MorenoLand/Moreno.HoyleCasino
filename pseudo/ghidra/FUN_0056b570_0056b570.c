// FUN_0056b570  0056b570

void __thiscall FUN_0056b570(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_c;
  int local_8;
  
  iVar1 = FUN_0056b400(param_2);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0xf6 + param_2 * 10) = param_3;
  }
  else {
    iVar1 = FUN_00641280(CONCAT22(extraout_var,param_3));
    iVar2 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 0xf6 + param_2 * 10)));
    if (iVar2 < iVar1) {
      local_8 = FUN_0056b400(param_2);
      do {
        iVar1 = local_8;
        local_8 = iVar1 + -1;
        if (local_8 < 0) {
          return;
        }
        iVar2 = FUN_00641280(param_3);
        iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2));
      } while (iVar2 < iVar3);
      for (local_c = 4; iVar1 < local_c; local_c = local_c + -1) {
        *(undefined2 *)(param_1 + 0xf6 + param_2 * 10 + local_c * 2) =
             *(undefined2 *)(param_1 + param_2 * 10 + 0xf4 + local_c * 2);
      }
      *(undefined2 *)(param_1 + param_2 * 10 + 0xf8 + local_8 * 2) = param_3;
    }
    else {
      for (local_8 = 4; 0 < local_8; local_8 = local_8 + -1) {
        *(undefined2 *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2) =
             *(undefined2 *)(param_1 + param_2 * 10 + 0xf4 + local_8 * 2);
      }
      *(undefined2 *)(param_1 + 0xf6 + param_2 * 10) = param_3;
    }
  }
  return;
}

