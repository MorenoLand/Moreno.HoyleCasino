// FUN_006385f0  006385f0

undefined4 __thiscall FUN_006385f0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 0) || (iVar1 = (**(code **)(*param_1 + 0x1ac))(), iVar1 <= param_2)) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xb40);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(&DAT_0076227c + param_2 * 4);
  }
  return uVar2;
}

