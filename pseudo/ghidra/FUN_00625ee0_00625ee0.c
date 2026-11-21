// FUN_00625ee0  00625ee0

void * __thiscall FUN_00625ee0(void *param_1,uint param_2)

{
  FUN_005ff370();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

