// FUN_00634870  00634870

void FUN_00634870(char *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  FILE *local_438;
  char local_414 [8];
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  uVar2 = extraout_var;
  strcpy(&local_40c,"rtop.log");
  local_438 = (FILE *)FUN_005ea9c0(&local_40c,param_1,uVar2);
  if (local_438 == (FILE *)0x0) {
    FUN_006349c0();
    local_438 = (FILE *)FUN_005ea9c0(&local_40c,param_1,uVar2);
    if (local_438 == (FILE *)0x0) goto LAB_006349aa;
  }
  iVar1 = strcmp(param_1,"w");
  if (iVar1 != 0) {
    fread(local_414,1,5,local_438);
    iVar1 = strcmp(local_414,"RTOP");
    if (iVar1 != 0) {
      fclose(local_438);
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x5ad);
      goto LAB_006349aa;
    }
  }
  fseek(local_438,0,0);
LAB_006349aa:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

