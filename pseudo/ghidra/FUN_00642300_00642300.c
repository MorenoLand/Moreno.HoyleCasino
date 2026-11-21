// FUN_00642300  00642300

undefined2 __thiscall FUN_00642300(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_00642890(param_2,param_3,0,param_1);
  if (iVar2 < 1) {
    FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x1ba);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(param_2 + -2 + iVar2 * 2);
  }
  return uVar1;
}

