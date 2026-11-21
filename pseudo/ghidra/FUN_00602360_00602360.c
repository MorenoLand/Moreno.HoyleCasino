// FUN_00602360  00602360

void __fastcall FUN_00602360(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_005f5400();
    (**(code **)(**(int **)(param_1 + 4) + 0x1c))(uVar1);
  }
  return;
}

