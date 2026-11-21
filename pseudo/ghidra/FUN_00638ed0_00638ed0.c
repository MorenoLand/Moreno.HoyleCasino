// FUN_00638ed0  00638ed0

bool FUN_00638ed0(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int extraout_var;
  
  if ((param_1 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(), iVar1 <= param_1)) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xc2b);
    bVar3 = true;
  }
  else {
    piVar2 = (int *)FUN_0063aac0(extraout_var,
                                 *(undefined4 *)(*(int *)(extraout_var + 0x58) + param_1 * 4));
    bVar3 = *piVar2 == 0;
  }
  return bVar3;
}

