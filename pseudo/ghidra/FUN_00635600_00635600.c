// FUN_00635600  00635600

void __thiscall FUN_00635600(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 < 0) || (iVar1 = FUN_006352f0(param_2), iVar1 == 0)) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x6b7);
    *param_3 = 4;
  }
  else {
    iVar1 = param_2;
    FUN_006375b0(param_2);
    iVar1 = FUN_00639ea0(iVar1);
    *param_3 = iVar1;
    piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(param_2);
    (**(code **)(*piVar2 + 0x2c))(param_3,param_4);
    if (*param_3 < param_3[1]) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x6af);
      *param_3 = param_3[1];
    }
    if (param_3[2] < *param_3) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x6b2);
      *param_3 = param_3[2];
    }
  }
  return;
}

