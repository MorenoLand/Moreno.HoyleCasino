// FUN_00633ea0  00633ea0

void __thiscall FUN_00633ea0(int *param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int *piVar2;
  char local_514 [256];
  int local_414;
  FILE *local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_005f3bf0();
  piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(uVar1);
  local_414 = (**(code **)(*piVar2 + 200))();
  uVar1 = FUN_005f3bf0();
  piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0xcc))();
  sprintf(local_514,"data\\%s.hs",uVar1);
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  strcpy(&local_40c,local_514);
  local_410 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (local_410 == (FILE *)0x0) {
    uVar1 = FUN_005f3bf0();
    (**(code **)(*param_1 + 0x228))(uVar1);
    local_410 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
    if (local_410 == (FILE *)0x0) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x4b4);
      goto LAB_00634071;
    }
  }
  if (0 < local_414) {
    fseek(local_410,local_414 * 0x5f0,0);
  }
  fread(param_2,0x98,param_3,local_410);
  fclose(local_410);
LAB_00634071:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

