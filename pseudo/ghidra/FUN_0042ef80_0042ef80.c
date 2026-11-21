// FUN_0042ef80  0042ef80

void * __thiscall FUN_0042ef80(void *param_1,uint param_2)

{
  FUN_0042be60();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

