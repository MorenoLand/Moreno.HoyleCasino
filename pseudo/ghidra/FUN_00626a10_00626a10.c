// FUN_00626a10  00626a10

void __thiscall FUN_00626a10(int param_1,char *param_2)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    pvVar2 = operator_new(sVar1 + 1);
    *(void **)(param_1 + 0x60) = pvVar2;
    strcpy(*(char **)(param_1 + 0x60),param_2);
    if (*(int *)(param_1 + 0x5c) != 0) {
      (**(code **)(**(int **)(param_1 + 0x5c) + 0xb4))(*(undefined4 *)(param_1 + 0x60));
      local_1c = FUN_005ef050();
      iVar3 = FUN_005ef130();
      iVar4 = FUN_005f5550();
      if (local_1c + 8 < iVar4 + -0xf) {
        local_1c = local_1c + 8;
      }
      else {
        local_1c = FUN_005f5550();
        local_1c = local_1c + -0xf;
      }
      FUN_005ecc60(local_1c);
      FUN_005eccb0(iVar3 + 1);
    }
  }
  return;
}

