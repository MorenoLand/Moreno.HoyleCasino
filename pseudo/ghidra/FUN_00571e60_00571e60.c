// FUN_00571e60  00571e60

void * __thiscall FUN_00571e60(void *param_1,uint param_2)

{
  FUN_0056fcb0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

