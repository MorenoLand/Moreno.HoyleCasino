// FUN_00637e40  00637e40

undefined4 __thiscall FUN_00637e40(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 0) || (iVar1 = (**(code **)(*param_1 + 0x194))(), iVar1 <= param_2)) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xa9b);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(&DAT_00762178 + param_2 * 4);
  }
  return uVar2;
}

