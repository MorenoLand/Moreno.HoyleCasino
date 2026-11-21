// FUN_0058fc90  0058fc90

void * __thiscall FUN_0058fc90(void *param_1,uint param_2)

{
  FUN_0058b0a0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

