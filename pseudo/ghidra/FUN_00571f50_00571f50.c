// FUN_00571f50  00571f50

void * __thiscall FUN_00571f50(void *param_1,uint param_2)

{
  FUN_00571450();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

