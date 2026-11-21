// FUN_006411d0  006411d0

void * __thiscall FUN_006411d0(void *param_1,uint param_2)

{
  FUN_0063ff00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

