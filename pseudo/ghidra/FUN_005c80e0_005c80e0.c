// FUN_005c80e0  005c80e0

void * __thiscall FUN_005c80e0(void *param_1,uint param_2)

{
  FUN_005c6ed0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

