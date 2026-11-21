// FUN_004224f0  004224f0

void * __thiscall FUN_004224f0(void *param_1,uint param_2)

{
  FUN_00421f00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

