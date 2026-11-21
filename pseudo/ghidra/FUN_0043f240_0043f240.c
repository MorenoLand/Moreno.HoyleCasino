// FUN_0043f240  0043f240

void * __thiscall FUN_0043f240(void *param_1,uint param_2)

{
  FUN_0043d260();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

