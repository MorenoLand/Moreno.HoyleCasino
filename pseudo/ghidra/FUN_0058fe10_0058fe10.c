// FUN_0058fe10  0058fe10

void * __thiscall FUN_0058fe10(void *param_1,uint param_2)

{
  FUN_0058fb20();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

