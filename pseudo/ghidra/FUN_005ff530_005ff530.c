// FUN_005ff530  005ff530

void __thiscall FUN_005ff530(int *param_1,undefined2 param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x86) = param_2;
  iVar1 = (**(code **)(*param_1 + 0x54))();
  (**(code **)(*param_1 + 0x6c))(iVar1 + (short)param_1[0x86]);
  return;
}

