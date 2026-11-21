// FUN_006003f0  006003f0

void * __thiscall FUN_006003f0(void *param_1,uint param_2)

{
  FUN_005ffd40();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

