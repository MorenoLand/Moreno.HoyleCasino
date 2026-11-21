// FUN_00638ff0  00638ff0

uint FUN_00638ff0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int extraout_var;
  
  if ((param_1 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(), iVar1 <= param_1)) {
    uVar2 = FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xc44);
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    piVar3 = (int *)FUN_0063aac0(extraout_var,
                                 *(undefined4 *)(*(int *)(extraout_var + 0x58) + param_1 * 4));
    uVar2 = (uint)(*piVar3 == 1);
  }
  return uVar2;
}

