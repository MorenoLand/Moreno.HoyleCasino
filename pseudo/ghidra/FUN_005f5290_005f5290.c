// FUN_005f5290  005f5290

int * __thiscall FUN_005f5290(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  iVar2 = FUN_005f5550();
  iVar3 = (**(code **)(*param_1 + 0x54))();
  iVar4 = FUN_005f5590();
  *param_2 = iVar1 + iVar2 / 2;
  param_2[1] = iVar3 + iVar4 / 2;
  return param_2;
}

