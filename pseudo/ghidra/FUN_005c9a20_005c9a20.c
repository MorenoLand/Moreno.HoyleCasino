// FUN_005c9a20  005c9a20

void * __thiscall FUN_005c9a20(void *param_1,uint param_2)

{
  FUN_005c8c40();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

