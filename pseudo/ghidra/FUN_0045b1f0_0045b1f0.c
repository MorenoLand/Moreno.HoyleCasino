// FUN_0045b1f0  0045b1f0

void * __thiscall FUN_0045b1f0(void *param_1,uint param_2)

{
  FUN_0045aec0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

