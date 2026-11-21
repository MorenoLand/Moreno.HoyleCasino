// FUN_0041dca0  0041dca0

void * __thiscall FUN_0041dca0(void *param_1,uint param_2)

{
  FUN_00418320();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

