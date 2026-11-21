// FUN_00532a70  00532a70

void * __thiscall FUN_00532a70(void *param_1,uint param_2)

{
  FUN_0052e7c0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

