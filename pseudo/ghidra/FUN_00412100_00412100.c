// FUN_00412100  00412100

void * __thiscall FUN_00412100(void *param_1,uint param_2)

{
  FUN_0040dd20();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

