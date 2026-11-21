// FUN_0068f800  0068f800

void __fastcall FUN_0068f800(int *param_1)

{
  int *piVar1;
  int local_14;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if (*(char *)(param_1[1] + 0x45) == '\0') {
    if (*(char *)(*(int *)param_1[1] + 0x45) == '\0') {
      local_14 = *(int *)param_1[1];
      while (*(char *)(*(int *)(local_14 + 8) + 0x45) == '\0') {
        local_14 = *(int *)(local_14 + 8);
      }
      param_1[1] = local_14;
    }
    else {
      while ((piVar1 = *(int **)(param_1[1] + 4), *(char *)((int)piVar1 + 0x45) == '\0' &&
             (param_1[1] == *piVar1))) {
        param_1[1] = (int)piVar1;
      }
      if (*(char *)(param_1[1] + 0x45) == '\0') {
        param_1[1] = (int)piVar1;
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
  }
  else {
    param_1[1] = *(int *)(param_1[1] + 8);
    if (*(char *)(param_1[1] + 0x45) != '\0') {
      _invalid_parameter_noinfo();
    }
  }
  return;
}

