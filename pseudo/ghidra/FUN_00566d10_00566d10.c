// FUN_00566d10  00566d10

void * __thiscall FUN_00566d10(void *param_1,uint param_2)

{
  FUN_00563b60();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

