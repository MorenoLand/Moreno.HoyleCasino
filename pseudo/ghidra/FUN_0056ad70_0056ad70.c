// FUN_0056ad70  0056ad70

undefined4 __thiscall FUN_0056ad70(int param_1,short param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (*(char *)(param_3 * 5 + param_1 + param_4) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

