// FUN_0063ea30  0063ea30

void FUN_0063ea30(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb5e0(param_1 * 100 + 0x32);
  if (piVar1 == (int *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\settingsdialog.cpp",0x42e,extraout_var);
  }
  else {
    (**(code **)(*piVar1 + 0xf0))(param_2,0);
  }
  return;
}

