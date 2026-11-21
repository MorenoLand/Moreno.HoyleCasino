// FUN_005dca00  005dca00

void * __thiscall FUN_005dca00(void *param_1,uint param_2)

{
  FUN_005d7bd0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

