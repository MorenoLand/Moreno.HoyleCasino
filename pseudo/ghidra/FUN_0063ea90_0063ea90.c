// FUN_0063ea90  0063ea90

undefined4 FUN_0063ea90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  
  iVar1 = FUN_005fb5e0(param_1 * 100 + 0x32);
  if (iVar1 == 0) {
    FUN_005e9f20("false","..\\casinoShell\\settingsdialog.cpp",0x439,extraout_var);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x1f0);
  }
  return uVar2;
}

