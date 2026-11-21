// FUN_00642290  00642290

undefined2 FUN_00642290(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_00642890(param_1,param_2,0);
  if (iVar2 < 1) {
    FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x1aa);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + -2 + iVar2 * 2);
    FUN_00642210(param_1,param_2,uVar1);
  }
  return uVar1;
}

