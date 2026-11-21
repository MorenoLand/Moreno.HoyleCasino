// FUN_00671f60  00671f60

void * __thiscall FUN_00671f60(void *param_1,uint param_2)

{
  FUN_00671d00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

