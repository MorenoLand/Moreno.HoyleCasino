// FUN_00547360  00547360

void * __thiscall FUN_00547360(void *param_1,uint param_2)

{
  FUN_005469a0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

