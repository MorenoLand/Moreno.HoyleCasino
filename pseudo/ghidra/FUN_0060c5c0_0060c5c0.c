// FUN_0060c5c0  0060c5c0

void * __thiscall FUN_0060c5c0(void *param_1,uint param_2)

{
  FUN_0060b5b0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

