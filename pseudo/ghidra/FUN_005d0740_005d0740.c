// FUN_005d0740  005d0740

void * __thiscall FUN_005d0740(void *param_1,uint param_2)

{
  FUN_005cdb00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

