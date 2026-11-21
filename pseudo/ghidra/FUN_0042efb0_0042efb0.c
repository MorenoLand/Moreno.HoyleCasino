// FUN_0042efb0  0042efb0

void * __thiscall FUN_0042efb0(void *param_1,uint param_2)

{
  FUN_0042bfe0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

