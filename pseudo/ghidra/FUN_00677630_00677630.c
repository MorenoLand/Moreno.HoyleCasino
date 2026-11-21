// FUN_00677630  00677630

void * __thiscall FUN_00677630(void *param_1,uint param_2)

{
  FUN_00676be0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

