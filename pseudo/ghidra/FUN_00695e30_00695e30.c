// FUN_00695e30  00695e30

void FUN_00695e30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00697780(param_1 + 4);
  puVar2 = param_1 + 0xc;
  iVar1 = 7;
  do {
    free((void *)*puVar2);
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  free((void *)param_1[9]);
  free((void *)param_1[0x26]);
  free((void *)param_1[0x28]);
  for (iVar1 = 0x2d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

