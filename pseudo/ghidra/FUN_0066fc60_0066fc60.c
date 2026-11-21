// FUN_0066fc60  0066fc60

void __thiscall FUN_0066fc60(int param_1,char *param_2)

{
  int iVar1;
  FILE *local_438;
  char local_434 [32];
  char local_414 [8];
  char local_40c [1028];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0xb00) < 0) goto LAB_0066fdd9;
  sprintf(local_434,"rled%d.log",*(undefined4 *)(param_1 + 0xb00));
  strcpy(local_40c,local_434);
  local_438 = (FILE *)FUN_005ea9c0(local_40c,param_2);
  if (local_438 == (FILE *)0x0) {
    iVar1 = strcmp(param_2,"w");
    if (iVar1 == 0) goto LAB_0066fdd9;
    FUN_0066ff30();
    local_438 = (FILE *)FUN_005ea9c0(local_40c,param_2);
    if (local_438 == (FILE *)0x0) goto LAB_0066fdd9;
  }
  iVar1 = strcmp(param_2,"w");
  if (iVar1 != 0) {
    fread(local_414,1,5,local_438);
    iVar1 = strcmp(local_414,"REWL");
    if (iVar1 != 0) {
      fclose(local_438);
      FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0x9a);
      goto LAB_0066fdd9;
    }
  }
  fseek(local_438,0,0);
LAB_0066fdd9:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

