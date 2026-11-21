// FUN_005ee5e0  005ee5e0

void __thiscall FUN_005ee5e0(int *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  
  if (((param_1[0x17] == 0) || (param_2 == (char *)0x0)) ||
     (iVar1 = strcmp((char *)param_1[0x17],param_2), iVar1 != 0)) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      param_1[0x28] = 0;
    }
    if (param_1[0x17] != 0) {
      operator_delete((void *)param_1[0x17]);
      param_1[0x17] = 0;
    }
    if (param_2 != (char *)0x0) {
      sVar2 = strlen(param_2);
      pvVar3 = operator_new(sVar2 + 1);
      param_1[0x17] = (int)pvVar3;
      strcpy((char *)param_1[0x17],param_2);
    }
    (**(code **)(*param_1 + 0xac))();
  }
  return;
}

