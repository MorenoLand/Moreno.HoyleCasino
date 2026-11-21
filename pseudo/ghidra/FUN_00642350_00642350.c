// FUN_00642350  00642350

undefined2 __thiscall FUN_00642350(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_00642890(param_2,param_3,0,param_1);
  if (iVar2 < 2) {
    FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x1c6);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(param_2 + -4 + iVar2 * 2);
  }
  return uVar1;
}

