// FUN_005cb3f0  005cb3f0

void * __thiscall FUN_005cb3f0(void *param_1,uint param_2)

{
  FUN_005c9af0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

