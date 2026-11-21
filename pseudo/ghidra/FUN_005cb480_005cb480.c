// FUN_005cb480  005cb480

void * __thiscall FUN_005cb480(void *param_1,uint param_2)

{
  FUN_005cb3a0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

