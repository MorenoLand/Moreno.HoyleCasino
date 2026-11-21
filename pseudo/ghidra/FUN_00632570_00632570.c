// FUN_00632570  00632570

undefined ** FUN_00632570(undefined4 param_1)

{
  undefined **ppuVar1;
  
  switch(param_1) {
  case 1:
    if (DAT_00795f90 == 3) {
      ppuVar1 = (undefined **)FUN_00630f40("SID_SHELL_APPLERETURN");
    }
    else {
      ppuVar1 = (undefined **)FUN_00630f40("SID_SHELL_ALTENTER");
    }
    break;
  default:
    ppuVar1 = &PTR_006b27f8;
    break;
  case 8:
    ppuVar1 = (undefined **)FUN_00630f40("SID_SHELL_BACKSPACE");
    break;
  case 0xd:
    ppuVar1 = (undefined **)FUN_00630f40("SID_SHELL_ENTER");
    break;
  case 0x1b:
    ppuVar1 = (undefined **)FUN_00630f40("SID_SHELL_ESC");
    break;
  case 0x20:
    ppuVar1 = (undefined **)FUN_00630f40("SID_SHELL_SPACEBAR");
  }
  return ppuVar1;
}

