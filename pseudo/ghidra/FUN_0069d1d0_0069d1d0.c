// FUN_0069d1d0  0069d1d0

void FUN_0069d1d0(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = malloc(0x100);
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  *puVar1 = 0;
  param_1[4] = 0x100;
  return;
}

