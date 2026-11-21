// FUN_00658b20  00658b20

void __fastcall FUN_00658b20(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00657820();
  if (cVar1 == '\0') {
    FUN_00665190(*(undefined4 *)(param_1 + 0x278));
  }
  else {
    iVar2 = FUN_00606570();
    if (iVar2 == 0x3fd) {
      switch(*(undefined4 *)(param_1 + 0x278)) {
      case 3:
      case 4:
        FUN_00665190(3);
        break;
      default:
        FUN_005e9f20("false","..\\casinoShell\\facemakerdialog.cpp",0x396);
        break;
      case 8:
      case 9:
        FUN_00665190(8);
      }
    }
    else if (iVar2 == 0x3fe) {
      switch(*(undefined4 *)(param_1 + 0x278)) {
      case 3:
      case 4:
        FUN_00665190(4);
        break;
      default:
        FUN_005e9f20("false","..\\casinoShell\\facemakerdialog.cpp",0x3a4);
        break;
      case 8:
      case 9:
        FUN_00665190(9);
      }
    }
    else if (iVar2 == 0x3ff) {
      switch(*(undefined4 *)(param_1 + 0x278)) {
      case 3:
      case 4:
        FUN_00665190(3);
        FUN_00665190(4);
        break;
      default:
        FUN_005e9f20("false","..\\casinoShell\\facemakerdialog.cpp",0x3b4);
        break;
      case 8:
      case 9:
        FUN_00665190(8);
        FUN_00665190(9);
      }
    }
  }
  return;
}

