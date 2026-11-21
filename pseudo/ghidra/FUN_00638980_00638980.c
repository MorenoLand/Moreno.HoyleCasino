// FUN_00638980  00638980

int __thiscall FUN_00638980(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  iVar1 = (**(code **)(*param_1 + 0x1d0))();
  if (DAT_00795f94 != '\0') {
    for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
      iVar2 = (**(code **)(*param_1 + 0x1d4))(local_c);
      iVar3 = (**(code **)(*param_1 + 0x1dc))();
      if (iVar2 == iVar3) {
        return local_c;
      }
    }
  }
  local_c = 0;
  while( true ) {
    if (iVar1 <= local_c) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xbb6);
      return 0;
    }
    iVar2 = (**(code **)(*param_1 + 0x1d4))(local_c);
    if (iVar2 == param_2) break;
    local_c = local_c + 1;
  }
  return local_c;
}

