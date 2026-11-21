// FUN_00404060  00404060

void * __thiscall FUN_00404060(void *param_1,uint param_2)

{
  FUN_00402b70();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

