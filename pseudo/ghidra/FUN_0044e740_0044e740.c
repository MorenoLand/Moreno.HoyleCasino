// FUN_0044e740  0044e740

void * __thiscall FUN_0044e740(void *param_1,uint param_2)

{
  FUN_0044e150();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

