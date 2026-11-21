// FUN_00653d40  00653d40

void __thiscall FUN_00653d40(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_006352f0(param_2);
  if (iVar1 != 0) {
    if ((param_2 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))(), iVar1 <= param_2)) {
      FUN_005e9f20("false","..\\casinoShell\\statisticsdialog.cpp",0xd9);
    }
    else {
      piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(param_2);
      (**(code **)(*piVar2 + 0x58))(param_1);
    }
  }
  return;
}

