// FUN_00637000  00637000

int FUN_00637000(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_var;
  undefined4 uVar5;
  
  cVar1 = FUN_006668a0(param_1,param_2);
  uVar5 = extraout_var;
  if (cVar1 == '\0') {
    FUN_00666970(param_1,param_2);
  }
  cVar1 = FUN_006668a0(param_1,param_2);
  if (cVar1 == '\0') {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x8e5,uVar5);
    iVar2 = -1;
  }
  else {
    iVar3 = FUN_00666c70(param_1,param_2);
    if (iVar3 == 0) {
      FUN_005e9f20("iTotalLines","..\\casinoShell\\shell.cpp",0x8ed,uVar5);
    }
    iVar2 = FUN_006667c0(param_1,param_2);
    do {
      do {
        iVar4 = FUN_0062fbf0(iVar3);
        cVar1 = FUN_00666a80(param_1,param_2,iVar4);
      } while (cVar1 != '\0');
      cVar1 = FUN_00666840(iVar2 + iVar4);
    } while (cVar1 == '\0');
    FUN_00666b60(param_1,param_2,iVar4);
    iVar2 = iVar2 + iVar4;
  }
  return iVar2;
}

