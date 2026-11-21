// FUN_004fd640  004fd640

void __fastcall FUN_004fd640(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    param_1[8] = 0;
    (**(code **)(*param_1 + 8))(1,0);
  }
  else if (iVar1 == 1) {
    FUN_00483910(param_1,param_1[8]);
    param_1[8] = param_1[8] + 1;
    if (param_1[8] < 7) {
      (**(code **)(*param_1 + 4))(1);
    }
    else {
      (**(code **)(*param_1 + 4))(2);
    }
  }
  else if (iVar1 == 2) {
    (**(code **)(**(int **)(DAT_00791eb8 + 4) + 0x1c))(0);
    FUN_005fc420(0);
  }
  return;
}

