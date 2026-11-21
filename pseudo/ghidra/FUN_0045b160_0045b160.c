// FUN_0045b160  0045b160

void * __thiscall FUN_0045b160(void *param_1,uint param_2)

{
  FUN_00459b50();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

