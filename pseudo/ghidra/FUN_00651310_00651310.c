// FUN_00651310  00651310

void * __thiscall FUN_00651310(void *param_1,uint param_2)

{
  FUN_00650c00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

