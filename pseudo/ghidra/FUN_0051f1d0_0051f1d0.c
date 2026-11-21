// FUN_0051f1d0  0051f1d0

void * __thiscall FUN_0051f1d0(void *param_1,uint param_2)

{
  FUN_0051cb40();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

