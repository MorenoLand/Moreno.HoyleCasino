// FUN_005b9440  005b9440

void __thiscall FUN_005b9440(int param_1,undefined4 param_2,uint param_3)

{
  uint local_d0;
  
  FUN_005b9ec0(param_3 + 1);
  if (*(int *)(param_1 + 8) == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4;
  }
  if (local_d0 <= param_3) {
    _invalid_parameter_noinfo();
  }
  FUN_005ba090(&param_2);
  return;
}

