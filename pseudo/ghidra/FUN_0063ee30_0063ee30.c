// FUN_0063ee30  0063ee30

void FUN_0063ee30(int param_1)

{
  int *piVar1;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb350(param_1 * 100 + 0x32);
  if (piVar1 == (int *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\settingsdialog.cpp",0x4a7,extraout_var);
  }
  else {
    (**(code **)(*piVar1 + 0xd0))();
  }
  return;
}

