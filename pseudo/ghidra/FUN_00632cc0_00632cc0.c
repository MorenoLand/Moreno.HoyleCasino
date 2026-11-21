// FUN_00632cc0  00632cc0

int __thiscall FUN_00632cc0(int *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x16c))();
    if (iVar1 <= local_8) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x2e5);
      return -1;
    }
    iVar1 = (**(code **)(*param_1 + 0x164))(local_8);
    if (iVar1 == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

