// FUN_004120d0  004120d0

void * __thiscall FUN_004120d0(void *param_1,uint param_2)

{
  FUN_0040c4f0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

