// FUN_00639590  00639590

int __thiscall FUN_00639590(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x168))(param_1);
    if (iVar1 <= local_8) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xcca);
      return 0;
    }
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x164))(local_8);
    if (iVar1 == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

