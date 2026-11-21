// FUN_0053d250  0053d250

void * __thiscall FUN_0053d250(void *param_1,uint param_2)

{
  FUN_0053c1d0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

