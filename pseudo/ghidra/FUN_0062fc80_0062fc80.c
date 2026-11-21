// FUN_0062fc80  0062fc80

int __thiscall FUN_0062fc80(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_4 < param_2) || (param_3 < param_4)) {
    FUN_005e9f20("false","..\\casinoShell\\util.cpp",0x42,param_1);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0062fc30(param_2,param_3);
    while ((param_2 < param_3 && (iVar1 == param_4))) {
      iVar1 = FUN_0062fc30(param_2,param_3);
    }
  }
  return iVar1;
}

