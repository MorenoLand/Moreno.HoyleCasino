// FUN_0057d570  0057d570

void * __thiscall FUN_0057d570(void *param_1,uint param_2)

{
  FUN_0057a840();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

