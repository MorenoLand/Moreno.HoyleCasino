// FUN_00525cf0  00525cf0

void * __thiscall FUN_00525cf0(void *param_1,uint param_2)

{
  FUN_005243b0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

