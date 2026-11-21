// FUN_00449610  00449610

void * __thiscall FUN_00449610(void *param_1,uint param_2)

{
  FUN_00447e90();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

