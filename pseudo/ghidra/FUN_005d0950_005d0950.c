// FUN_005d0950  005d0950

void * __thiscall FUN_005d0950(void *param_1,uint param_2)

{
  FUN_005d0580();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

