// FUN_00594580  00594580

void * __thiscall FUN_00594580(void *param_1,uint param_2)

{
  FUN_00590d80();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

