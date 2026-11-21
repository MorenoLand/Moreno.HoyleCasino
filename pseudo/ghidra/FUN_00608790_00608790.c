// FUN_00608790  00608790

int __thiscall FUN_00608790(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x160);
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))(param_1);
    iVar1 = iVar1 - *(int *)(&DAT_00796b54 + param_2 * 0x24);
  }
  return iVar1;
}

