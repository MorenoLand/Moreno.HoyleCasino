// FUN_005d08f0  005d08f0

void * __thiscall FUN_005d08f0(void *param_1,uint param_2)

{
  FUN_005cfb60();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

