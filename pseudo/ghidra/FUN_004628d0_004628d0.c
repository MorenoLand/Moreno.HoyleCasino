// FUN_004628d0  004628d0

void * __thiscall FUN_004628d0(void *param_1,uint param_2)

{
  FUN_0045f770();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

