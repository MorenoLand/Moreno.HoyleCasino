// FUN_004337d0  004337d0

void * __thiscall FUN_004337d0(void *param_1,uint param_2)

{
  FUN_00431d10();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

