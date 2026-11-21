// FUN_006428e0  006428e0

int FUN_006428e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; (local_8 < param_2 && (*(short *)(param_1 + local_8 * 2) != 0));
      local_8 = local_8 + 1) {
    iVar1 = FUN_00641280(*(undefined2 *)(param_1 + local_8 * 2));
    if (iVar1 == param_3) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

