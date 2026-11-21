// FUN_00566cb0  00566cb0

void * __thiscall FUN_00566cb0(void *param_1,uint param_2)

{
  FUN_005634e0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

