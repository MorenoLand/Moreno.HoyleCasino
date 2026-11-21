// FUN_006695b0  006695b0

void * __thiscall FUN_006695b0(void *param_1,uint param_2)

{
  FUN_00667bc0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

