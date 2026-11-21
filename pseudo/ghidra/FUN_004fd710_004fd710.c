// FUN_004fd710  004fd710

void __fastcall FUN_004fd710(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    FUN_004839e0(param_1);
    (**(code **)(*param_1 + 4))(1);
  }
  else if (iVar1 == 1) {
    (**(code **)(**(int **)(DAT_00791eb8 + 4) + 0x1c))(0);
    FUN_005fc420(0);
  }
  return;
}

