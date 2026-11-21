// FUN_004fd5d0  004fd5d0

void __fastcall FUN_004fd5d0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 8))(1,0);
  }
  else if (iVar1 == 1) {
    (**(code **)(**(int **)(DAT_00791eb8 + 4) + 0x1c))(0);
    FUN_005fc420(0);
  }
  return;
}

