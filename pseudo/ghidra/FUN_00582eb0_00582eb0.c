// FUN_00582eb0  00582eb0

void * __thiscall FUN_00582eb0(void *param_1,uint param_2)

{
  FUN_00581170();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

