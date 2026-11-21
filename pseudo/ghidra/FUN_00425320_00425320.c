// FUN_00425320  00425320

void * __thiscall FUN_00425320(void *param_1,uint param_2)

{
  FUN_005ec760();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

