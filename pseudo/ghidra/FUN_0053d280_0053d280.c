// FUN_0053d280  0053d280

void * __thiscall FUN_0053d280(void *param_1,uint param_2)

{
  FUN_0053c460();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

