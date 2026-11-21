// FUN_00614420  00614420

void * __thiscall FUN_00614420(void *param_1,uint param_2)

{
  FUN_006132a0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

