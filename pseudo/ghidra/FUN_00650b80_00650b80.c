// FUN_00650b80  00650b80

void * __thiscall FUN_00650b80(void *param_1,uint param_2)

{
  FUN_00650860();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

