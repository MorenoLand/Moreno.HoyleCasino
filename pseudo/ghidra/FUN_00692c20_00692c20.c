// FUN_00692c20  00692c20

void FUN_00692c20(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)param_1[4] != (void *)0x0) {
      free((void *)param_1[4]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
      free((void *)param_1[5]);
    }
    if ((void *)param_1[6] != (void *)0x0) {
      free((void *)param_1[6]);
    }
    if (param_1[2] != 0) {
      iVar1 = 0;
      do {
        iVar2 = 0;
        do {
          free(*(void **)(*(int *)(iVar1 + param_1[2]) + iVar2));
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0x20);
        free(*(void **)(iVar1 + param_1[2]));
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0x44);
      free((void *)param_1[2]);
    }
    if (param_1[3] != 0) {
      iVar1 = 0;
      do {
        free(*(void **)(param_1[3] + iVar1));
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0xc);
      free((void *)param_1[3]);
    }
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}

