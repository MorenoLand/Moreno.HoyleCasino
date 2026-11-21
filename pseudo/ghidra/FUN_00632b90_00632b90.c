// FUN_00632b90  00632b90

undefined4 __thiscall FUN_00632b90(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((param_2 < 0) || (iVar1 = (**(code **)(*param_1 + 0xe4))(), iVar1 <= param_2)) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x2ca);
    uVar3 = 1;
  }
  else {
    piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(param_2);
    uVar3 = (**(code **)(*piVar2 + 0x30))();
  }
  return uVar3;
}

