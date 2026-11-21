// FUN_00627f70  00627f70

void * __thiscall FUN_00627f70(void *param_1,uint param_2)

{
  FID_conflict__ctype<char>();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

