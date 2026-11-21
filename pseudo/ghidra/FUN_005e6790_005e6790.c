// FUN_005e6790  005e6790

void * __thiscall FUN_005e6790(void *param_1,uint param_2)

{
  FUN_005e5870();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

