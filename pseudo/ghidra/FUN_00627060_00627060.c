// FUN_00627060  00627060

void * __thiscall FUN_00627060(void *param_1,uint param_2)

{
  FUN_00626c60();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

