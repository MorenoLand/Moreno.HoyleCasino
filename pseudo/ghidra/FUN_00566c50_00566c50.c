// FUN_00566c50  00566c50

void * __thiscall FUN_00566c50(void *param_1,uint param_2)

{
  FUN_005630e0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

