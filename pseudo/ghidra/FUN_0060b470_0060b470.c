// FUN_0060b470  0060b470

void * __thiscall FUN_0060b470(void *param_1,uint param_2)

{
  FUN_00608110();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

