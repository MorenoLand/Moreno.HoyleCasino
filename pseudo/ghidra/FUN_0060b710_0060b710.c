// FUN_0060b710  0060b710

void __thiscall FUN_0060b710(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_005f4ed0(param_2);
  *(undefined1 *)(param_2 + 4) = 1;
  iVar1 = (**(code **)(*param_1 + 0x54))();
  iVar1 = *(int *)(param_2 + 0xc) - iVar1;
  iVar2 = (**(code **)(*param_1 + 0x4c))(iVar1);
  FUN_005efa20(*(int *)(param_2 + 8) - iVar2,iVar1);
  (**(code **)(*param_1 + 0xac))();
  return;
}

