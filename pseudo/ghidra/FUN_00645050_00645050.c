// FUN_00645050  00645050

int FUN_00645050(int param_1)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
    local_c = local_c + *(int *)(&DAT_007634a0 + (local_8 % 0xd) * 8);
  }
  return local_c;
}

