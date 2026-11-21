// FUN_00607d70  00607d70

void * __thiscall FUN_00607d70(void *param_1,uint param_2)

{
  FUN_00607870();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

