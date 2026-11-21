// FUN_00671f00  00671f00

void * __thiscall FUN_00671f00(void *param_1,uint param_2)

{
  FUN_00671200();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

