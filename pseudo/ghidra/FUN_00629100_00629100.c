// FUN_00629100  00629100

void __thiscall FUN_00629100(int param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0xc4) != 0) {
    operator_delete(*(void **)(param_1 + 0xc4));
  }
  sVar1 = strlen(param_2);
  pvVar2 = operator_new(sVar1 + 1);
  *(void **)(param_1 + 0xc4) = pvVar2;
  if (*(int *)(param_1 + 200) != 0) {
    operator_delete(*(void **)(param_1 + 200));
  }
  sVar1 = strlen(param_3);
  pvVar2 = operator_new(sVar1 + 1);
  *(void **)(param_1 + 200) = pvVar2;
  strcpy(*(char **)(param_1 + 0xc4),param_2);
  strcpy(*(char **)(param_1 + 200),param_3);
  return;
}

