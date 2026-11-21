// FUN_006411a0  006411a0

void * __thiscall FUN_006411a0(void *param_1,uint param_2)

{
  FUN_0063b7e0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

