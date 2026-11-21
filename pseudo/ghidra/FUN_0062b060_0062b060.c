// FUN_0062b060  0062b060

int FUN_0062b060(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1[1] == param_2[1]) {
    iVar1 = *param_1 - *param_2;
  }
  else {
    iVar1 = param_1[1] - param_2[1];
  }
  return iVar1;
}

