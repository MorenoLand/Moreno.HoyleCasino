// FUN_00571e30  00571e30

void * __thiscall FUN_00571e30(void *param_1,uint param_2)

{
  FUN_0056fc30();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

