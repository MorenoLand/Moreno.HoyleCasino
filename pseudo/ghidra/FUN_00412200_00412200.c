// FUN_00412200  00412200

void * __thiscall FUN_00412200(void *param_1,uint param_2)

{
  FUN_00411790();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

