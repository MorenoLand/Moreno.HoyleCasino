// FUN_0062fc30  0062fc30

int FUN_0062fc30(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < param_1) {
    iVar1 = FUN_0062fba0((param_1 - param_2) + 1);
    iVar1 = iVar1 + param_2;
  }
  else {
    iVar1 = FUN_0062fba0((param_2 - param_1) + 1);
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}

