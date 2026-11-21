// FUN_005ace90  005ace90

void * __thiscall FUN_005ace90(void *param_1,uint param_2)

{
  FUN_005aaa00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

