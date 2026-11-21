// FUN_00614d30  00614d30

void __thiscall FUN_00614d30(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x4c))();
  iVar1 = param_2 - iVar1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x54))(param_1,iVar1);
  iVar2 = param_3 - iVar2;
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x44))(param_2,param_3,param_1,iVar1,iVar2);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x50) + 0x54))();
  iVar3 = (**(code **)(**(int **)(param_1 + 0x50) + 0x4c))(iVar3 + iVar2);
  (**(code **)(**(int **)(param_1 + 0x50) + 0x44))(iVar3 + iVar1);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x54))();
  iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x4c))(iVar3 + iVar2);
  (**(code **)(**(int **)(param_1 + 0x54) + 0x44))(iVar3 + iVar1);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x58) + 0x54))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))(iVar3 + iVar2);
  (**(code **)(**(int **)(param_1 + 0x58) + 0x44))(iVar2 + iVar1);
  return;
}

