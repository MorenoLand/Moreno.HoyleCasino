// FUN_005c8b80  005c8b80

void * __thiscall FUN_005c8b80(void *param_1,uint param_2)

{
  FUN_005c8140();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

