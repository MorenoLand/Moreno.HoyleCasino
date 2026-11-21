// FUN_005472c0  005472c0

void * __thiscall FUN_005472c0(void *param_1,uint param_2)

{
  FUN_00542f20();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

