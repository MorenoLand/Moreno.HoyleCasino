// FUN_00605770  00605770

void __thiscall FUN_00605770(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_005f4ed0(param_2);
  *(undefined1 *)(param_2 + 4) = 1;
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  param_1[0xb] = *(int *)(param_2 + 8) - iVar1;
  iVar1 = (**(code **)(*param_1 + 0x54))();
  param_1[0xc] = *(int *)(param_2 + 0xc) - iVar1;
  return;
}

