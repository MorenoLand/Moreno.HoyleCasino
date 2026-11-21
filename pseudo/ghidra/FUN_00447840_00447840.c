// FUN_00447840  00447840

void __thiscall FUN_00447840(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if ((param_2 != 4) && (*(int *)(param_1 + 0x14 + param_3 * 4) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x14 + param_3 * 4) + 0xb8))(param_2,0);
    piVar1 = (int *)FUN_005dcb00(param_2);
    (**(code **)(*piVar1 + 0x14))();
  }
  return;
}

