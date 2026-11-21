// FUN_00607790  00607790

void * __thiscall FUN_00607790(void *param_1,uint param_2)

{
  FUN_00606ee0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

