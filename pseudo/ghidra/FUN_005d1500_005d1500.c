// FUN_005d1500  005d1500

void * __thiscall FUN_005d1500(void *param_1,uint param_2)

{
  FUN_005d0a00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

