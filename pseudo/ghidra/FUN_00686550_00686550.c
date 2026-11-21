// FUN_00686550  00686550

undefined4 FUN_00686550(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
    }
    FUN_00686530(param_1);
  }
  return 0;
}

