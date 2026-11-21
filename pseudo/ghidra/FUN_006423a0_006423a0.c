// FUN_006423a0  006423a0

int FUN_006423a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  int local_8;
  
  local_8 = 0;
  do {
    if ((param_2 <= local_8) || (*(short *)(param_1 + local_8 * 2) == 0)) {
      return -1;
    }
    iVar1 = FUN_00641280(*(undefined2 *)(param_1 + local_8 * 2));
    iVar2 = FUN_00641290(CONCAT22(extraout_var,*(undefined2 *)(param_1 + local_8 * 2)));
    if ((param_3 == 0) || (iVar1 == param_3)) {
      if (param_4 == 0) {
        return local_8;
      }
      if (iVar2 == param_4) {
        return local_8;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

