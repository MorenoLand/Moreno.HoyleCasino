// FUN_0066f960  0066f960

void __thiscall FUN_0066f960(int param_1,undefined4 param_2)

{
  int iVar1;
  char local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  FILE *local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0xafc) = param_2;
  FUN_006705c0();
  if (*(int *)(param_1 + 0xb00) == -1) {
    FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0x39);
  }
  else {
    local_8 = (FILE *)FUN_0066fab0(&DAT_006d8524);
    if (local_8 == (FILE *)0x0) {
      FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0x40);
    }
    else {
      fread(local_1c,5,1,local_8);
      iVar1 = strcmp(local_1c,"REWC");
      if (iVar1 == 0) {
        fread(&local_14,4,1,local_8);
        fread(&local_10,4,1,local_8);
        *(undefined4 *)(param_1 + 0xaf4) = local_14;
        *(undefined4 *)(param_1 + 0xaf8) = local_10;
        fread((void *)(param_1 + 4),4,700,local_8);
        fclose(local_8);
      }
      else {
        FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0x47);
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

