// FUN_006355b0  006355b0

void FUN_006355b0(undefined4 param_1,char *param_2)

{
  int *piVar1;
  char *_Source;
  undefined4 extraout_var;
  
  if (param_2 != (char *)0x0) {
    piVar1 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(param_1);
    _Source = (char *)(**(code **)(*piVar1 + 8))(param_1,piVar1,extraout_var);
    strcpy(param_2,_Source);
  }
  return;
}

