// FUN_0068f8f0  0068f8f0

void FUN_0068f8f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_var;
  
  while (*(char *)((int)param_1 + 0x45) == '\0') {
    FUN_0068f8f0(param_1[2]);
    puVar1 = (undefined4 *)*param_1;
    FUN_0068fa90(param_1,extraout_var);
    operator_delete(param_1);
    param_1 = puVar1;
  }
  return;
}

