// FUN_005b23d0  005b23d0

void * __thiscall FUN_005b23d0(void *param_1,uint param_2)

{
  FUN_005af990();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

