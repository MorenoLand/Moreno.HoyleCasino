// FUN_00692ba0  00692ba0

void FUN_00692ba0(float *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 - (int)param_1;
  iVar1 = 0x38;
  do {
    if (*(float *)(param_2 + (int)param_1) < *param_1) {
      *param_1 = *(float *)(param_2 + (int)param_1);
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

