// FUN_005f5f20  005f5f20

void * __thiscall FUN_005f5f20(void *param_1,uint param_2)

{
  FUN_005f5c40();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

