// FUN_006450a0  006450a0

int FUN_006450a0(int param_1)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
    local_c = local_c + *(int *)(&DAT_0076350c + (local_8 % 0xd) * 8);
  }
  return local_c;
}

