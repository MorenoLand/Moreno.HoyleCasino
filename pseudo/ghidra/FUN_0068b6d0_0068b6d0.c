// FUN_0068b6d0  0068b6d0

void * __thiscall FUN_0068b6d0(void *param_1,uint param_2)

{
  FUN_0068a0d0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

