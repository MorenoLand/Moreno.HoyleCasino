// FUN_004040f0  004040f0

void * __thiscall FUN_004040f0(void *param_1,uint param_2)

{
  FUN_00403c20();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

