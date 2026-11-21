// FUN_00650b50  00650b50

void * __thiscall FUN_00650b50(void *param_1,uint param_2)

{
  FUN_0064cc80();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

