// FUN_00674930  00674930

void * __thiscall FUN_00674930(void *param_1,uint param_2)

{
  FUN_00673d50();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

