// FUN_005eb4f0  005eb4f0

int * __thiscall FUN_005eb4f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  iVar2 = FUN_005eb470();
  iVar3 = FUN_005f5550();
  iVar4 = (**(code **)(*param_1 + 0x54))();
  iVar5 = FUN_005eb4b0();
  iVar6 = FUN_005f5590();
  *param_2 = iVar1 + iVar2 + iVar3 / 2;
  param_2[1] = iVar4 + iVar5 + iVar6 / 2;
  return param_2;
}

