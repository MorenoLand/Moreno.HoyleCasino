// FUN_00600200  00600200

void __fastcall FUN_00600200(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_005f5400();
    (**(code **)(**(int **)(param_1 + 4) + 0x20))(uVar1);
  }
  return;
}

