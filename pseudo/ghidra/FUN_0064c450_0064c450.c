// FUN_0064c450  0064c450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0064c450(int *param_1,double param_2)

{
  int iVar1;
  
  iVar1 = FUN_00686cc0();
  *param_1 = iVar1;
  iVar1 = FUN_00686cc0();
  param_1[1] = iVar1 % 100;
  if (param_2 < 0.0) {
    *param_1 = -*param_1;
    param_1[1] = -param_1[1];
  }
  return;
}

