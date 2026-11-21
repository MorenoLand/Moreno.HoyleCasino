// FUN_00661140  00661140

void * __thiscall FUN_00661140(void *param_1,uint param_2)

{
  FUN_0065dcc0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

