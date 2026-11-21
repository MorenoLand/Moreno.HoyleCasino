// FUN_0068edc0  0068edc0

void __fastcall FUN_0068edc0(int *param_1)

{
  int iVar1;
  int *local_14;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if (*(char *)(param_1[1] + 0x45) == '\0') {
    if (*(char *)(*(int *)(param_1[1] + 8) + 0x45) == '\0') {
      for (local_14 = *(int **)(param_1[1] + 8); *(char *)(*local_14 + 0x45) == '\0';
          local_14 = (int *)*local_14) {
      }
      param_1[1] = (int)local_14;
    }
    else {
      while ((iVar1 = *(int *)(param_1[1] + 4), *(char *)(iVar1 + 0x45) == '\0' &&
             (param_1[1] == *(int *)(iVar1 + 8)))) {
        param_1[1] = iVar1;
      }
      param_1[1] = iVar1;
    }
  }
  else {
    _invalid_parameter_noinfo();
  }
  return;
}

