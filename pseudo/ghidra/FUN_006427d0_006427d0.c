// FUN_006427d0  006427d0

int FUN_006427d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; (local_8 < param_2 && (*(short *)(param_1 + local_8 * 2) != 0));
      local_8 = local_8 + 1) {
    iVar1 = FUN_00641280(*(undefined2 *)(param_1 + local_8 * 2));
    iVar2 = FUN_00641290(CONCAT22(extraout_var,*(undefined2 *)(param_1 + local_8 * 2)));
    if ((((iVar2 == param_3) || (param_3 == 0)) && (param_4 <= iVar1)) && (iVar1 <= param_5)) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

