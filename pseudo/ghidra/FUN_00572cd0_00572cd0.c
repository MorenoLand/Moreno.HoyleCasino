// FUN_00572cd0  00572cd0

void * __thiscall FUN_00572cd0(void *param_1,uint param_2)

{
  FUN_005720b0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

