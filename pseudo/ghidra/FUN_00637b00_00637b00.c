// FUN_00637b00  00637b00

int __thiscall FUN_00637b00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar1 = (**(code **)(*param_1 + 0x17c))();
  local_c = 0;
  while( true ) {
    if (iVar1 <= local_c) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xa69);
      return 0;
    }
    iVar2 = (**(code **)(*param_1 + 0x180))(local_c);
    if (iVar2 == param_2) break;
    local_c = local_c + 1;
  }
  return local_c;
}

