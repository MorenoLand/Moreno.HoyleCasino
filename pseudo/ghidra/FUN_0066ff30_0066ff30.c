// FUN_0066ff30  0066ff30

void __fastcall FUN_0066ff30(int param_1)

{
  char local_1c [16];
  uint local_c;
  FILE *local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_006705c0();
  if (*(int *)(param_1 + 0xb00) == -1) {
    FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0xd2);
  }
  else {
    local_8 = (FILE *)FUN_0066fc60(&DAT_006da58c);
    if (local_8 == (FILE *)0x0) {
      FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0xd9);
    }
    else {
      strcpy(local_1c,"REWL");
      fwrite(local_1c,1,5,local_8);
      fclose(local_8);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

