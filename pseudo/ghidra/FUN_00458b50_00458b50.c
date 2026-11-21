// FUN_00458b50  00458b50

void __thiscall FUN_00458b50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (((param_3 < 2) && (*(int *)(param_1 + 0x18 + (param_2 + param_3 * 4) * 4) != 0)) &&
     ((**(code **)(**(int **)(param_1 + 0x18 + (param_2 + param_3 * 4) * 4) + 0xb8))
                (param_2,param_3), param_2 != 4)) {
    piVar1 = (int *)FUN_005dcb00(param_2);
    (**(code **)(*piVar1 + 0x14))();
  }
  return;
}

