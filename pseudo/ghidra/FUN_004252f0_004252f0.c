// FUN_004252f0  004252f0

void * __thiscall FUN_004252f0(void *param_1,uint param_2)

{
  FUN_00423d60();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

