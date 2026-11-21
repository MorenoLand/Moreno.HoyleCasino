// FUN_006349c0  006349c0

void FUN_006349c0(void)

{
  undefined4 extraout_var;
  char local_b0 [8];
  FILE *local_a8;
  undefined1 local_a4 [152];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_a8 = (FILE *)FUN_00634870(&DAT_006da58c);
  if (local_a8 == (FILE *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x5c0,extraout_var);
  }
  else {
    strcpy(local_b0,"RTOP");
    fwrite(local_b0,1,5,local_a8);
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      memset(local_a4,0,0x98);
      fwrite(local_a4,0x98,1,local_a8);
    }
    fclose(local_a8);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

