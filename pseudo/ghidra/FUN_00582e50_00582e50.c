// FUN_00582e50  00582e50

void * __thiscall FUN_00582e50(void *param_1,uint param_2)

{
  FUN_0057ded0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

