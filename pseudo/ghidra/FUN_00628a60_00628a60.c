// FUN_00628a60  00628a60

void __thiscall FUN_00628a60(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_0060c840(param_2);
    uVar1 = FUN_005f5400();
    *(undefined4 *)(param_2 + 8) = uVar1;
    (**(code **)(*param_1 + 0xd0))();
  }
  return;
}

