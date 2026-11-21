// FUN_00639070  00639070

undefined ** FUN_00639070(int param_1)

{
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  int extraout_var;
  
  if ((param_1 < 0) || (iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), iVar2 <= param_1)) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xc58);
    ppuVar3 = &PTR_006b27f8;
  }
  else {
    iVar2 = extraout_var;
    cVar1 = FUN_00638ed0(param_1);
    if (cVar1 != '\0') {
      FUN_005e9f20("!IsPlayerEmpty(p)","..\\casinoShell\\shell.cpp",0xc5c);
    }
    iVar2 = FUN_0063aac0(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x58) + param_1 * 4));
    ppuVar3 = (undefined **)(iVar2 + 4);
  }
  return ppuVar3;
}

