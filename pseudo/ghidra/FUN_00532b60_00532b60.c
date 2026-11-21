// FUN_00532b60  00532b60

void * __thiscall FUN_00532b60(void *param_1,uint param_2)

{
  FUN_005320f0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

