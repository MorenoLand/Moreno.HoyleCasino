// FUN_0059ff70  0059ff70

void * __thiscall FUN_0059ff70(void *param_1,uint param_2)

{
  FUN_0059e900();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

