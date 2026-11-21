// FUN_00642750  00642750

int FUN_00642750(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  int local_10;
  int local_8;
  
  local_10 = 0;
  for (local_8 = 0; (local_8 < param_2 && (*(short *)(param_1 + local_8 * 2) != 0));
      local_8 = local_8 + 1) {
    iVar1 = FUN_00641280(*(undefined2 *)(param_1 + local_8 * 2));
    iVar2 = FUN_00641290(CONCAT22(extraout_var,*(undefined2 *)(param_1 + local_8 * 2)));
    if (iVar2 == param_3) {
      local_10 = local_10 + iVar1;
    }
  }
  return local_10;
}

