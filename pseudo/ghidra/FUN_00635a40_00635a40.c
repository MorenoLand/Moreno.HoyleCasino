// FUN_00635a40  00635a40

void __thiscall FUN_00635a40(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_006352f0(param_2);
  if (iVar1 != 0) {
    if (((param_3 == 0) || (param_2 < 0)) ||
       (iVar1 = (**(code **)(*param_1 + 0xec))(), iVar1 <= param_2)) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x6fe);
    }
    else {
      (**(code **)(*param_1 + 0x328))(param_2,param_3);
      (**(code **)(*param_1 + 0x32c))(param_2,param_3);
    }
  }
  return;
}

