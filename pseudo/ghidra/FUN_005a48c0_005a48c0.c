// FUN_005a48c0  005a48c0

void * __thiscall FUN_005a48c0(void *param_1,uint param_2)

{
  FUN_005a1d20();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

