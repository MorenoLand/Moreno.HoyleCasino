// FUN_00659fa0  00659fa0

void FUN_00659fa0(char *param_1)

{
  FILE *_File;
  undefined4 uVar1;
  undefined4 extraout_var;
  int local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  uVar1 = extraout_var;
  for (local_410 = 0; local_410 < 1000; local_410 = local_410 + 1) {
    sprintf(param_1,"%07d.fac",local_410);
    sprintf(&local_40c,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,param_1);
    _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
    if (_File == (FILE *)0x0) goto LAB_0065a09d;
    fclose(_File);
  }
  uVar1 = FUN_00630f40("SID_SHELL_FAMEMAKER_TM",0,uVar1);
  uVar1 = FUN_00630f40("SID_SHELL_TOOMANYFACES_MESSAGE",uVar1);
  FUN_0062ff10(uVar1);
LAB_0065a09d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

