// FUN_00532b00  00532b00

void * __thiscall FUN_00532b00(void *param_1,uint param_2)

{
  FUN_0052fad0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

