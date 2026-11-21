// FUN_0061f3a0  0061f3a0

void * __thiscall FUN_0061f3a0(void *param_1,uint param_2)

{
  FUN_0061e400();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

