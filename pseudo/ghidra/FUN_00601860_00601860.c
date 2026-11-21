// FUN_00601860  00601860

void * __thiscall FUN_00601860(void *param_1,uint param_2)

{
  FUN_00600aa0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

