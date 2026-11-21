// FUN_00639520  00639520

int __thiscall FUN_00639520(undefined4 param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)(&DAT_00763570 + local_8 * 0x380) == -1) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xcbe,param_1);
      return 0;
    }
    if (*(int *)(&DAT_00763570 + local_8 * 0x380) == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

