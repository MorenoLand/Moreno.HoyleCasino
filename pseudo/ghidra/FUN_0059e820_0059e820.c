// FUN_0059e820  0059e820

void * __thiscall FUN_0059e820(void *param_1,uint param_2)

{
  FUN_0059cf80();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

