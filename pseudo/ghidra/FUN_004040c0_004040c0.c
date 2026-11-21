// FUN_004040c0  004040c0

void * __thiscall FUN_004040c0(void *param_1,uint param_2)

{
  FUN_00403000();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

