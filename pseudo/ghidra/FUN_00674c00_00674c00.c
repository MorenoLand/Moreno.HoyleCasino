// FUN_00674c00  00674c00

void FUN_00674c00(int param_1)

{
  char local_10c [256];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_8 = 10; -1 < local_8; local_8 = local_8 + -1) {
    sprintf(local_10c,"%d.prf",param_1 + local_8);
    FUN_00604a20(local_10c);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

