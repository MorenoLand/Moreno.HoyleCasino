// FUN_0057be80  0057be80

void __thiscall FUN_0057be80(int param_1,int param_2,char *param_3,char *param_4)

{
  char cVar1;
  size_t sVar2;
  void *pvVar3;
  
  if (param_2 < *(int *)(param_1 + 0x19d4)) {
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      if (*(char *)(*(int *)(param_1 + 0x19d0) + 0x218 + param_2 * 0x224) != '\0') {
        operator_delete(*(void **)(*(int *)(param_1 + 0x19d0) + 0x21c + param_2 * 0x224));
        *(undefined4 *)(*(int *)(param_1 + 0x19d0) + 0x21c + param_2 * 0x224) = 0;
      }
      sVar2 = strlen(param_3);
      pvVar3 = operator_new(sVar2 + 1);
      *(void **)(*(int *)(param_1 + 0x19d0) + 0x21c + param_2 * 0x224) = pvVar3;
      strcpy(*(char **)(*(int *)(param_1 + 0x19d0) + 0x21c + param_2 * 0x224),param_3);
      *(undefined1 *)(*(int *)(param_1 + 0x19d0) + 0x218 + param_2 * 0x224) = 1;
    }
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      if (*(char *)(*(int *)(param_1 + 0x19d0) + 0x219 + param_2 * 0x224) != '\0') {
        operator_delete(*(void **)(*(int *)(param_1 + 0x19d0) + 0x220 + param_2 * 0x224));
        *(undefined4 *)(*(int *)(param_1 + 0x19d0) + 0x220 + param_2 * 0x224) = 0;
      }
      sVar2 = strlen(param_4);
      pvVar3 = operator_new(sVar2 + 1);
      *(void **)(*(int *)(param_1 + 0x19d0) + 0x220 + param_2 * 0x224) = pvVar3;
      strcpy(*(char **)(*(int *)(param_1 + 0x19d0) + 0x220 + param_2 * 0x224),param_4);
      *(undefined1 *)(*(int *)(param_1 + 0x19d0) + 0x219 + param_2 * 0x224) = 1;
    }
    cVar1 = FUN_005df700(0xffffffff);
    if (cVar1 != '\0') {
      FUN_005f85d0();
    }
  }
  return;
}

