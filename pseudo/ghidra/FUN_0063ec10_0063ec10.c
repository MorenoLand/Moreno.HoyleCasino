// FUN_0063ec10  0063ec10

uint FUN_0063ec10(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_var;
  
  iVar1 = FUN_005fb350(param_1 * 100 + 0x32);
  if (iVar1 == 0) {
    uVar2 = FUN_005e9f20("false","..\\casinoShell\\settingsdialog.cpp",0x469,extraout_var);
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    uVar2 = FUN_00600230();
  }
  return uVar2;
}

