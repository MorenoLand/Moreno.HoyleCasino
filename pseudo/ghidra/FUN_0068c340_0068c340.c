// FUN_0068c340  0068c340

void FUN_0068c340(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_var;
  
  while (*(char *)((int)param_1 + 0x35) == '\0') {
    FUN_0068c340(param_1[2]);
    puVar1 = (undefined4 *)*param_1;
    FUN_0068f950(param_1,extraout_var);
    operator_delete(param_1);
    param_1 = puVar1;
  }
  return;
}

