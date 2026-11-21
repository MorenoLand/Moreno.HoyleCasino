// FUN_0051f230  0051f230

void * __thiscall FUN_0051f230(void *param_1,uint param_2)

{
  FUN_0051ec10();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

