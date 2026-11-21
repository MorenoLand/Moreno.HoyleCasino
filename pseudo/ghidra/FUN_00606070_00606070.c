// FUN_00606070  00606070

void * __thiscall FUN_00606070(void *param_1,uint param_2)

{
  FUN_00605c60();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

