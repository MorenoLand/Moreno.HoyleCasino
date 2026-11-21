// FUN_005acdd0  005acdd0

void * __thiscall FUN_005acdd0(void *param_1,uint param_2)

{
  FUN_005a6d60();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

