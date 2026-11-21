// FUN_0051f140  0051f140

void * __thiscall FUN_0051f140(void *param_1,uint param_2)

{
  FUN_0051a050();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

