// FUN_004460b0  004460b0

void * __thiscall FUN_004460b0(void *param_1,uint param_2)

{
  FUN_00444a80();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

