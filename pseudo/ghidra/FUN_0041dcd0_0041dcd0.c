// FUN_0041dcd0  0041dcd0

void * __thiscall FUN_0041dcd0(void *param_1,uint param_2)

{
  FUN_0041d880();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

