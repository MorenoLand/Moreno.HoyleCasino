// FUN_0066f880  0066f880

void * __thiscall FUN_0066f880(void *param_1,uint param_2)

{
  FUN_0066f440();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

