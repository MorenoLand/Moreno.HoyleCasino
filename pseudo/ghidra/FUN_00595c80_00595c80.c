// FUN_00595c80  00595c80

void * __thiscall FUN_00595c80(void *param_1,uint param_2)

{
  FUN_00594810();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

