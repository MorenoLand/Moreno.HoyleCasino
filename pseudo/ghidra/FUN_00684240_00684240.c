// FUN_00684240  00684240

undefined4 FUN_00684240(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    FUN_00690f20(param_1 + 0x94);
    FUN_00691320(param_1 + 0x78);
    FUN_006863b0(param_1 + 0x1e);
    if ((param_1[0x12] != 0) && (param_1[0xd] != 0)) {
      iVar2 = 0;
      if (0 < param_1[0xd]) {
        iVar1 = 0;
        iVar3 = 0;
        do {
          FUN_00690710(param_1[0x12] + iVar3);
          FUN_00690670(param_1[0x13] + iVar1);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x20;
          iVar1 = iVar1 + 0x10;
        } while (iVar2 < param_1[0xd]);
      }
      free((void *)param_1[0x12]);
      free((void *)param_1[0x13]);
    }
    if ((void *)param_1[0xf] != (void *)0x0) {
      free((void *)param_1[0xf]);
    }
    if ((void *)param_1[0x11] != (void *)0x0) {
      free((void *)param_1[0x11]);
    }
    if ((void *)param_1[0x10] != (void *)0x0) {
      free((void *)param_1[0x10]);
    }
    if ((void *)param_1[0xe] != (void *)0x0) {
      free((void *)param_1[0xe]);
    }
    FUN_00686550(param_1 + 6);
    if (*param_1 != 0) {
      (*(code *)param_1[0xb2])(*param_1);
    }
    for (iVar2 = 0xb4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}

