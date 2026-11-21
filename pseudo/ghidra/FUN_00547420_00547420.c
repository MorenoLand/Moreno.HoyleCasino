// FUN_00547420  00547420

void * __thiscall FUN_00547420(void *param_1,uint param_2)

{
  FUN_005473b0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

