// FUN_00673cb0  00673cb0

char * FUN_00673cb0(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 extraout_var;
  
  FUN_005fb720(0);
  iVar1 = FUN_005e4390(extraout_var);
  pcVar2 = (char *)(iVar1 + 0x14);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    FUN_005e9f20("false","..\\casinoShell\\savegamedialog.cpp",0x158);
    pcVar2 = "x";
  }
  return pcVar2;
}

