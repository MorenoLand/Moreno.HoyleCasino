// FUN_0063b560  0063b560

undefined1 FUN_0063b560(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_0063aac0();
  if (*piVar1 == 0) {
    FUN_005e9f20("!IsEmpty()","..\\casinoShell\\player.cpp",0x182);
  }
  iVar2 = FUN_0063aac0();
  iVar3 = FUN_00639590(param_1);
  return *(undefined1 *)(iVar2 + 0x15d + iVar3);
}

