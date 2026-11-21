// FUN_00484250  00484250

void * __thiscall FUN_00484250(void *param_1,uint param_2)

{
  FUN_00479480();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

