// FUN_006454c0  006454c0

void * __thiscall FUN_006454c0(void *param_1,uint param_2)

{
  FUN_006448c0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

