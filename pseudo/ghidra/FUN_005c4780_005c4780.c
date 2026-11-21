// FUN_005c4780  005c4780

void * __thiscall FUN_005c4780(void *param_1,uint param_2)

{
  FUN_005c0b40();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

