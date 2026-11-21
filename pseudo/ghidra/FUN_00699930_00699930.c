// FUN_00699930  00699930

void FUN_00699930(undefined4 *param_1)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = 0;
    if (0 < (int)param_1[1]) {
      do {
        _Memory = *(void **)(param_1[5] + iVar1 * 4);
        if (_Memory != (void *)0x0) {
          free(_Memory);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1[1]);
    }
    free((void *)param_1[5]);
    iVar1 = 0;
    if (0 < (int)param_1[6]) {
      do {
        free(*(void **)(param_1[7] + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1[6]);
    }
    free((void *)param_1[7]);
    puVar2 = param_1;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    free(param_1);
  }
  return;
}

