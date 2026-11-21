// FUN_0064c6e0  0064c6e0

undefined4 __thiscall FUN_0064c6e0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 < *param_1) {
    uVar1 = 1;
  }
  else if (*param_1 < param_2) {
    uVar1 = 0;
  }
  else if (param_3 < param_1[1]) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

