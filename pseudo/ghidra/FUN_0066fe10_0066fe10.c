// FUN_0066fe10  0066fe10

void __fastcall FUN_0066fe10(int param_1)

{
  char local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  FILE *local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_006705c0();
  if (*(int *)(param_1 + 0xb00) == -1) {
    FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0xb5);
  }
  else {
    local_8 = (FILE *)FUN_0066fab0(&DAT_006da58c);
    if (local_8 == (FILE *)0x0) {
      FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0xbb);
    }
    else {
      strcpy(local_1c,"REWC");
      local_14 = FUN_00634420(500);
      local_10 = 0;
      fwrite(local_1c,1,5,local_8);
      fwrite(&local_14,4,1,local_8);
      fwrite(&local_10,4,1,local_8);
      fwrite((void *)(param_1 + 4),4,700,local_8);
      fclose(local_8);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

