// FUN_00697380  00697380

void FUN_00697380(int *param_1,int param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = calloc(param_2 * 3,4);
  param_1[1] = (int)pvVar1;
  pvVar1 = calloc(0x20,4);
  param_1[2] = (int)pvVar1;
  FUN_006973c0(param_2,param_1[1],pvVar1);
  return;
}

