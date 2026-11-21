// FUN_005f2d70  005f2d70

void * __thiscall FUN_005f2d70(void *param_1,uint param_2)

{
  FUN_005f0d60();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

