// FUN_0068c410  0068c410

void __fastcall FUN_0068c410(int param_1)

{
  undefined1 local_1c [8];
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(param_1 + 4);
  local_c = 0;
  if (param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  local_10 = **(undefined4 **)(param_1 + 4);
  local_14 = 0;
  local_c = param_1;
  if (param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  local_14 = param_1;
  FUN_0068ce80(local_1c,param_1,local_10,local_c,local_8);
  operator_delete(*(void **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

