// FUN_00672fb0  00672fb0

void * __thiscall FUN_00672fb0(void *param_1,uint param_2)

{
  FUN_00672b00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

