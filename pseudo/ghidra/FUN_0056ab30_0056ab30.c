// FUN_0056ab30  0056ab30

undefined4 __thiscall FUN_0056ab30(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_8;
  
  iVar1 = FUN_00641280(param_3);
  iVar2 = FUN_00641290(CONCAT22(extraout_var,param_3));
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (*(short *)(param_1 + 0x3ac + local_8 * 2) != 0) {
      iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 0x3ac + local_8 * 2));
      iVar4 = FUN_00641290(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 0x3ac + local_8 * 2)))
      ;
      if ((iVar3 == iVar1) && (iVar4 == iVar2)) {
        return 1;
      }
    }
  }
  local_8 = 0;
  do {
    if (4 < local_8) {
      return 0;
    }
    if (*(short *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2) != 0) {
      iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2));
      iVar4 = FUN_00641290(*(undefined2 *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2));
      if ((iVar3 == iVar1) && (iVar4 == iVar2)) {
        return 1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

