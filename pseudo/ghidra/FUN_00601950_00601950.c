// FUN_00601950  00601950

void * __thiscall FUN_00601950(void *param_1,uint param_2)

{
  FUN_00601160();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

