// FUN_00571fb0  00571fb0

void * __thiscall FUN_00571fb0(void *param_1,uint param_2)

{
  FUN_00571760();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

