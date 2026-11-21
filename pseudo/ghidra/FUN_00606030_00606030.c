// FUN_00606030  00606030

void __thiscall FUN_00606030(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_005f5400();
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(param_2,uVar1);
  }
  return;
}

