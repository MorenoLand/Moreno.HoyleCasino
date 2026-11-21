// FUN_004f41d0  004f41d0

void * __thiscall FUN_004f41d0(void *param_1,uint param_2)

{
  FUN_004c5b20();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

