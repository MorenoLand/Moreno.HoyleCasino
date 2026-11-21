// FUN_006017a0  006017a0

void * __thiscall FUN_006017a0(void *param_1,uint param_2)

{
  FUN_006004c0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

