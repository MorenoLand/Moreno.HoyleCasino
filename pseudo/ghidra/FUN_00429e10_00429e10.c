// FUN_00429e10  00429e10

void __thiscall FUN_00429e10(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x14 + param_2 * 4) + 0xafc + param_3 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))();
  }
  return;
}

