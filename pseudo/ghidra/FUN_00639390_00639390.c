// FUN_00639390  00639390

void __thiscall
FUN_00639390(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*param_2 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(param_1), iVar1 <= *param_2))
  {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xc91);
  }
  else {
    uVar2 = (uint)param_5;
    uVar3 = 0xffffffff;
    FUN_00639110(*param_2);
    FUN_006476f0(param_2,param_3,param_4,uVar3,uVar2);
  }
  return;
}

