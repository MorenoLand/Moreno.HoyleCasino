// FUN_005ff210  005ff210

void * __thiscall FUN_005ff210(void *param_1,uint param_2)

{
  FUN_005fc740();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

