// FUN_00669310  00669310

void FUN_00669310(void)

{
  undefined1 local_414;
  undefined1 local_413 [1027];
  uint local_10;
  FILE *local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_8 = 0; local_8 < 100; local_8 = local_8 + 1) {
    local_414 = 0;
    memset(local_413,0,0x3ff);
    FUN_00667be0(&local_414,local_8);
    FUN_00667c70(&local_414);
    local_c = (FILE *)FUN_005ea9c0(&local_414,&DAT_006c2d28);
    if (local_c == (FILE *)0x0) break;
    fclose(local_c);
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

