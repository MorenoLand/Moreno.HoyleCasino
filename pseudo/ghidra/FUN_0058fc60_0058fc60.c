// FUN_0058fc60  0058fc60

void * __thiscall FUN_0058fc60(void *param_1,uint param_2)

{
  FUN_0058af90();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

