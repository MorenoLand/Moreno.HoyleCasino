// FUN_0040cd50  0040cd50

void __thiscall FUN_0040cd50(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (((-1 < param_2) && (param_2 < 4)) && (*(int *)(param_1 + 0x18 + param_2 * 4) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x18 + param_2 * 4) + 0xb8))(param_2,param_3);
    piVar1 = (int *)FUN_005dcb00(param_2);
    (**(code **)(*piVar1 + 0x14))();
  }
  return;
}

