// FUN_005ded20  005ded20

void FUN_005ded20(char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"SID_SHELL_OPENSEAT");
  if (iVar1 == 0) {
    FUN_00631fb0("SID_CASINO_OPENSEAT");
  }
  else {
    iVar1 = strcmp(param_1,"SID_SHELL_SETTINGS_ROLLOVER11");
    if (iVar1 == 0) {
      FUN_00631fb0("SID_CASINO_SETTINGS_ROLLOVER11");
    }
    else {
      iVar1 = strcmp(param_1,"SID_SHELL_MENU_MAINSCREEN");
      if (iVar1 == 0) {
        FUN_00631fb0("SID_CASINO_MENU_MAINSCREEN");
      }
      else {
        FUN_00631fb0(param_1);
      }
    }
  }
  return;
}

