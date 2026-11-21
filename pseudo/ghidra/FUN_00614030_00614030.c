// FUN_00614030  00614030

void __thiscall FUN_00614030(int param_1,char *param_2)

{
  size_t sVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    operator_delete(*(void **)(param_1 + 0x84));
  }
  sVar1 = strlen(param_2);
  pvVar2 = operator_new(sVar1 + 1);
  *(void **)(param_1 + 0x84) = pvVar2;
  strcpy(*(char **)(param_1 + 0x84),param_2);
  return;
}

