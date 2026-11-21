// FUN_005787c0  005787c0

void * __thiscall FUN_005787c0(void *param_1,uint param_2)

{
  FUN_00577100();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

