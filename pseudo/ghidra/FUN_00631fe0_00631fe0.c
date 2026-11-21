// FUN_00631fe0  00631fe0

undefined4 __fastcall FUN_00631fe0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *local_10;
  int local_8;
  
  cVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0x1c) + 0x4c))(0x357780);
  if (cVar1 == '\0') {
    FUN_005e9f20("pApp->poStringManager->LoadStrings(TEX_GENERIC_STRINGS)",
                 "..\\casinoShell\\shell.cpp",0x1de);
  }
  cVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0x1c) + 0x4c))(0x357781);
  if (cVar1 == '\0') {
    FUN_005e9f20("pApp->poStringManager->LoadStrings(TEX_CARDSHELL_STRINGS)",
                 "..\\casinoShell\\shell.cpp",0x1df);
  }
  for (local_10 = (int *)(**(code **)(*param_1 + 0xa4))();
      (local_10 != (int *)0x0 && (*local_10 != 0)); local_10 = local_10 + 1) {
    cVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0x1c) + 0x4c))(*local_10);
    if (cVar1 == '\0') {
      FUN_005e9f20("pApp->poStringManager->LoadStrings(*piStringResources)",
                   "..\\casinoShell\\shell.cpp",0x1e4);
    }
  }
  for (local_8 = 0; iVar2 = (**(code **)(*param_1 + 0xe4))(), local_8 < iVar2; local_8 = local_8 + 1
      ) {
    piVar3 = (int *)(**(code **)(*param_1 + 0xe0))(local_8);
    iVar2 = (**(code **)(*piVar3 + 0x10))();
    if ((iVar2 != -1) &&
       (cVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0x1c) + 0x4c))(iVar2), cVar1 == '\0')) {
      FUN_005e9f20("pApp->poStringManager->LoadStrings(iStringResource)",
                   "..\\casinoShell\\shell.cpp",0x1f0);
    }
  }
  return 1;
}

