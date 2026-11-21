// FUN_00597a90  00597a90

void * __thiscall FUN_00597a90(void *param_1,uint param_2)

{
  FUN_00597200();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

