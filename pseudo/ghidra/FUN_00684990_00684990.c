// FUN_00684990  00684990

void FUN_00684990(int *param_1,int param_2,int param_3)

{
  if (*param_1 != 0) {
    (*(code *)param_1[0xb1])(*param_1,param_2,param_3,0);
    param_1[2] = param_2;
    param_1[3] = param_3;
    FUN_00686a30(param_1 + 6);
  }
  return;
}

