// FUN_00678660  00678660

void * __thiscall FUN_00678660(void *param_1,uint param_2)

{
  FUN_00677710();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

