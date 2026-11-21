// FUN_00602d10  00602d10

void __thiscall FUN_00602d10(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 400) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 400) + 0x54))();
    iVar1 = (**(code **)(**(int **)(param_1 + 400) + 0x4c))(iVar1 + param_3);
    (**(code **)(**(int **)(param_1 + 400) + 0x44))(iVar1 + param_2);
  }
  return;
}

