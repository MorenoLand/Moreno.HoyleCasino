// FUN_00639110  00639110

undefined4 __thiscall FUN_00639110(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(), iVar1 <= param_2)) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xc63);
    uVar2 = *(undefined4 *)(**(int **)(param_1 + 0x58) + 0x20);
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x58) + param_2 * 4) + 0x20);
  }
  return uVar2;
}

