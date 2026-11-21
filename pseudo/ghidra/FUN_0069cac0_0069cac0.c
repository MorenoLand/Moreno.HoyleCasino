// FUN_0069cac0  0069cac0

void FUN_0069cac0(undefined4 *param_1)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      _Memory = *(void **)param_1[2];
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
      if (*(void **)(param_1[2] + 4) != (void *)0x0) {
        free(*(void **)(param_1[2] + 4));
      }
      free((void *)param_1[2]);
    }
    puVar2 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    free(param_1);
  }
  return;
}

