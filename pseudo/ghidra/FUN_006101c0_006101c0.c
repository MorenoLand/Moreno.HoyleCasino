// FUN_006101c0  006101c0

void * __thiscall FUN_006101c0(void *param_1,uint param_2)

{
  FUN_0060fe90();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

