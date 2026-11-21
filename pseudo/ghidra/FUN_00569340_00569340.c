// FUN_00569340  00569340

void __thiscall FUN_00569340(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_c;
  int local_8;
  
  iVar1 = FUN_005692f0();
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x24) = param_2;
  }
  else {
    iVar1 = FUN_00641280(CONCAT22(extraout_var_00,param_2));
    iVar2 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x24)));
    if (iVar2 < iVar1) {
      local_8 = FUN_005692f0();
      while (iVar1 = local_8, local_8 = iVar1 + -1, -1 < local_8) {
        iVar2 = FUN_00641280(param_2);
        iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 0x24 + local_8 * 2));
        if (iVar3 <= iVar2) {
          for (local_c = 4; iVar1 < local_c; local_c = local_c + -1) {
            *(undefined2 *)(param_1 + 0x24 + local_c * 2) =
                 *(undefined2 *)(param_1 + 0x22 + local_c * 2);
          }
          *(undefined2 *)(param_1 + 0x26 + local_8 * 2) = param_2;
          return;
        }
      }
    }
    else {
      for (local_8 = 4; 0 < local_8; local_8 = local_8 + -1) {
        *(undefined2 *)(param_1 + 0x24 + local_8 * 2) =
             *(undefined2 *)(param_1 + 0x22 + local_8 * 2);
      }
      *(undefined2 *)(param_1 + 0x24) = param_2;
    }
  }
  return;
}

