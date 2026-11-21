// FUN_00524250  00524250

void * __thiscall FUN_00524250(void *param_1,uint param_2)

{
  FUN_005eac00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

