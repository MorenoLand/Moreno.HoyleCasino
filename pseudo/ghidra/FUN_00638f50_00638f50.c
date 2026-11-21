// FUN_00638f50  00638f50

undefined1 FUN_00638f50(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_18;
  
  if ((param_1 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(), iVar1 <= param_1)) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xc35);
    local_18 = 0;
  }
  else {
    piVar2 = (int *)FUN_0063aac0();
    if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
  }
  return local_18;
}

