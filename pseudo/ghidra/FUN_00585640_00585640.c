// FUN_00585640  00585640

void * __thiscall FUN_00585640(void *param_1,uint param_2)

{
  FUN_005841f0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

