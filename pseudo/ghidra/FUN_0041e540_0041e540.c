// FUN_0041e540  0041e540

void * __thiscall FUN_0041e540(void *param_1,uint param_2)

{
  FUN_0041dd20();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

