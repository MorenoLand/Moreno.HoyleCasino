// FUN_00428bf0  00428bf0

void * __thiscall FUN_00428bf0(void *param_1,uint param_2)

{
  FUN_00427fe0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

