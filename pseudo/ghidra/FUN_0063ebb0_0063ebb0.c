// FUN_0063ebb0  0063ebb0

void FUN_0063ebb0(int param_1)

{
  int *piVar1;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb350(param_1 * 100 + 0x32);
  if (piVar1 == (int *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\settingsdialog.cpp",0x45e,extraout_var);
  }
  else {
    (**(code **)(*piVar1 + 0xf4))();
  }
  return;
}

