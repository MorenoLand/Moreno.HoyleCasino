// FUN_005971a0  005971a0

void * __thiscall FUN_005971a0(void *param_1,uint param_2)

{
  FUN_00595d60();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

