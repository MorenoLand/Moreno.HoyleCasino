// FUN_00585670  00585670

void * __thiscall FUN_00585670(void *param_1,uint param_2)

{
  FUN_00584760();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

